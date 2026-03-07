__int64 __fastcall NtUserfnGESTURE(__int64 a1, int a2, int a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbx
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0LL;
  v12[0] = 0LL;
  PtiCurrentShared(a1);
  if ( a2 == 281 )
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
    if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400);
    }
    else if ( (unsigned int)SendGestureMessage(a1, 281, a3, a4, a5, a6, (__int64)v12) )
    {
      return v12[0];
    }
  }
  return v6;
}
