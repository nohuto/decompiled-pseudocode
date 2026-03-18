/*
 * XREFs of ValidateGestureCaller @ 0x1C0221618
 * Callers:
 *     NtUserInjectGesture @ 0x1C01F7FF0 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a1 + 456);
  if ( v3 == grpdeskRitInput && v3 == *(_QWORD *)(a2 + 24) )
  {
    if ( (unsigned __int8)CheckAccess(*(_QWORD *)(a1 + 424) + 880LL, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL) + 880LL) )
      return 1LL;
    UserSetLastError(5LL, v5);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 424), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  return 0LL;
}
