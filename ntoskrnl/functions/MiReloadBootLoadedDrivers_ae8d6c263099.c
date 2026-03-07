__int64 __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  struct _KTHREAD *Lock; // rbp
  _QWORD *i; // rbx
  _QWORD v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, 0xB8uLL);
  v5[3] = 0LL;
  LODWORD(v5[1]) = 20;
  Lock = MmAcquireLoadLock();
  for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = (_QWORD *)*i )
  {
    if ( PsNtosImageBase != i[6] )
      MiProcessLoadConfigForDriver((__int64)i, 0LL);
    MiHandleBootImage(a1, i, v5);
  }
  MiFlushTbList((int *)v5);
  MiApplyBootLoadedDriversFixups(a1);
  MmReleaseLoadLock((__int64)Lock);
  return 1LL;
}
