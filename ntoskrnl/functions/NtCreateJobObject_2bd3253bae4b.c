__int64 __fastcall NtCreateJobObject(__int64 *a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char PreviousMode; // si
  __int64 v7; // rcx
  char v8; // r12
  int v9; // r9d
  int v10; // ecx
  int Object; // esi
  __int64 Handle; // rax
  __int64 v14; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+C8h] [rbp+20h]

  v14 = 0LL;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  *a1 = 0LL;
  v8 = PoEnergyEstimationEnabled();
  LOBYTE(v9) = PreviousMode;
  LOBYTE(v10) = PreviousMode;
  Object = ObCreateObjectEx(v10, (_DWORD)PsJobType, a3, v9);
  if ( Object >= 0 )
  {
    memset(0LL, 0, v8 != 0 ? 2248 : 1816);
    MEMORY[0x510] = 0LL;
    MEMORY[0x30] = 40LL;
    MEMORY[0x28] = 40LL;
    MEMORY[0x500] = 1272LL;
    MEMORY[0x4F8] = 1272LL;
    MEMORY[0x4F0] = 1256LL;
    MEMORY[0x4E8] = 1256LL;
    MEMORY[0x520] = 1304LL;
    MEMORY[0x518] = 1304LL;
    KeInitializeEvent(0LL, NotificationEvent, 0);
    MEMORY[0x4E0] = 0LL;
    MEMORY[0x108] = 2097153LL;
    memset((void *)0x110, 0, 0x100uLL);
    MEMORY[0x2C8] = 2097153LL;
    memset((void *)0x2D0, 0, 0x100uLL);
    MEMORY[0x5E0] = 1496LL;
    MEMORY[0x5D8] = 1496LL;
    MEMORY[0x5E8] = 0LL;
    if ( v8 )
      MEMORY[0x608] = 1816LL;
    MEMORY[0x240] = -1;
    MEMORY[0x440] = 16382;
    MEMORY[0x6C8] = 1LL;
    MEMORY[0x414] = 10;
    MEMORY[0x244] = 5;
    ExInitializeResourceLite((PERESOURCE)0x38);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
    if ( *(__int64 **)qword_140D53338 != &PspJobList )
      __fastfail(3u);
    MEMORY[0x18] = &PspJobList;
    MEMORY[0x20] = qword_140D53338;
    *(_QWORD *)qword_140D53338 = 24LL;
    qword_140D53338 = 24LL;
    PspUnlockJobListExclusive(CurrentThread);
    MEMORY[0x42C] = 5;
    MEMORY[0x430] = 5;
    MEMORY[0x434] = 8;
    MEMORY[0x438] = 8;
    MEMORY[0x600] |= 0x200000u;
    v16 = MEMORY[0x600];
    while ( 1 )
    {
      Object = ExUuidCreate((UUID *)0x5B0);
      if ( Object != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( Object == 1073872982 )
      Object = 0;
    if ( Object >= 0 )
    {
      Handle = ExCreateHandleEx(PspUniqueJobIdTable, 0, 0, 0, 0LL);
      if ( Handle )
        MEMORY[0x5AC] = Handle;
      else
        Object = -1073741670;
    }
    PspIoRateEntryInitialize(1616LL);
    MEMORY[0x690] = 0LL;
    MEMORY[0x698] = 0LL;
    MEMORY[0x6C0] = 0LL;
    if ( Object < 0 || (ObfReferenceObject(0LL), Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v14), Object < 0) )
      ObfDereferenceObject(0LL);
    else
      *a1 = v14;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, v16, (unsigned int)Object, 1824LL);
  return (unsigned int)Object;
}
