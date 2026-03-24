/*
 * XREFs of EtwTraceLpacAccessFailure @ 0x14093FFA4
 * Callers:
 *     SepLogLpacAccessFailure @ 0x140596168 (SepLogLpacAccessFailure.c)
 * Callees:
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     KeQuerySystemTimePrecise @ 0x140341F10 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceLpacAccessFailure(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  int *v7; // [rsp+48h] [rbp-18h]
  int v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+54h] [rbp-Ch]
  int v10; // [rsp+70h] [rbp+10h] BYREF

  v10 = a1;
  v5 = 0LL;
  if ( EtwLpacProvRegHandle )
  {
    KeQuerySystemTimePrecise(&v5, a2, a3, a4);
    UserData.Reserved = 0;
    v9 = 0;
    UserData.Ptr = (ULONGLONG)&v5;
    UserData.Size = 8;
    v7 = &v10;
    v8 = 4;
    return EtwWrite(EtwLpacProvRegHandle, &LpacAccessFailureLog, 0LL, 2u, &UserData);
  }
  return result;
}
