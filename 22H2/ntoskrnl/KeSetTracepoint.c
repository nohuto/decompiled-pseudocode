/*
 * XREFs of KeSetTracepoint @ 0x1408BC3C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     RtlPcToFileHeader @ 0x14031AE00 (RtlPcToFileHeader.c)
 *     DbgPrint @ 0x140364360 (DbgPrint.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiTpWriteBreakpoint @ 0x14051D3A8 (KiTpWriteBreakpoint.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1408BCB5C (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiTpSetupCompletion @ 0x1408BD3C0 (KiTpSetupCompletion.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeSetTracepoint(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9)
{
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v12; // rdx
  __int64 v14; // r9
  int v16; // edi
  __int64 v17; // rax
  _BOOL8 v18; // r8
  __int64 v19; // rsi
  __int64 v21; // rbx
  __int64 *v22; // rbx
  __int64 v23; // rbx
  __int64 *v24; // rbx
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v27; // rdx
  __int64 v28; // r14
  PVOID v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 *v32; // r14
  __int64 v33; // rcx
  _BOOL8 v34; // rdx
  __int64 v35; // rdx
  BOOL v36; // ecx
  int v37; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-D8h] BYREF
  BOOL v39; // [rsp+30h] [rbp-A8h]
  BOOL v40; // [rsp+34h] [rbp-A4h]
  BOOL v41; // [rsp+38h] [rbp-A0h]
  __int64 v42; // [rsp+40h] [rbp-98h]
  int v43; // [rsp+48h] [rbp-90h]
  BOOL v44; // [rsp+4Ch] [rbp-8Ch]
  PVOID BaseOfImage; // [rsp+50h] [rbp-88h] BYREF
  _BYTE *v46; // [rsp+58h] [rbp-80h]
  _BYTE v47[48]; // [rsp+60h] [rbp-78h] BYREF

  BaseOfImage = 0LL;
  v9 = 0LL;
  v10 = a1;
  v42 = a1;
  v12 = (unsigned int)KiDynamicTraceEnabled;
  v43 = a4;
  v46 = a9;
  v14 = 1LL;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a2 || (KiDynamicTraceEnabled & 1) == 0) )
    return (unsigned int)-1073741790;
  if ( !a1 && a2 || a3 > 0x7FFFFFFEFFFFLL && a2 == 1 || a3 < 0xFFFF800000000000uLL && !a2 )
    return (unsigned int)-1073741811;
  if ( a1 )
  {
    v17 = *(_QWORD *)(a1 + 992);
    if ( ((v17 & 1) != 0 || v17) && (a2 || (KiDynamicTraceEnabled & 2) == 0) )
      return (unsigned int)-1073741790;
  }
  v44 = (unsigned int)(a4 - 1) <= 1;
  v18 = (unsigned int)(a4 - 2) <= 1;
  v39 = (unsigned int)(a4 - 2) <= 1;
  v40 = (unsigned int)(a4 - 4) <= 1;
  v41 = (unsigned int)(a4 - 5) <= 1;
  if ( (unsigned int)(a4 - 2) <= 1 )
  {
    if ( !a5 )
    {
      v19 = a7;
      if ( !a7 )
        return (unsigned int)-1073741811;
LABEL_28:
      if ( v19 )
      {
        v23 = 5LL;
        if ( a2 )
          v23 = 7LL;
        v24 = &KiDynamicTraceCallouts[v23];
        if ( (KiDynamicTraceEnabled & 4) == 0 )
        {
LABEL_34:
          if ( v19 == *v24 )
            goto LABEL_35;
          return (unsigned int)-1073741790;
        }
        if ( v19 != *v24 )
        {
          DbgPrint("DTrace/NT: Overriding post-callback in DTrace test mode.\n", v12, v18, v14);
          *v24 = a5;
          goto LABEL_34;
        }
      }
LABEL_35:
      v10 = v42;
      goto LABEL_36;
    }
    v21 = 4LL;
    if ( a2 )
      v21 = 6LL;
    v12 = KiDynamicTraceEnabled & 4;
    v22 = &KiDynamicTraceCallouts[v21];
    if ( (KiDynamicTraceEnabled & 4) != 0 )
    {
      if ( a5 == *v22 )
      {
LABEL_27:
        v19 = a7;
        goto LABEL_28;
      }
      DbgPrint("DTrace/NT: Overriding pre-callback in DTrace test mode.\n", v12, v18, 1LL);
      *v22 = a5;
    }
    if ( a5 != *v22 )
      return (unsigned int)-1073741790;
    goto LABEL_27;
  }
  if ( a5 || a7 )
    return (unsigned int)-1073741811;
LABEL_36:
  if ( (unsigned int)(a4 - 1) <= 1 || !a4 )
  {
    if ( a3 >= 0xFFFF800000000000uLL )
    {
      if ( !RtlPcToFileHeader((PVOID)a3, &BaseOfImage) )
        return (unsigned int)-1073741811;
      if ( !(unsigned int)KiTpIsSupportedKernelTracepointLocation(BaseOfImage) )
        return (unsigned int)-1073741637;
    }
    if ( (unsigned int)(a4 - 1) <= 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5CuLL, 0x70727446u);
      v9 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x5CuLL);
      *(_QWORD *)(v9 + 16) = v10;
      *(_BYTE *)(v9 + 50) = a2;
      *(_QWORD *)(v9 + 8) = a3;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiTpStateLock, 0LL);
  v28 = KiTpHashTable;
  if ( KiTpHashTable )
  {
LABEL_53:
    v30 = 0LL;
    v31 = (a3 >> 4) & 0x3FFF;
    v32 = (__int64 *)(v28 + 8 * v31);
    v33 = *v32;
    if ( *v32 )
    {
      while ( *(_QWORD *)(v33 + 8) != a3 || *(_QWORD *)(v33 + 16) != v42 )
      {
        v32 = (__int64 *)v33;
        v33 = *(_QWORD *)v33;
        if ( !v33 )
          goto LABEL_57;
      }
      v30 = v33;
      if ( *(_BYTE *)(v33 + 50) != a2 )
      {
        v16 = -1073741811;
        goto LABEL_104;
      }
    }
LABEL_57:
    if ( v43 )
    {
      v34 = v44;
      if ( !v44 )
        goto LABEL_71;
      if ( v30 && !*(_BYTE *)(v30 + 24) )
        v34 = *(_BYTE *)(v30 + 25) != 0 && v44;
      if ( v34 )
      {
        if ( v30 )
        {
          v16 = -1073740008;
          goto LABEL_104;
        }
        LOBYTE(v34) = a2;
        v16 = KiTpSetupCompletion(v42, v34, *(_QWORD *)(v9 + 8), v9 + 51, 1, v9 + 52);
        if ( v16 < 0 )
          goto LABEL_104;
        ++KiTpRegisteredCount;
        v32 = (__int64 *)(KiTpHashTable + 8 * v31);
        *(_QWORD *)v9 = *v32;
        *v32 = v9;
        _InterlockedOr(v38, 0);
        v35 = v39;
        v30 = v9;
        v9 &= -(__int64)v39;
      }
      else
      {
LABEL_71:
        if ( !v30 )
        {
          v16 = -1073741275;
          goto LABEL_104;
        }
        v35 = v39;
      }
      if ( (_DWORD)v35 )
      {
        if ( !*(_BYTE *)(v30 + 48) )
        {
          if ( ++KiTpEnabledCount == 1 )
            _InterlockedOr(&KiDynamicTraceMask, 2u);
          LOBYTE(v35) = 1;
          v16 = KiTpWriteBreakpoint(v30, v35);
          if ( v16 < 0 )
          {
            if ( v30 == v9 )
            {
              *v32 = *(_QWORD *)v30;
              _InterlockedOr(v38, 0);
              --KiTpRegisteredCount;
            }
            if ( !--KiTpEnabledCount )
              _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFD);
            goto LABEL_104;
          }
          *(_BYTE *)(v30 + 48) = 1;
        }
        *(_QWORD *)(v30 + 32) = a6;
        *(_QWORD *)(v30 + 40) = a8;
        _InterlockedOr(v38, 0);
        v9 = 0LL;
        *(_BYTE *)(v30 + 24) = a5 != 0;
        *(_BYTE *)(v30 + 25) = a7 != 0;
      }
      v36 = v41;
      v37 = v40;
      if ( v41 && *(_BYTE *)(v30 + 48) )
        v37 = 1;
      if ( v37 )
      {
        if ( *(_BYTE *)(v30 + 48) )
        {
          if ( (int)KiTpWriteBreakpoint(v30, 0LL) >= 0 )
          {
            if ( !--KiTpEnabledCount )
              _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFD);
            v36 = v41;
            *(_BYTE *)(v30 + 48) = 0;
          }
          else
          {
            v36 = 0;
          }
        }
        *(_WORD *)(v30 + 24) = 0;
        _InterlockedOr(v38, 0);
        while ( KiTpActiveTrapsCount )
          _mm_pause();
        *(_QWORD *)(v30 + 32) = 0LL;
        *(_QWORD *)(v30 + 40) = 0LL;
      }
      if ( v36 )
      {
        *v32 = *(_QWORD *)v30;
        _InterlockedOr(v38, 0);
        --KiTpRegisteredCount;
        v9 = v30;
      }
    }
    else if ( !v30 )
    {
      LOBYTE(v27) = a2;
      v16 = KiTpSetupCompletion(v42, v27, a3, 0LL, 0, v47);
      goto LABEL_104;
    }
    if ( v46 )
      *v46 = *(_BYTE *)(v30 + 51);
    v16 = 0;
    goto LABEL_104;
  }
  v29 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x70727446u);
  v28 = (__int64)v29;
  if ( v29 )
  {
    memset(v29, 0, 0x20000uLL);
    KiTpHashTable = v28;
    goto LABEL_53;
  }
  v16 = -1073741670;
LABEL_104:
  if ( v9 )
  {
    while ( KiTpActiveTrapsCount )
      _mm_pause();
    ExFreePoolWithTag((PVOID)v9, 0x70727446u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
  KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v16;
}
