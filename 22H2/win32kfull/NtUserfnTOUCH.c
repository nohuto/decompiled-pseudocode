/*
 * XREFs of NtUserfnTOUCH @ 0x1C01E3180
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ForwardTouchMessage @ 0x1C01B01AC (ForwardTouchMessage.c)
 */

__int64 __fastcall NtUserfnTOUCH(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        volatile void *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  int v9; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rax
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  v9 = a2;
  PtiCurrentShared((__int64)a1, a2, a3, (__int64)a4);
  if ( v9 == 576 )
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
      v15 = PtiCurrentShared(v12, v11, v13, v14);
      if ( (unsigned int)ForwardTouchMessage(v15, a1, 576LL, a3, a4, 0, a5, a6, &v17) )
        return v17;
    }
  }
  return v6;
}
