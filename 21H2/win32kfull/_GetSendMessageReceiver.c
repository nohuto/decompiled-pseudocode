/*
 * XREFs of _GetSendMessageReceiver @ 0x1C0219304
 * Callers:
 *     NtUserGetSendMessageReceiver @ 0x1C01F68C0 (NtUserGetSendMessageReceiver.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall GetSendMessageReceiver(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx

  v1 = PtiFromThreadId(a1);
  v3 = v1;
  if ( !v1 || (v4 = *(_QWORD *)(gptiCurrent + 456LL), *(_QWORD *)(v1 + 456) != v4) )
  {
    v9 = 87LL;
    goto LABEL_13;
  }
  v5 = *(_QWORD *)(v1 + 424);
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !(unsigned __int8)Enforced(v4) )
  {
    if ( *(_DWORD *)(v6 + 780) != *(_DWORD *)(v5 + 780) || *(_DWORD *)(v6 + 784) != *(_DWORD *)(v5 + 784) )
      goto LABEL_5;
LABEL_8:
    v7 = *(_QWORD *)(v3 + 504);
    if ( !v7 )
      return 0LL;
    result = *(_QWORD *)(v7 + 112);
    if ( !result )
      return 0LL;
    v2 = *(_QWORD *)(result + 16);
    if ( *(_QWORD *)(v2 + 456) == *(_QWORD *)(gptiCurrent + 456LL) )
      return result;
    goto LABEL_11;
  }
  if ( (unsigned __int8)CheckAccess(v6 + 880, v5 + 880) )
    goto LABEL_8;
LABEL_5:
  EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 424LL), *(_QWORD *)(v3 + 424), 0LL, 0LL, 0LL);
LABEL_11:
  v9 = 5LL;
LABEL_13:
  UserSetLastError(v9, v2);
  return 0LL;
}
