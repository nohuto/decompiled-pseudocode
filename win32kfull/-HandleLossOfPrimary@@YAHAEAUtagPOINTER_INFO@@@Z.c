__int64 __fastcall HandleLossOfPrimary(struct tagPOINTER_INFO *a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *((_DWORD *)a1 + 3);
  if ( (v1 & 0x40004) == 0 || (v1 & 0x10000) != 0 )
  {
    ResetMousePromotionInfo(0, v1);
    return 0LL;
  }
  else
  {
    v2 = 303104;
    *((_DWORD *)a1 + 3) = 303104;
    if ( (v1 & 2) != 0 )
    {
      v2 = 303106;
      *((_DWORD *)a1 + 3) = 303106;
    }
    if ( (v1 & 0x4000) != 0 )
      *((_DWORD *)a1 + 3) = v2 | 0x4000;
    return 1LL;
  }
}
