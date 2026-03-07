__int64 __fastcall KdpReportExceptionStateChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v10[60]; // [rsp+40h] [rbp-C0h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  do
  {
    KdpSetCommonState(12336, a2, (__int64)v10);
    KdpQuickMoveMemory(&v10[8], a1, 152LL);
    v10[46] = a3 == 0;
    KdpSetContextState((__int64)v10, a2);
    LOWORD(v8) = 240;
    *((_QWORD *)&v8 + 1) = v10;
    LOWORD(v9) = 0;
    result = KdpSendWaitContinue(v6, (__int64)&v8, (__int64)&v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
