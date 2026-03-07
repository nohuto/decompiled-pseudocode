bool EtwpUserInAdminOrLogUsersGroup()
{
  __int64 v0; // rdx
  bool result; // al
  int v2; // ebx
  char v3; // [rsp+40h] [rbp+18h] BYREF
  int v4; // [rsp+48h] [rbp+20h] BYREF
  __int16 v5; // [rsp+4Ch] [rbp+24h]
  PVOID P; // [rsp+50h] [rbp+28h] BYREF
  int v7; // [rsp+58h] [rbp+30h] BYREF
  int v8; // [rsp+5Ch] [rbp+34h]

  v4 = 0;
  P = 0LL;
  v3 = 0;
  v5 = 1280;
  if ( (int)RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &v3) >= 0 && v3 )
    return 1;
  v7 = 32;
  v8 = 558;
  result = (int)RtlAllocateAndInitializeSidEx((__int64)&v4, v0, &v7, (__int64 *)&P) >= 0
        && (v2 = RtlCheckTokenMembership(0LL, P, &v3), ExFreePoolWithTag(P, 0), v2 >= 0)
        && v3 != 0;
  return result;
}
