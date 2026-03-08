/*
 * XREFs of NtUserfnTOUCH @ 0x1C01E4230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ForwardTouchMessage @ 0x1C01B139C (ForwardTouchMessage.c)
 */

__int64 __fastcall NtUserfnTOUCH(struct tagWND *a1, int a2, __int64 a3, volatile void *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  v6 = 0LL;
  v14 = 0LL;
  PtiCurrentShared((__int64)a1);
  if ( a2 == 576 )
  {
    if ( a6 > 0x2B2 )
    {
      if ( a6 != 691 && a6 != 692 && a6 - 695 > 1 )
        return v6;
    }
    else if ( a6 != 690 && a6 != 670 && a6 != 671 && a6 != 683 && a6 != 684 && a6 != 689 )
    {
      return v6;
    }
    if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400);
    }
    else
    {
      v12 = PtiCurrentShared(v11);
      if ( (unsigned int)ForwardTouchMessage(v12, a1, 0x240u, a3, a4, 0, a5, a6, &v14) )
        return v14;
    }
  }
  return v6;
}
