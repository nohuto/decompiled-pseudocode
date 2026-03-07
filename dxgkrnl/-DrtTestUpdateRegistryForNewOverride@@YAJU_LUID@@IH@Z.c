__int64 __fastcall DrtTestUpdateRegistryForNewOverride(struct _LUID a1, unsigned int a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // r9d
  __int64 v7; // rdi
  struct _LUID v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  v9 = a1;
  v10 = 0;
  v5 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v10, 0);
  v7 = v5;
  if ( v5 >= 0 )
  {
    LODWORD(v7) = DpiPersistence::WriteDpiToRegistry((DpiPersistence *)&v9, (const struct _LUID *)a2, a3, v6);
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v10 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v7;
}
