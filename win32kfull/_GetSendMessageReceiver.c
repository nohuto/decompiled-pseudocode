/*
 * XREFs of _GetSendMessageReceiver @ 0x1C01FE844
 * Callers:
 *     NtUserGetSendMessageReceiver @ 0x1C01D4E10 (NtUserGetSendMessageReceiver.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall GetSendMessageReceiver(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // ecx

  v1 = PtiFromThreadId(a1);
  v2 = v1;
  if ( !v1 || (v3 = *(_QWORD *)(gptiCurrent + 456LL), *(_QWORD *)(v1 + 456) != v3) )
  {
    v8 = 87;
    goto LABEL_13;
  }
  v4 = *(_QWORD *)(v1 + 424);
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !(unsigned __int8)Enforced(v3) )
  {
    if ( *(_DWORD *)(v5 + 772) != *(_DWORD *)(v4 + 772) || *(_DWORD *)(v5 + 776) != *(_DWORD *)(v4 + 776) )
      goto LABEL_5;
LABEL_8:
    v6 = *(_QWORD *)(v2 + 504);
    if ( !v6 )
      return 0LL;
    result = *(_QWORD *)(v6 + 112);
    if ( !result )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(result + 16) + 456LL) == *(_QWORD *)(gptiCurrent + 456LL) )
      return result;
    goto LABEL_11;
  }
  if ( (unsigned __int8)CheckAccess(v5 + 864, v4 + 864) )
    goto LABEL_8;
LABEL_5:
  EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 424LL), *(_QWORD *)(v2 + 424), 0LL, 0LL, 0LL);
LABEL_11:
  v8 = 5;
LABEL_13:
  UserSetLastError(v8);
  return 0LL;
}
