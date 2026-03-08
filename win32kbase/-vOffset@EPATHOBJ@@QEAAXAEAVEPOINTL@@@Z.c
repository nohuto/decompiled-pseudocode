/*
 * XREFs of ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C0181740
 * Callers:
 *     <none>
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00455F0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 */

void __fastcall EPATHOBJ::vOffset(EPATHOBJ *this, struct _POINTL *a2)
{
  _DWORD *v3; // rax
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  __int64 *v8; // r8
  int v9; // r11d
  __int64 *i; // rdx
  unsigned int v11; // edx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rax
  int *v18; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 1);
  v5 = 16 * a2->y;
  v6 = 16 * a2->x;
  v3[12] += v6;
  v3[14] += v6;
  v3[13] += v5;
  v3[15] += v5;
  v7 = v5 >> 4;
  if ( (*(_DWORD *)this & 4) == 0 )
    v7 = v5;
  v8 = *(__int64 **)(*((_QWORD *)this + 1) + 32LL);
  v9 = v6 >> 4;
  if ( (*(_DWORD *)this & 4) == 0 )
    v9 = v6;
  while ( v8 )
  {
    for ( i = v8 + 3; i < &v8[*((unsigned int *)v8 + 5) + 3]; ++i )
    {
      *(_DWORD *)i += v9;
      *((_DWORD *)i + 1) += v7;
    }
    v8 = (__int64 *)*v8;
  }
  if ( *((_DWORD *)this + 14) )
  {
    v11 = 0;
    do
    {
      v12 = v11++;
      v13 = (_DWORD *)(*((_QWORD *)this + 6) + 16 * v12);
      *v13 += a2->x;
      v13[2] += a2->x;
      v13[1] += a2->y;
      v13[3] += a2->y;
    }
    while ( v11 < *((_DWORD *)this + 14) );
  }
  if ( *((_DWORD *)this + 15) )
  {
    v14 = 0;
    do
    {
      v15 = v14++;
      v16 = (_DWORD *)(*((_QWORD *)this + 8) + 16 * v15);
      *v16 += a2->x;
      v16[2] += a2->x;
      v16[1] += a2->y;
      v16[3] += a2->y;
    }
    while ( v14 < *((_DWORD *)this + 15) );
  }
  v17 = *((_QWORD *)this + 2);
  if ( v17 || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) )
  {
    v18 = (int *)*((_QWORD *)this + 2);
    if ( v17 )
      RGNOBJ::bOffset(&v18, a2);
    v18 = (int *)*((_QWORD *)this + 3);
    if ( v18 )
      RGNOBJ::bOffset(&v18, a2);
    v18 = (int *)*((_QWORD *)this + 4);
    if ( v18 )
      RGNOBJ::bOffset(&v18, a2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v18 = (int *)*((_QWORD *)this + 5);
    RGNOBJ::bOffset(&v18, a2);
  }
}
