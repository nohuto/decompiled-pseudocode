__int64 __fastcall KeSetTracepoint(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // r15
  unsigned int v14; // edi
  __int64 v15; // rax
  int v16; // esi
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rsi
  char *v25; // r14
  __int64 v26; // r8
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rcx
  __int64 v31; // rax
  _BYTE *v32; // rcx
  __int64 *v33; // r13
  __int64 *v34; // rdx
  _BYTE *v35; // rdx
  char v36; // al
  int v37; // eax
  __int64 v38; // rdx
  int v39; // r12d
  _BYTE *v40; // r14
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  signed __int32 v44[8]; // [rsp+0h] [rbp-D8h] BYREF
  int v45; // [rsp+30h] [rbp-A8h]
  int v46; // [rsp+34h] [rbp-A4h]
  unsigned int v47; // [rsp+38h] [rbp-A0h]
  int v48; // [rsp+3Ch] [rbp-9Ch]
  __int64 v49; // [rsp+40h] [rbp-98h]
  __int64 v50; // [rsp+48h] [rbp-90h] BYREF
  __int64 v51; // [rsp+50h] [rbp-88h]
  __int64 v52; // [rsp+58h] [rbp-80h]
  char v53[48]; // [rsp+60h] [rbp-78h] BYREF

  v51 = a1;
  v52 = a9;
  v50 = 0LL;
  v13 = 0LL;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a2 || (KiDynamicTraceEnabled & 1) == 0) )
    return (unsigned int)-1073741790;
  if ( !a1 && a2 || a3 > 0x7FFFFFFEFFFFLL && a2 == 1 || a3 < 0xFFFF800000000000uLL && !a2 )
    return (unsigned int)-1073741811;
  if ( a1 )
  {
    v15 = *(_QWORD *)(a1 + 992);
    if ( ((v15 & 1) != 0 || v15) && (a2 || (KiDynamicTraceEnabled & 2) == 0) )
      return (unsigned int)-1073741790;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    v16 = 0;
    v48 = 0;
    goto LABEL_19;
  }
  v48 = 1;
  v16 = 1;
  if ( a4 != 2 )
  {
LABEL_19:
    v17 = 0;
    if ( a4 != 3 )
      goto LABEL_21;
  }
  v17 = 1;
LABEL_21:
  v47 = v17;
  if ( (unsigned int)(a4 - 4) > 1 )
  {
    v45 = 0;
    goto LABEL_24;
  }
  v45 = 1;
  if ( a4 != 5 )
  {
LABEL_24:
    v46 = 0;
    if ( a4 != 6 )
      goto LABEL_26;
  }
  v46 = 1;
LABEL_26:
  if ( v17 )
  {
    if ( a5 )
    {
      v20 = 4LL;
      if ( a2 )
        v20 = 6LL;
      if ( a5 != KiDynamicTraceCallouts[v20] )
        return (unsigned int)-1073741790;
      v18 = a7;
      if ( !a7 )
        goto LABEL_41;
    }
    else
    {
      v18 = a7;
      if ( !a7 )
        return (unsigned int)-1073741811;
    }
    v21 = 5LL;
    if ( a2 )
      v21 = 7LL;
    if ( v18 != KiDynamicTraceCallouts[v21] )
      return (unsigned int)-1073741790;
  }
  else if ( a5 || a7 )
  {
    return (unsigned int)-1073741811;
  }
LABEL_41:
  if ( v16 || !a4 )
  {
    if ( a3 >= 0xFFFF800000000000uLL )
    {
      if ( !RtlPcToFileHeader(a3, &v50) )
        return (unsigned int)-1073741811;
      if ( !(unsigned int)KiTpIsSupportedKernelTracepointLocation(v50, a3) )
        return (unsigned int)-1073741637;
    }
    if ( v16 )
    {
      Pool2 = ExAllocatePool2(64LL, 92LL, 1886549062LL);
      v13 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_QWORD *)(Pool2 + 16) = a1;
      *(_BYTE *)(Pool2 + 50) = a2;
      *(_QWORD *)(Pool2 + 8) = a3;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v24 = v13;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiTpStateLock, 0LL);
  v25 = (char *)KiTpHashTable;
  v26 = 0LL;
  if ( KiTpHashTable )
    goto LABEL_60;
  v25 = (char *)ExAllocatePool2(64LL, 0x20000LL, 1886549062LL);
  if ( v25 )
  {
    v27 = (unsigned int)KeNumberProcessors_0;
    v28 = ExAllocatePool2(64LL, 8200LL * (unsigned int)KeNumberProcessors_0, 1886549062LL);
    v26 = 0LL;
    v29 = v28;
    if ( !v28 )
    {
      ExFreePoolWithTag(v25, 0);
      goto LABEL_53;
    }
    if ( (_DWORD)v27 )
    {
      v30 = KiProcessorBlock;
      v26 = v27;
      do
      {
        v31 = *v30++;
        *(_QWORD *)(v31 + 152) = v29;
        v29 += 8200LL;
        --v26;
      }
      while ( v26 );
    }
    KiTpHashTable = v25;
LABEL_60:
    v32 = (_BYTE *)v26;
    v49 = (a3 >> 4) & 0x3FFF;
    v33 = (__int64 *)&v25[8 * v49];
    v34 = (__int64 *)*v33;
    if ( *v33 )
    {
      while ( v34[1] != a3 || v34[2] != v51 )
      {
        v33 = v34;
        v34 = (__int64 *)*v34;
        if ( !v34 )
          goto LABEL_64;
      }
      v32 = v34;
      if ( *((_BYTE *)v34 + 50) != a2 )
      {
        v14 = -1073741811;
        goto LABEL_109;
      }
    }
LABEL_64:
    if ( !a4 )
    {
      if ( !v32 )
      {
        LOBYTE(v34) = a2;
        v14 = KiTpSetupCompletion(v51, v34, a3, 0LL, v26, v53);
        goto LABEL_109;
      }
      v35 = (_BYTE *)v52;
      if ( !v52 )
      {
LABEL_108:
        v14 = v26;
        goto LABEL_109;
      }
      v36 = v32[51];
LABEL_107:
      *v35 = v36;
      goto LABEL_108;
    }
    if ( v48 == (_DWORD)v26 )
    {
      v39 = v45;
      if ( !v32 )
      {
        v14 = -1073741275;
        goto LABEL_109;
      }
    }
    else
    {
      if ( !v32 )
      {
        LOBYTE(v34) = a2;
        v37 = KiTpSetupCompletion(v51, v34, *(_QWORD *)(v13 + 8), v13 + 51, 1, v13 + 52);
        v26 = 0LL;
        v14 = v37;
        if ( v37 < 0 )
          goto LABEL_109;
        ++KiTpRegisteredCount;
        v33 = (__int64 *)((char *)KiTpHashTable + 8 * v49);
        *(_QWORD *)v13 = *v33;
        *v33 = v13;
        _InterlockedOr(v44, 0);
        v38 = v47;
        v39 = v45;
        v13 &= -(__int64)(v47 != 0);
        goto LABEL_82;
      }
      if ( v32[24] != (_BYTE)v26 || v32[25] != (_BYTE)v26 )
      {
        v14 = -1073740008;
        goto LABEL_109;
      }
      v39 = v45;
    }
    v38 = v47;
    v24 = (__int64)v32;
LABEL_82:
    v40 = (_BYTE *)(v24 + 48);
    if ( (_DWORD)v38 )
    {
      if ( *v40 == (_BYTE)v26 )
      {
        if ( ++KiTpEnabledCount == 1 )
          _InterlockedOr(&KiDynamicTraceMask, 2u);
        LOBYTE(v38) = 1;
        v41 = KiTpWriteBreakpoint(v24, v38, v26);
        v26 = 0LL;
        v14 = v41;
        if ( v41 < 0 )
        {
          if ( v24 == v13 )
          {
            *v33 = *(_QWORD *)v24;
            _InterlockedOr(v44, 0);
            --KiTpRegisteredCount;
          }
          --KiTpEnabledCount;
          goto LABEL_109;
        }
        *v40 = 1;
      }
      *(_QWORD *)(v24 + 32) = a6;
      *(_QWORD *)(v24 + 40) = a8;
      _InterlockedOr(v44, v26);
      v13 = v26;
      *(_BYTE *)(v24 + 24) = a5 != v26;
      *(_BYTE *)(v24 + 25) = a7 != v26;
    }
    v42 = v46;
    if ( v46 && *v40 != (_BYTE)v26 )
      goto LABEL_96;
    if ( !v39 )
    {
LABEL_103:
      if ( v42 )
      {
        *v33 = *(_QWORD *)v24;
        _InterlockedOr(v44, v26);
        --KiTpRegisteredCount;
        v13 = v24;
      }
      v35 = (_BYTE *)v52;
      if ( !v52 )
        goto LABEL_108;
      v36 = *(_BYTE *)(v24 + 51);
      goto LABEL_107;
    }
    if ( *v40 != (_BYTE)v26 )
    {
LABEL_96:
      v43 = KiTpWriteBreakpoint(v24, 0LL, v26);
      v26 = 0LL;
      if ( v43 >= 0 )
      {
        --KiTpEnabledCount;
        v42 = v46;
        *v40 = 0;
      }
      else
      {
        v42 = 0;
      }
    }
    *(_WORD *)(v24 + 24) = 0;
    _InterlockedOr(v44, v26);
    while ( KiTpActiveTrapsCount )
      _mm_pause();
    *(_QWORD *)(v24 + 32) = v26;
    *(_QWORD *)(v24 + 40) = v26;
    goto LABEL_103;
  }
LABEL_53:
  v14 = -1073741670;
LABEL_109:
  if ( v13 )
  {
    while ( KiTpActiveTrapsCount )
      _mm_pause();
    ExFreePoolWithTag((PVOID)v13, 0x70727446u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
  KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
