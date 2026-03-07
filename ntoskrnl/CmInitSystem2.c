char CmInitSystem2()
{
  int v0; // eax
  __int128 v2; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v2 = 2097182LL;
  *((_QWORD *)&v2 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  CmFcInitSystem3();
  v0 = IoCreateDriver(&v2, (__int64 (__fastcall *)(void **, _QWORD))VRegSetup);
  if ( v0 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v0, 0LL, 0LL);
  if ( CmBugcheckRecoveryEnabled )
    MmLockRegistryRecoverySections();
  return CmpMachineHiveListInitialize();
}
