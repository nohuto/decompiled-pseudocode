__int64 __fastcall PopFanFindBucketIndex(__int64 a1, unsigned int a2, int *a3, int *a4)
{
  int v4; // r11d
  unsigned int v6; // r10d
  int v7; // eax
  unsigned int v8; // r8d

  v4 = -1;
  if ( a2 )
  {
    v8 = *(_DWORD *)(a1 + 128);
    v6 = 1;
    if ( !v8 )
      goto LABEL_10;
    while ( a2 > *(_DWORD *)(a1 + 4LL * (v6 - 1) + 132) )
    {
      if ( ++v6 > v8 )
        goto LABEL_8;
    }
    v4 = *(_DWORD *)(a1 + 4LL * (v6 - 1) + 132);
LABEL_8:
    if ( v6 == 1 )
LABEL_10:
      v7 = 1;
    else
      v7 = *(_DWORD *)(a1 + 4LL * (v6 - 2) + 132) + 1;
  }
  else
  {
    v6 = 0;
    v4 = 1;
    v7 = 0;
  }
  if ( a3 )
    *a3 = v7;
  if ( a4 )
    *a4 = v4;
  return v6;
}
