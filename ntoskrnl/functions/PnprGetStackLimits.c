__int64 __fastcall PnprGetStackLimits(char **a1, __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation((__int64)&v4, (__int64)&v5, a2);
}
