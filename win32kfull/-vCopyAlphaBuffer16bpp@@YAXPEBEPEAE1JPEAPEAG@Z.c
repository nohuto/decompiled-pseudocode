void __fastcall vCopyAlphaBuffer16bpp(
        const unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned __int16 **a5)
{
  unsigned __int16 *v5; // r8
  unsigned __int64 v6; // r10

  v5 = (unsigned __int16 *)&a3[(unsigned __int8)a2 & 3];
  *a5 = v5;
  if ( ((unsigned __int8)a2 & 2) != 0 )
  {
    if ( (unsigned __int8)(*a1 - 1) < 0x71u )
      *v5 = *(_WORD *)a2;
    a2 += 2;
    ++v5;
    ++a1;
    --a4;
  }
  if ( (int)(a4 - 2) >= 0 )
  {
    v6 = (unsigned __int64)a4 >> 1;
    do
    {
      if ( (unsigned __int8)(*a1 - 1) < 0x71u || (unsigned __int8)(a1[1] - 1) < 0x71u )
        *(_DWORD *)v5 = *(_DWORD *)a2;
      a2 += 4;
      v5 += 2;
      a1 += 2;
      --v6;
    }
    while ( v6 );
  }
  if ( (((_BYTE)a4 - 2) & 1) != 0 && (unsigned __int8)(*a1 - 1) < 0x71u )
    *v5 = *(_WORD *)a2;
}
