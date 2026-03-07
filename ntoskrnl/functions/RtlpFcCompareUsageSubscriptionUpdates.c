__int64 __fastcall RtlpFcCompareUsageSubscriptionUpdates(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned __int16 v3; // ax
  unsigned int v4; // eax
  unsigned int v5; // eax

  v2 = a1[1];
  if ( v2 <= a2[1] )
  {
    if ( v2 < a2[1] )
      return 0xFFFFFFFFLL;
    v3 = *((_WORD *)a1 + 4);
    if ( v3 <= *((_WORD *)a2 + 4) )
    {
      if ( v3 < *((_WORD *)a2 + 4) )
        return 0xFFFFFFFFLL;
      v4 = a1[3];
      if ( v4 <= a2[3] )
      {
        if ( v4 >= a2[3] )
        {
          v5 = a1[4];
          if ( v5 <= a2[4] )
            return (unsigned int)-(v5 < a2[4]);
          return 1LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
  }
  return 1LL;
}
