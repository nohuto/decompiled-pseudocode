__int64 __fastcall FastWindowFromDC(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 *v5; // r8

  v2 = 0LL;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v3 = gpDispInfo;
  v4 = (_QWORD *)(gpDispInfo + 24LL);
  v5 = *(__int64 **)(gpDispInfo + 24LL);
  if ( !v5 )
  {
LABEL_10:
    v3 = gpDispInfo;
    goto LABEL_11;
  }
  if ( v5[1] != a1 )
  {
    while ( v5[1] != a1 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
      if ( !v5 )
        goto LABEL_10;
    }
    if ( (v5[8] & 0x401000) == 0x1000 )
    {
      *v4 = *v5;
      *v5 = *(_QWORD *)(gpDispInfo + 24LL);
      *(_QWORD *)(gpDispInfo + 24LL) = v5;
      v2 = v5[2];
    }
    goto LABEL_10;
  }
  if ( (v5[8] & 0x401000) == 0x1000 )
    v2 = v5[2];
LABEL_11:
  GreUnlockVisRgn(*(_QWORD *)(v3 + 40));
  return v2;
}
