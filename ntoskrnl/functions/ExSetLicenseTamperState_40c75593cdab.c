char __fastcall ExSetLicenseTamperState(int a1)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 Blink; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // r14
  struct _LIST_ENTRY *v6; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Blink = (__int64)CurrentServerSiloGlobals[56].Blink;
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(Blink + 46840, 0LL);
    ExpGetLicenseTamperState(Blink, &v9);
    v5 = v9 == 0;
    ExpSetLicenseTamperState(Blink, a1);
    memset(v8, 0, sizeof(v8));
    ExpSetKernelDataProtection(Blink, (__int64)v8, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Blink + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Blink + 46840));
    KeAbPostRelease(Blink + 46840);
    LOBYTE(CurrentServerSiloGlobals) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v5 )
    {
      v6 = PsGetCurrentServerSiloGlobals()[56].Blink;
      LOBYTE(CurrentServerSiloGlobals) = (_BYTE)qword_140D53508;
      if ( qword_140D53508 )
        LOBYTE(CurrentServerSiloGlobals) = qword_140D53508(v6);
    }
  }
  return (char)CurrentServerSiloGlobals;
}
