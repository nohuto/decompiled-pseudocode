__int64 __fastcall MNFindNextValidItem(__int64 a1, int a2, int a3, char a4)
{
  int v5; // r10d
  int v6; // r9d
  __int64 v7; // r11

  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( a2 >= 0 || a3 <= 0 )
  {
    if ( a2 < v5 || a3 >= 0 )
    {
      v6 = a2;
    }
    else
    {
      v6 = -1;
      a2 = -1;
    }
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
    a2 = v6;
  }
  if ( !v5 )
    return 0xFFFFFFFFLL;
  if ( a2 || v5 != 1 || a3 <= 0 )
  {
LABEL_15:
    while ( 1 )
    {
      a2 += a3;
      if ( a2 == v6 || !a3 )
        return 0xFFFFFFFFLL;
      if ( a2 < v5 )
      {
        if ( a2 >= 0 )
          goto LABEL_13;
        a2 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
      }
      else
      {
        a2 = -1;
      }
    }
  }
  a3 = 0;
LABEL_13:
  v7 = *(_QWORD *)(96LL * (unsigned int)a2 + *(_QWORD *)(a1 + 88));
  if ( (*(_DWORD *)v7 & 0x800) != 0 )
  {
    if ( (a4 & 1) == 0 )
      goto LABEL_15;
  }
  else if ( (unsigned __int64)(*(_QWORD *)(v7 + 96) - 2LL) <= 5 )
  {
    goto LABEL_15;
  }
  return (unsigned int)a2;
}
