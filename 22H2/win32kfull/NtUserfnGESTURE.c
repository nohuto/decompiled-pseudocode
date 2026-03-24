/*
 * XREFs of NtUserfnGESTURE @ 0x1C0204800
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     SendGestureMessage @ 0x1C022732C (SendGestureMessage.c)
 */

__int64 __fastcall NtUserfnGESTURE(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbx
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0LL;
  v8[0] = 0LL;
  if ( (_DWORD)a2 == 281
    && a6 >= 0x29E
    && (a6 <= 0x29F || a6 > 0x2AA && (a6 <= 0x2AC || a6 > 0x2B0 && (a6 <= 0x2B4 || a6 - 695 <= 1))) )
  {
    if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400LL, a2, a3);
    }
    else if ( (unsigned int)SendGestureMessage(a1, 281, a3, a4, a5, a6, (__int64)v8) )
    {
      return v8[0];
    }
  }
  return v6;
}
