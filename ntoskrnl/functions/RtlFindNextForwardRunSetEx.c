unsigned __int64 __fastcall RtlFindNextForwardRunSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 *v8; // r8
  _QWORD *v9; // rax
  unsigned __int64 i; // r10
  __int64 v11; // rcx
  __int64 v12; // r10
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8

  v3 = *a1;
  v4 = 0LL;
  if ( *a1 > a2 )
  {
    v6 = a1[1];
    v7 = v6 + 8 * ((v3 - 1) >> 6);
    v8 = (unsigned __int64 *)(v6 + 8 * (a2 >> 6));
    v9 = v8 + 1;
    for ( i = ~((1LL << (a2 & 0x3F)) - 1) & *v8; !i; i = *v8 )
    {
      if ( (unsigned __int64)v9 > v7 )
        goto LABEL_7;
      ++v8;
      ++v9;
    }
    _BitScanForward64((unsigned __int64 *)&v11, i);
    a2 = (unsigned int)v11 + ((__int64)((__int64)v8 - v6) >> 3 << 6);
    if ( a2 > v3 )
    {
LABEL_7:
      a2 = v3;
      goto LABEL_17;
    }
    v12 = ((1LL << v11) - 1) | i;
    while ( 1 )
    {
      v13 = ~v12;
      if ( v13 )
        break;
      if ( (unsigned __int64)(v8 + 1) > v7 )
      {
        LODWORD(v14) = 64;
        goto LABEL_14;
      }
      v12 = v8[1];
      ++v8;
    }
    _BitScanForward64((unsigned __int64 *)&v14, v13);
LABEL_14:
    v15 = v3;
    v16 = (__int64)((__int64)v8 - v6) >> 3 << 6;
    if ( v16 + (unsigned __int64)(unsigned int)v14 <= v3 )
      v15 = v16 + (unsigned int)v14;
    v4 = v15 - a2;
  }
LABEL_17:
  *a3 = a2;
  return v4;
}
