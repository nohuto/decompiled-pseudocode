__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+40h] [rbp-18h]
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v3 = 0LL;
  v2 = 0LL;
  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  LODWORD(v2) = a1;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C020E8[0])(1LL, 24LL, &v2, &v4) >= 0
    && BYTE4(v2) )
  {
    return DWORD2(v2);
  }
  else
  {
    return 0LL;
  }
}
