__int64 NtCreateKey()
{
  unsigned int v0; // r9d
  __int64 v1; // r8
  __int64 v2; // r10
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+40h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  CmCreateKey(v2, v0, v1);
  CmCleanupThreadInfo(v5);
  return v3;
}
