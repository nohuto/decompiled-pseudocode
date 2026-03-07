bool HalpCheckTestSigningEnabled()
{
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 8LL;
  return (int)ZwQuerySystemInformation(103LL, (__int64)&v1) >= 0 && (v1 & 0x200000000LL) != 0;
}
