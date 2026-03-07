__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // esi
  __int64 v7; // r8
  ULONG_PTR v8; // r13
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v10; // dl
  _KPROCESS *Process; // rcx
  char v12; // al
  __int64 v13; // rcx
  __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  unsigned __int64 LeafVa; // r14
  bool v21; // zf
  __int64 *v22; // r14
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r15
  int v25; // r11d
  int v26; // eax
  _QWORD *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  int v32; // eax
  _QWORD *v33; // rcx
  _QWORD *v34; // r8
  int v35; // eax
  struct _KTHREAD *v36; // [rsp+30h] [rbp-89h]
  __int16 v37; // [rsp+40h] [rbp-79h] BYREF
  int v38; // [rsp+42h] [rbp-77h]
  __int16 v39; // [rsp+46h] [rbp-73h]
  __int64 v40; // [rsp+48h] [rbp-71h]
  unsigned __int64 v41; // [rsp+50h] [rbp-69h]
  unsigned __int64 v42; // [rsp+58h] [rbp-61h]
  unsigned __int64 v43; // [rsp+60h] [rbp-59h]
  _QWORD *v44[2]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v45[2]; // [rsp+78h] [rbp-41h] BYREF
  unsigned __int64 v46; // [rsp+88h] [rbp-31h] BYREF
  int v47; // [rsp+90h] [rbp-29h]
  int v48; // [rsp+94h] [rbp-25h]
  __int64 v49; // [rsp+98h] [rbp-21h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-19h]
  _OWORD v51[6]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 *v52; // [rsp+120h] [rbp+67h]
  int v54; // [rsp+138h] [rbp+7Fh]

  v46 = 0LL;
  v42 = 0LL;
  v4 = 0;
  v43 = 0LL;
  v49 = 0LL;
  BugCheckParameter2 = 0LL;
  v7 = a2;
  v54 = 0;
  v8 = 0LL;
  v38 = 0;
  v39 = 0;
  v48 = 0;
  v44[1] = v44;
  v44[0] = v44;
  v45[1] = v45;
  v45[0] = v45;
  v37 = 1;
  v40 = a2;
  v41 = a1;
  v47 = a4;
  CurrentThread = KeGetCurrentThread();
  v36 = CurrentThread;
  v10 = BYTE6(CurrentThread[1].Queue);
  Process = CurrentThread->ApcState.Process;
  if ( v10 >= 2u )
    return 3221225626LL;
  if ( a3 != 1 )
  {
    v12 = *(_BYTE *)(a3 + 184) & 7;
    if ( v12 == 1 )
    {
      v30 = Process[1].Affinity.StaticBitmap[25];
      if ( v30 )
      {
        v13 = *(unsigned __int16 *)(v30 + 366);
        goto LABEL_6;
      }
    }
    else if ( !v12 )
    {
      v13 = Process[1].IdealProcessor[25];
LABEL_6:
      v14 = *(__int64 **)(qword_140C67048 + 8 * v13);
      goto LABEL_7;
    }
    return 3221225485LL;
  }
  v14 = (__int64 *)&MiSystemPartition;
LABEL_7:
  v52 = v14;
  BYTE6(CurrentThread[1].Queue) = v10 + 1;
  --CurrentThread->KernelApcDisable;
  v15 = v41;
  memset(v51, 0, 48);
  if ( v42 >= v41 )
  {
LABEL_47:
    v22 = v52;
    goto LABEL_48;
  }
  while ( 1 )
  {
    v16 = 0xFFFFF68000000000uLL;
    if ( (v47 & 0x40000) != 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      {
        v4 = -1073741749;
        goto LABEL_47;
      }
      v15 = v41;
    }
    v17 = v7 + 16 * v42;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v43 >= ((unsigned __int64)(*(_DWORD *)v17 & 0xFFF) + v18 + 4095) >> 12 )
      goto LABEL_46;
    if ( !v18 )
    {
      v43 = 0LL;
      v42 = v15;
LABEL_91:
      CurrentThread = v36;
      goto LABEL_47;
    }
    if ( (v19 = *(_QWORD *)v17 + (v43 << 12), LeafVa = v19, v19 >= qword_140C6A1D8) && v19 <= qword_140C66CF0
      || v19 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(*(_QWORD *)v17 + (v43 << 12)) )
    {
LABEL_46:
      MiAdvanceFaultList(&v37);
      goto LABEL_36;
    }
    if ( v19 >= v16 && v19 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v19 >= v16 + 0x4000000000LL )
        goto LABEL_46;
      LeafVa = MiGetLeafVa(v19);
    }
    if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
    {
      if ( a3 == 1 )
        goto LABEL_46;
      v21 = (*(_BYTE *)(a3 + 184) & 7) == 1;
      goto LABEL_19;
    }
    if ( LeafVa >= 0xFFFF800000000000uLL )
    {
      v21 = a3 == 1;
LABEL_19:
      if ( !v21 )
        goto LABEL_46;
      goto LABEL_20;
    }
    if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 0 )
      goto LABEL_46;
LABEL_20:
    v22 = v52;
    if ( (v47 & 0x80u) == 0
      && (!(unsigned int)MiSufficientAvailablePages(v52, 288LL)
       || (unsigned __int64)MiCommitmentAvailable(v52) < 0x1080
       || v52[2160] < 288) )
    {
      break;
    }
    if ( (a4 & 0x20000) != 0 )
      MiPrefetchPreallocatePages((unsigned int)v51, (unsigned int)&v37, (_DWORD)v52, a3, v17, v19);
    if ( !v8 )
    {
      v28 = MiGetInPageAutoBoostLock();
      BugCheckParameter2 = (ULONG_PTR)v28;
      if ( v28 )
      {
        v29 = KeAbPreAcquire((__int64)v28, 0LL);
        v8 = v29;
        if ( v29 )
        {
          *(_BYTE *)(v29 + 18) = 1;
          goto LABEL_27;
        }
        if ( BugCheckParameter2 )
        {
          MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)BugCheckParameter2);
          BugCheckParameter2 = 0LL;
        }
      }
      v8 = 1LL;
    }
LABEL_27:
    v23 = v42;
    v24 = v43;
    v25 = MmAccessFault(0LL, v19, 0, (ULONG_PTR)&v37 + 1);
    if ( HIBYTE(v37) == 2 )
    {
      if ( (v47 & 0x80u) == 0 )
        goto LABEL_91;
    }
    else if ( HIBYTE(v37) != 1 )
    {
      if ( v42 == v23 && v43 == v24 )
        MiAdvanceFaultList(&v37);
      goto LABEL_32;
    }
    HIBYTE(v37) = 0;
LABEL_32:
    if ( v25 < 0 )
    {
      v54 = v25;
      if ( v25 != -1073741819 || v42 == v41 || !(unsigned int)MiLeapPrefetch(&v37, 0LL) )
        goto LABEL_91;
    }
    if ( v46 >= 0x200000 )
      MiPfCoalesceAndIssueIOs(v45, (__int64)v44, &v46);
    if ( (v47 & 0x400) != 0 )
    {
      v31 = 0;
      v32 = 0;
      while ( 2 )
      {
        v33 = v44[0];
        v34 = v44;
        if ( !v32 )
        {
          v33 = (_QWORD *)v45[0];
          v34 = v45;
        }
        while ( v33 != v34 )
        {
          if ( ++v31 == 4 )
          {
            v35 = MiPfCompletePrefetchIos(v44, (__int64)v45, a3);
            if ( v35 < 0 && v4 >= 0 )
              v4 = v35;
            v46 = 0LL;
            if ( v8 > 1 )
            {
              KeAbPostReleaseEx(BugCheckParameter2, v8);
              v8 = 0LL;
              MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)BugCheckParameter2);
              BugCheckParameter2 = 0LL;
            }
            goto LABEL_36;
          }
          v33 = (_QWORD *)*v33;
        }
        if ( (unsigned int)++v32 < 2 )
          continue;
        break;
      }
    }
LABEL_36:
    v15 = v41;
    CurrentThread = v36;
    if ( v42 >= v41 )
      goto LABEL_47;
    v7 = a2;
  }
  CurrentThread = v36;
LABEL_48:
  if ( (a4 & 0x20000) != 0 )
    MiPrefetchReleasePreallocatedPages(v51, &v37, v22, 1LL);
  v26 = MiPfCompletePrefetchIos(v44, (__int64)v45, a3);
  if ( v26 < 0 )
  {
    if ( v4 >= 0 )
      v4 = v26;
  }
  else if ( v4 >= 0 && v54 < 0 && (v47 & 0x8000) != 0 )
  {
    v4 = v54;
  }
  if ( v8 > 1 )
  {
    KeAbPostReleaseEx(BugCheckParameter2, v8);
    MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)BugCheckParameter2);
    BugCheckParameter2 = 0LL;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v4;
}
