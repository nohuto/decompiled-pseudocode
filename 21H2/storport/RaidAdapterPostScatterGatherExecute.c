/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C0005010
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C0003950 (RaidpAdapterContinueScatterGather.c)
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 * Callees:
 *     RaidLogGetParm4 @ 0x1C00056D0 (RaidLogGetParm4.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005A08 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B8C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterRequestComplete @ 0x1C000F360 (RaidAdapterRequestComplete.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C001E5B4 (RaidUpdateZoneIoMetadata.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 *     RaAllocateConcurrentChannelToken @ 0x1C002AF18 (RaAllocateConcurrentChannelToken.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 ConcurrentChannelToken; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  bool v13; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  bool v15; // zf
  __int64 v17; // r10
  int v18; // r15d
  char *v19; // rbx
  unsigned int v20; // r14d
  unsigned int v21; // r11d
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rcx
  char v29; // al
  char v30; // al
  __int64 Parm4; // rax
  __int64 v32; // r11
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // r10
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 (__fastcall *v41)(__int64, _QWORD); // rax
  char v42; // bl
  LARGE_INTEGER v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  char v48; // r14
  LARGE_INTEGER v49; // rax
  __int64 v50; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v52; // [rsp+80h] [rbp+8h]
  __int64 v53; // [rsp+88h] [rbp+10h]

  v2 = 0;
  *(_QWORD *)(a2 + 216) = a1;
  v52 = 0LL;
  v4 = *(_QWORD *)(a2 + 224);
  v6 = *(_QWORD *)(a2 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  ConcurrentChannelToken = 0LL;
  v53 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = *(unsigned __int8 *)(v6 + 2);
  if ( (_BYTE)v10 == 40 )
  {
    v10 = *(_DWORD *)(v6 + 20);
    v11 = *(_DWORD *)(v6 + 24);
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 12);
  }
  if ( !v4 )
  {
    if ( !*(_DWORD *)(a1 + 876) || (unsigned int)(v10 - 36) <= 1 )
      goto LABEL_10;
    v15 = (*(_BYTE *)(a2 + 17) & 8) == 0;
    goto LABEL_21;
  }
  if ( *(int *)(v4 + 684) <= 0 )
  {
    if ( *(_BYTE *)(v4 + 692) && (v11 & 0x10) == 0 )
      goto LABEL_22;
    if ( !*(_BYTE *)(v4 + 693) )
      goto LABEL_10;
    v15 = (v11 & 0x80000) == 0;
LABEL_21:
    if ( !v15 )
      goto LABEL_10;
LABEL_22:
    *(_BYTE *)(v6 + 3) = 5;
    RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
    RaidAdapterRequestComplete(a1, a2, 1LL);
    return 0LL;
  }
  if ( v10 == 32 || (v13 = v10 == 19, v12 = 1, v13) )
    v12 = 0;
  if ( v12 )
    goto LABEL_22;
LABEL_10:
  if ( StorEtwLoggingEnabled )
  {
    v13 = UseQPCTime == 0;
    goto LABEL_12;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_26:
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      goto LABEL_28;
    }
    v13 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_12:
    if ( !v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_28:
  v13 = FUAEnabled == 0;
  v17 = *(_QWORD *)(a2 + 168);
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( !v13 || !v17 )
    goto LABEL_58;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v18 = *(unsigned __int8 *)(v17 + 2);
    v19 = (char *)(v17 + 72);
    goto LABEL_50;
  }
  v18 = *(_DWORD *)(v17 + 20);
  v19 = 0LL;
  if ( v18 )
    goto LABEL_50;
  v20 = *(_DWORD *)(v17 + 56);
  v21 = 0;
  if ( !v20 )
    goto LABEL_50;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v17 + 4LL * v21 + 120);
    if ( (unsigned int)v22 < 0x80 )
      goto LABEL_45;
    v23 = *(unsigned int *)(v17 + 16);
    if ( (unsigned int)v22 >= (unsigned int)v23 )
      goto LABEL_45;
    v24 = v22 + v17;
    v25 = (unsigned int)v22;
    v26 = *(_DWORD *)(v22 + v17) - 64;
    if ( !v26 )
      break;
    v27 = v26 - 1;
    if ( !v27 )
    {
      v28 = v25 + 56;
      goto LABEL_44;
    }
    if ( v27 == 1 && v25 + 40 <= v23 )
    {
      v19 = (char *)(v24 + 32);
      if ( !*(_DWORD *)(v24 + 12) )
        v19 = 0LL;
      goto LABEL_50;
    }
LABEL_45:
    if ( ++v21 >= v20 )
      goto LABEL_50;
  }
  v28 = v25 + 40;
LABEL_44:
  if ( v28 > v23 )
    goto LABEL_45;
  if ( *(_BYTE *)(v24 + 10) )
    v19 = (char *)(v24 + 24);
LABEL_50:
  if ( v19 && !v18 && ((v29 = *v19, *v19 == 42) || v29 == -86 || v29 == -118) )
  {
    v30 = v19[1];
    ConcurrentChannelToken = 0LL;
    if ( (v30 & 8) != 0 )
      v19[1] = v30 & 0xF7;
  }
  else
  {
    ConcurrentChannelToken = 0LL;
  }
LABEL_58:
  if ( *(_BYTE *)(a1 + 4514) )
  {
    if ( (qword_1C0069310 & 1) != 0 )
    {
      Parm4 = RaidLogGetParm4(a2);
      v32 = *(_QWORD *)(a2 + 160);
      v33 = Parm4;
      v34 = *(_QWORD *)(a2 + 168);
      if ( !v32 && v34 )
      {
        if ( *(_BYTE *)(v34 + 2) == 40 )
          v32 = *(_QWORD *)(v34 + 80);
        else
          v32 = *(_QWORD *)(v34 + 48);
      }
      v35 = *(_QWORD *)(a2 + 224);
      if ( v35 )
        v36 = (unsigned __int8)BYTE2(*(_DWORD *)(v35 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v35 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v35 + 96))) << 8);
      else
        v36 = 0LL;
      v37 = *(_QWORD *)(a2 + 216);
      if ( v37 && *(_DWORD *)(v37 + 5060) && *(_QWORD *)(v37 + 5064) )
      {
        v38 = *(_QWORD *)(v37 + 5064)
            + 48LL
            * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v37 + 5056)) % *(_DWORD *)(v37 + 5060));
        *(_DWORD *)v38 = 36;
        *(_QWORD *)(v38 + 40) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v38 + 8) = v32;
        *(_QWORD *)(v38 + 16) = v36;
        *(_QWORD *)(v38 + 24) = v34;
        *(_QWORD *)(v38 + 32) = v33;
      }
    }
    v39 = *(_QWORD *)(a2 + 160);
    if ( v39 )
      *(_BYTE *)(v39 + 141) = -82;
    v40 = *(_QWORD *)(a2 + 216);
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v40 + 552) + 128LL);
    if ( v41 )
      v42 = v41(*(_QWORD *)(v40 + 560) + 16LL, *(_QWORD *)(a2 + 168));
    else
      v42 = 1;
    if ( StorEtwLoggingEnabled && ((byte_1C0069841 & 2) != 0 || (byte_1C0069843 & 2) != 0) )
    {
      if ( UseQPCTime )
        v43 = KeQueryPerformanceCounter(0LL);
      else
        v43.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v43;
    }
    if ( !v42 )
    {
      RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
      return 0LL;
    }
    if ( *(int *)(a1 + 4808) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 720) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 712), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
    }
    else if ( *(_DWORD *)(a1 + 4808) >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    {
      *(_DWORD *)(a2 + 24) = HIDWORD(KeGetPcr()[1].LockArray);
    }
    else
    {
      ConcurrentChannelToken = RaAllocateConcurrentChannelToken(a1);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(ConcurrentChannelToken + 20);
    }
  }
  if ( (qword_1C0069310 & 4) != 0 )
  {
    v44 = *(_QWORD *)(a2 + 224);
    if ( v44 )
      v8 = (unsigned __int8)BYTE2(*(_DWORD *)(v44 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v44 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v44 + 96))) << 8);
    v45 = RaidLogGetParm4(a2);
    v9 = *(_QWORD *)(a2 + 168);
    v53 = v45;
    if ( *(_QWORD *)(a2 + 160) )
    {
      v52 = *(_QWORD *)(a2 + 160);
    }
    else if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 2) == 40 )
        v52 = *(_QWORD *)(v9 + 80);
      else
        v52 = *(_QWORD *)(v9 + 48);
    }
  }
  RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
  v46 = *(_QWORD *)(a2 + 160);
  if ( v46 )
    *(_BYTE *)(v46 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  v47 = MEMORY[0xFFFFF78000000014];
  v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 552) + 16LL))(
          *(_QWORD *)(a1 + 560) + 16LL,
          *(_QWORD *)(a2 + 168));
  if ( StorEtwLoggingEnabled && ((byte_1C0069841 & 2) != 0 || (byte_1C0069843 & 2) != 0) )
  {
    if ( UseQPCTime )
      v49 = KeQueryPerformanceCounter(0LL);
    else
      v49.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v49;
  }
  if ( *(_BYTE *)(a1 + 4514) )
  {
    if ( *(int *)(a1 + 4808) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 720) )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      else
        RaidAdapterReleaseInterruptLock(a1, LOBYTE(LockHandle.LockQueue.Next));
    }
    else if ( ConcurrentChannelToken )
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a1 + 4816) + ((unsigned __int64)*(unsigned int *)(ConcurrentChannelToken + 16) << 6)),
        (PSLIST_ENTRY)ConcurrentChannelToken);
    }
  }
  if ( (qword_1C0069310 & 4) != 0 && *(_DWORD *)(a1 + 5060) && *(_QWORD *)(a1 + 5064) )
  {
    v50 = *(_QWORD *)(a1 + 5064)
        + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 5056)) % *(_DWORD *)(a1 + 5060));
    *(_DWORD *)v50 = 0;
    if ( v47 )
      *(_QWORD *)(v50 + 40) = v47;
    else
      *(_QWORD *)(v50 + 40) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v50 + 8) = v52;
    *(_QWORD *)(v50 + 32) = v53;
    *(_QWORD *)(v50 + 16) = v8;
    *(_QWORD *)(v50 + 24) = v9;
  }
  if ( !v48 )
    return (unsigned int)-1073741823;
  return v2;
}
