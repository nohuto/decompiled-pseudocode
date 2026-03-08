/*
 * XREFs of MiMirrorPerformBlackWrites @ 0x140624FC4
 * Callers:
 *     MiMirrorBlackPhase @ 0x1406247B4 (MiMirrorBlackPhase.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorPerformBlackWrites(__int64 a1)
{
  int v1; // r14d
  unsigned __int64 v2; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rbx
  __int64 i; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  __int64 *v14; // r8
  _QWORD *v15; // rax
  __int64 j; // r9
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 k; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi

  v1 = 0;
  v2 = 0LL;
  do
  {
    v4 = v2 & -(__int64)(v2 < (unsigned __int64)xmmword_140C67B20);
    v5 = xmmword_140C67B20 - 1;
    while ( 1 )
    {
      if ( v5 - v4 == -1LL )
        goto LABEL_4;
      v7 = (_QWORD *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 8 * (v4 >> 6));
      for ( i = ~*v7 | ((1LL << (v4 & 0x3F)) - 1); i == -1; i = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > *((_QWORD *)&xmmword_140C67B20 + 1) + 8 * (v5 >> 6) )
          goto LABEL_4;
      }
      _BitScanForward64(&v9, ~i);
      v6 = v9 + (((__int64)v7 - *((_QWORD *)&xmmword_140C67B20 + 1)) >> 3 << 6);
      if ( v6 > v5 )
      {
LABEL_4:
        v6 = -1LL;
      }
      else if ( v6 != -1LL )
      {
        break;
      }
      if ( !v4 )
        break;
      v10 = v2 + 1;
      if ( v2 + 1 > (unsigned __int64)xmmword_140C67B20 )
        v10 = xmmword_140C67B20;
      v5 = v10 - 1;
      v4 = 0LL;
    }
    if ( v6 < v2 || v6 == -1LL )
      break;
    v11 = 0LL;
    v12 = xmmword_140C67B20;
    if ( (unsigned __int64)xmmword_140C67B20 > v6 )
    {
      v13 = *((_QWORD *)&xmmword_140C67B20 + 1) + 8 * ((unsigned __int64)(xmmword_140C67B20 - 1) >> 6);
      v14 = (__int64 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 8 * (v6 >> 6));
      v15 = v14 + 1;
      for ( j = ((1LL << (v6 & 0x3F)) - 1) | *v14; ; j = *v14 )
      {
        v17 = ~j;
        if ( v17 )
          break;
        if ( (unsigned __int64)v15 > v13 )
        {
          v12 = xmmword_140C67B20;
LABEL_24:
          v19 = v12;
          goto LABEL_34;
        }
        ++v14;
        ++v15;
      }
      _BitScanForward64((unsigned __int64 *)&v18, v17);
      v19 = (unsigned int)v18 + (((__int64)v14 - *((_QWORD *)&xmmword_140C67B20 + 1)) >> 3 << 6);
      v12 = xmmword_140C67B20;
      if ( v19 > (unsigned __int64)xmmword_140C67B20 )
        goto LABEL_24;
      for ( k = ~(v17 | ((1LL << v18) - 1)); !k; k = *v21 )
      {
        v21 = (unsigned __int64 *)(v14 + 1);
        if ( (unsigned __int64)(v14 + 1) > v13 )
        {
          k = 64LL;
          goto LABEL_31;
        }
        ++v14;
      }
      _BitScanForward64(&k, k);
LABEL_31:
      v22 = k + (((__int64)v14 - *((_QWORD *)&xmmword_140C67B20 + 1)) >> 3 << 6);
      v12 = xmmword_140C67B20;
      if ( v22 > (unsigned __int64)xmmword_140C67B20 )
        v22 = xmmword_140C67B20;
      v11 = v22 - v19;
LABEL_34:
      if ( v11 )
        goto LABEL_41;
    }
    v19 = v12;
LABEL_41:
    v23 = v19 - v6;
    v1 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v6 << 12, v23 << 12);
    if ( v1 < 0 )
      break;
    v2 = v23 + v11 + v6;
  }
  while ( v2 < (unsigned __int64)xmmword_140C67B20 );
  return (unsigned int)v1;
}
