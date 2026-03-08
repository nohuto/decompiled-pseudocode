/*
 * XREFs of EtwTraceLpacAccessFailure @ 0x1409EA2C4
 * Callers:
 *     SepLogLpacAccessFailure @ 0x1405B5948 (SepLogLpacAccessFailure.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     KeQuerySystemTimePrecise @ 0x1402384E0 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceLpacAccessFailure(int a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  int *v4; // [rsp+48h] [rbp-18h]
  int v5; // [rsp+50h] [rbp-10h]
  int v6; // [rsp+54h] [rbp-Ch]
  int v7; // [rsp+70h] [rbp+10h] BYREF

  v7 = a1;
  v2 = 0LL;
  if ( EtwLpacProvRegHandle )
  {
    KeQuerySystemTimePrecise(&v2);
    UserData.Reserved = 0;
    v6 = 0;
    UserData.Ptr = (ULONGLONG)&v2;
    UserData.Size = 8;
    v4 = &v7;
    v5 = 4;
    return EtwWrite(EtwLpacProvRegHandle, &LpacAccessFailureLog, 0LL, 2u, &UserData);
  }
  return result;
}
