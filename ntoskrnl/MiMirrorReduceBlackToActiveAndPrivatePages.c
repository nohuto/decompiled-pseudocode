/*
 * XREFs of MiMirrorReduceBlackToActiveAndPrivatePages @ 0x140625A10
 * Callers:
 *     MiMirrorBlackPhase @ 0x1406247B4 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiMirrorRemoveInactivePages @ 0x140625E94 (MiMirrorRemoveInactivePages.c)
 */

__int64 __fastcall MiMirrorReduceBlackToActiveAndPrivatePages(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rbx
  __int64 i; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  __int64 *v13; // r8
  _QWORD *v14; // rax
  __int64 j; // r9
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 k; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi

  v1 = 0LL;
  do
  {
    v3 = v1 & -(__int64)(v1 < (unsigned __int64)xmmword_140C67B20);
    v4 = xmmword_140C67B20 - 1;
    while ( 1 )
    {
      result = v4 - v3 + 1;
      if ( v4 - v3 == -1LL )
        goto LABEL_4;
      v7 = (_QWORD *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 8 * (v3 >> 6));
      result = ~*v7;
      for ( i = result | ((1LL << (v3 & 0x3F)) - 1); i == -1; i = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > *((_QWORD *)&xmmword_140C67B20 + 1) + 8 * (v4 >> 6) )
          goto LABEL_4;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~i);
      v6 = result + (((__int64)v7 - *((_QWORD *)&xmmword_140C67B20 + 1)) >> 3 << 6);
      if ( v6 > v4 )
      {
LABEL_4:
        v6 = -1LL;
      }
      else if ( v6 != -1LL )
      {
        break;
      }
      if ( !v3 )
        break;
      v9 = v1 + 1;
      if ( v1 + 1 > (unsigned __int64)xmmword_140C67B20 )
        v9 = xmmword_140C67B20;
      v4 = v9 - 1;
      v3 = 0LL;
    }
    if ( v6 < v1 || v6 == -1LL )
      break;
    v10 = 0LL;
    v11 = xmmword_140C67B20;
    if ( (unsigned __int64)xmmword_140C67B20 > v6 )
    {
      v12 = *((_QWORD *)&xmmword_140C67B20 + 1) + 8 * ((unsigned __int64)(xmmword_140C67B20 - 1) >> 6);
      v13 = (__int64 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 8 * (v6 >> 6));
      v14 = v13 + 1;
      for ( j = ((1LL << (v6 & 0x3F)) - 1) | *v13; ; j = *v13 )
      {
        v16 = ~j;
        if ( v16 )
          break;
        if ( (unsigned __int64)v14 > v12 )
        {
          v11 = xmmword_140C67B20;
LABEL_24:
          v18 = v11;
          goto LABEL_34;
        }
        ++v13;
        ++v14;
      }
      _BitScanForward64((unsigned __int64 *)&v17, v16);
      v18 = (unsigned int)v17 + (((__int64)v13 - *((_QWORD *)&xmmword_140C67B20 + 1)) >> 3 << 6);
      v11 = xmmword_140C67B20;
      if ( v18 > (unsigned __int64)xmmword_140C67B20 )
        goto LABEL_24;
      for ( k = ~(v16 | ((1LL << v17) - 1)); !k; k = *v20 )
      {
        v20 = (unsigned __int64 *)(v13 + 1);
        if ( (unsigned __int64)(v13 + 1) > v12 )
        {
          k = 64LL;
          goto LABEL_31;
        }
        ++v13;
      }
      _BitScanForward64(&k, k);
LABEL_31:
      v21 = k + (((__int64)v13 - *((_QWORD *)&xmmword_140C67B20 + 1)) >> 3 << 6);
      v11 = xmmword_140C67B20;
      if ( v21 > (unsigned __int64)xmmword_140C67B20 )
        v21 = xmmword_140C67B20;
      v10 = v21 - v18;
LABEL_34:
      if ( v10 )
        continue;
    }
    v18 = v11;
    v22 = v18 - v6;
    result = MiMirrorRemoveInactivePages(a1, v6, v22);
    v1 = v22 + v10 + v6;
  }
  while ( v1 < (unsigned __int64)xmmword_140C67B20 );
  return result;
}
