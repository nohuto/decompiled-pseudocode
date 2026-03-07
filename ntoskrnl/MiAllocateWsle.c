__int64 __fastcall MiAllocateWsle(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        int a4,
        unsigned __int64 a5,
        char a6,
        __int64 a7)
{
  int v7; // r13d
  int v9; // r14d
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  char v12; // r12
  struct _KTHREAD *CurrentThread; // rcx
  char v14; // dl
  unsigned int Queue; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // esi
  ULONG_PTR v22; // r15
  char v23; // al
  ULONG_PTR v24; // rax
  char v25; // di
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r10
  int v29; // edx
  __int64 VirtualFaultPageInfo; // r13
  __int64 v31; // rcx
  int *v32; // r12
  unsigned __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // r11
  __int64 v38; // r8
  unsigned __int64 v39; // rbx
  int v41; // eax
  ULONG_PTR v42; // rcx
  int v43; // esi
  ULONG_PTR v44; // rbx
  char v45; // dl
  int v46; // edx
  bool v47; // zf
  int v48; // eax
  char v49; // al
  unsigned __int64 v50; // rax
  char v51; // [rsp+30h] [rbp-50h]
  int v52; // [rsp+38h] [rbp-48h] BYREF
  int v53; // [rsp+3Ch] [rbp-44h] BYREF
  int v54; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-38h]
  __int64 v56; // [rsp+50h] [rbp-30h]
  __int128 v57; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp+50h] BYREF
  int v61; // [rsp+D8h] [rbp+58h]

  v61 = a4;
  BugCheckParameter2 = (ULONG_PTR)a3;
  v9 = *(_DWORD *)(a1 + 184);
  v10 = (__int64)((_QWORD)a2 << 25) >> 16;
  v55 = v10;
  if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = 1LL;
    v56 = 1LL;
  }
  else
  {
    v56 = 0LL;
    v11 = 0LL;
    if ( (v9 & 7) == 0 )
    {
      if ( (((unsigned __int8)*a3 >> 1) & 7) != 0 )
        *a3 &= 0xFFFFFFFFFFFFFFF1uLL;
      v10 = v55;
    }
  }
  v12 = a6;
  if ( (a6 & 1) != 0 )
  {
    MiProcessWsInSwapFault(a1, (__int64)a3, v10, &a5);
    a4 = v61;
  }
  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v51 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v16 = Queue >> 9;
  }
  else
  {
    v16 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v17 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
    if ( v17 && v16 >= *(_DWORD *)(v17 + 1076) )
      LOBYTE(v16) = *(_DWORD *)(v17 + 1076);
    v14 = 0;
  }
  v18 = a5;
  v19 = v16 & 7;
  v20 = 5;
  v21 = 4 * v19;
  if ( v11 )
  {
    if ( (v12 & 2) != 0 )
    {
      v14 = 9;
    }
    else if ( v19 >= 5 )
    {
      if ( (v12 & 8) != 0 )
      {
        v14 = 6;
      }
      else if ( (a5 & 1) != 0 && (a5 & 0x20) == 0 )
      {
        v14 = 1;
      }
    }
    else
    {
      v14 = 7;
    }
    v51 = v14;
    LOBYTE(a4) = v14 | (16 * (a4 & 7));
    v61 = a4;
    LOBYTE(v7) = a4;
  }
  else
  {
    v43 = 5;
    if ( v19 > 5 )
      v43 = v19;
    LOBYTE(v7) = 0;
    v61 = v7;
    v21 = 4 * v43;
  }
  v22 = BugCheckParameter2;
  v23 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v23 & 8) == 0 )
    v20 = v23 & 7;
  if ( v20 < v21 >> 2 )
  {
    v52 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v52);
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
    }
    v42 = BugCheckParameter2;
    *(_BYTE *)(BugCheckParameter2 + 35) = (v21 >> 2) | *(_BYTE *)(BugCheckParameter2 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 = a5;
    v22 = BugCheckParameter2;
  }
  if ( (*(_BYTE *)v22 & 1) == 0 )
  {
    v53 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v53);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    v24 = BugCheckParameter2;
    if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
      *(_QWORD *)BugCheckParameter2 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 = a5;
    v22 = BugCheckParameter2;
  }
  if ( (v18 & 1) != 0 )
  {
    v25 = v9 & 7;
    if ( (v9 & 7) == 2 )
    {
      v18 |= 0x8000000000000000uLL;
      a5 = v18;
    }
    else if ( (MiFlags & 0x8000) != 0 )
    {
      v26 = v55;
      if ( (v55 < 0xFFFFF68000000000uLL || v55 > 0xFFFFF6FFFFFFFFFFuLL)
        && (v18 & 0x8000000000000000uLL) == 0
        && (v25 != 0 || (MiFlags & 0x20000) != 0) )
      {
        v54 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( *(__int64 *)(v22 + 24) < 0 );
        }
        v44 = BugCheckParameter2;
        if ( !(unsigned int)MiGetPagePrivilege(BugCheckParameter2) )
        {
          v45 = 38;
          if ( !v25 )
            v45 = 7;
          MiMarkPfnVerified(v44, v45);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v18 = a5;
        v22 = BugCheckParameter2;
      }
LABEL_25:
      if ( (MiFlags & 0x4000) != 0 )
      {
        v27 = *(_QWORD *)(v22 + 40);
        if ( v27 < 0 && (((unsigned __int64)v27 >> 60) & 7) == 3 && (v25 == 4 || v25 == 1) )
        {
          v57 = 0LL;
          if ( (MiGetPagePrivilege(v22) & 8) != 0 )
          {
            v41 = KeSetPagePrivilege(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v22 + 0x220000000000LL) >> 4), &v57, 1024LL);
            if ( v41 < 0 )
              KeBugCheckEx(0x1Au, 0x515E4uLL, v22, v41, 0LL);
          }
        }
      }
      v28 = a7;
      if ( a7
        && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v26)) != 0
        && ((v46 = *(_DWORD *)(v28 + 56), (v46 & 0x20) == 0)
         || _bittest64((const signed __int64 *)(v22 + 40), 0x28u)
         || *(__int64 *)(v22 + 8) <= 0) )
      {
        v47 = (v46 & 0x10) == 0;
        v29 = v61;
        if ( !v47 && (unsigned __int8)v51 < 6u )
        {
          LOBYTE(v29) = v61 & 0xF0 | 6;
          v61 = v29;
        }
      }
      else
      {
        LOBYTE(v29) = v61;
        VirtualFaultPageInfo = 0LL;
        v31 = v28;
      }
      v32 = (int *)(v31 + 56);
      if ( v56 )
      {
        v18 = v18 & 0x80FFFFFFFFFFFFFFuLL | ((unsigned __int64)(unsigned __int8)v29 << 56);
        a5 = v18;
        LOBYTE(v21) = v21 | 1;
      }
      v33 = v18;
      if ( (unsigned int)MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v35, v34, v36) )
        {
          if ( !HIBYTE(word_140C6697C) && (v18 & 1) != 0 )
            v33 = v18 | 0x8000000000000000uLL;
          *a2 = v33;
          MiWritePteShadow(a2, v33);
          v38 = a7;
          goto LABEL_34;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v18 & 1) != 0 )
        {
          v18 = a5;
          v37 = 0x8000000000000000uLL;
          v22 = BugCheckParameter2;
          v33 |= 0x8000000000000000uLL;
          goto LABEL_33;
        }
        v18 = a5;
        v22 = BugCheckParameter2;
      }
      v37 = 0x8000000000000000uLL;
LABEL_33:
      v38 = a7;
      *a2 = v33;
      v32 = (int *)(v38 + 56);
LABEL_34:
      if ( VirtualFaultPageInfo )
      {
        v48 = *v32;
        if ( ((*v32 & 1) == 0 || (v18 & 0x42) != 0) && ((v48 & 2) == 0 || (v18 & v37) == 0) )
        {
          LOBYTE(v21) = v21 | 2;
          if ( (v48 & 0x20) != 0 )
          {
            LOBYTE(v21) = v21 & 0xFD;
            if ( !*(_QWORD *)(v38 + 48) )
            {
              v49 = MiCompleteSecureProcessFault(&BugCheckParameter2, &a5);
              v18 = a5;
              v22 = BugCheckParameter2;
              LOBYTE(v21) = (2 * (v49 & 1)) | v21;
            }
          }
          if ( (v21 & 2) != 0 )
          {
            v50 = MI_READ_PTE_LOCK_FREE(&a5);
            MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v50 >> 12) & 0xFFFFFFFFFFLL, v18);
          }
        }
      }
      v12 = a6;
      LOBYTE(v7) = v61;
      goto LABEL_36;
    }
    v26 = v55;
    goto LABEL_25;
  }
LABEL_36:
  if ( v56 && (v21 & 1) == 0 )
    *(_BYTE *)v56 = v7;
  if ( (v12 & 2) != 0 )
  {
    MiIncrementVmFaultCount(a1, 1LL);
    goto LABEL_41;
  }
  if ( (v12 & 4) != 0 )
  {
LABEL_41:
    v39 = v55;
    goto LABEL_42;
  }
  v39 = v55;
  MiAddWorkingSetEntries(a1, v55, 1LL);
LABEL_42:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(v22, v9 & 7, v39);
  return 1LL;
}
