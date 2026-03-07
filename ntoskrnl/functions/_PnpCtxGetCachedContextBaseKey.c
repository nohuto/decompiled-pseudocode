__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  int v6; // ecx
  __int64 v7; // rcx

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 10 )
    {
      if ( a2 != 11 )
      {
        if ( a2 == 12 || a2 == 13 )
          goto LABEL_12;
        v6 = a2 - 14;
        if ( a2 != 14 )
          goto LABEL_10;
      }
    }
    else if ( a2 != 10 )
    {
      if ( a2 == 4 )
        goto LABEL_12;
      if ( a2 != 5 )
      {
        if ( a2 == 6 )
          goto LABEL_12;
        if ( a2 == 7 )
          goto LABEL_12;
        v6 = a2 - 8;
        if ( a2 == 8 )
          goto LABEL_12;
LABEL_10:
        if ( v6 != 1 )
          goto LABEL_12;
      }
    }
    v7 = *(_QWORD *)(a1 + 56);
    v4 = v7 - 16;
    if ( v7 != a1 + 56 )
    {
LABEL_13:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
    }
LABEL_12:
    v4 = *(_QWORD *)(a1 + 88);
    goto LABEL_13;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
}
