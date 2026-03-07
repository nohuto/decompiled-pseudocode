__int64 NtOpenKey()
{
  __int64 v0; // r8
  int v1; // r10d
  HANDLE *v2; // r11
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  CmOpenKey(v2, v1, v0, 0, 0LL, KeGetCurrentThread()->PreviousMode);
  CmCleanupThreadInfo(v5);
  return v3;
}
