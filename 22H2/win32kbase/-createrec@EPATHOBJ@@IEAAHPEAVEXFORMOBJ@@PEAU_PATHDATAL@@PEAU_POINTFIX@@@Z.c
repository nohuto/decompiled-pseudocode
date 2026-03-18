/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0153A28
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C01533C8 (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C0153490 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C015280C (-bXformRound@EXFORMOBJ@@QEAAHAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ?ssizet_add_to_sizet@?$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z @ 0x1C01529C4 (-ssizet_add_to_sizet@-$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1C0152C18 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C0153E38 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C0153F60 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@AEAV?$umptr_r@U_POINTL@@@@IJJ@Z @ 0x1C0154118 (-vOffsetPoints@@YAXPEAU_POINTFIX@@AEAV-$umptr_r@U_POINTL@@@@IJJ@Z.c)
 *     newpathalloc @ 0x1C0154390 (newpathalloc.c)
 */

__int64 __fastcall EPATHOBJ::createrec(EPATHOBJ *this, struct EXFORMOBJ *a2, __int64 a3, struct _POINTFIX *a4)
{
  __int64 v4; // r10
  struct _PATHDATAL *v5; // rdi
  __int64 *v7; // r11
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // r9d
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rsi
  unsigned int v17; // ebp
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r10
  struct _POINTFIX *v23; // rdx
  __int64 v24; // rcx
  struct _POINTFIX *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  _QWORD *v28; // rcx
  unsigned __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  struct EXFORMOBJ *v30; // [rsp+78h] [rbp+10h]

  v30 = a2;
  v4 = *((_QWORD *)this + 1);
  v5 = (struct _PATHDATAL *)a3;
  LODWORD(a3) = 0;
  v7 = (__int64 *)a2;
  v9 = *(_QWORD *)(v4 + 24);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 8) + 24LL;
    v11 = v9 + *(unsigned int *)(v9 + 16);
    if ( v11 > v10 )
      a3 = (__int64)(v11 - v10) >> 3;
  }
  v12 = *((_DWORD *)v5 + 8);
  v13 = *(_DWORD *)(v4 + 80) & 1;
  if ( (v12 & 0x10) != 0 && (_DWORD)a3 )
    LODWORD(a3) = 3 * (((unsigned int)a3 - v13) / 3) + v13;
  if ( (unsigned int)a3 < v13 + *((_DWORD *)v5 + 9) && (unsigned int)a3 < 8 )
  {
    v14 = newpathalloc();
    v9 = v14;
    if ( !v14 )
    {
      EngSetLastError(8u);
LABEL_11:
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    v7 = (__int64 *)v30;
    *(_QWORD *)v14 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v14;
    v12 = *((_DWORD *)v5 + 8);
    LODWORD(a3) = (unsigned int)(*(_DWORD *)(v14 + 16) - *(_DWORD *)(v14 + 8) + v14 - 24) >> 3;
    if ( (v12 & 0x10) != 0 )
      LODWORD(a3) = a3 - (((unsigned int)(*(_DWORD *)(v14 + 16) - *(_DWORD *)(v14 + 8) + v14 - 24) >> 3) - v13) % 3;
  }
  v16 = *(_QWORD *)(v9 + 8);
  v17 = v13 + *((_DWORD *)v5 + 9);
  if ( (unsigned int)a3 <= v17 )
    v17 = a3;
  v18 = v12 | 2;
  *(_QWORD *)v16 = 0LL;
  *(_DWORD *)(v16 + 16) = v18;
  *(_DWORD *)(v16 + 20) = v17;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v19 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    --v17;
    *(_QWORD *)(v16 + 24) = *(_QWORD *)(v19 + 64);
    *(_DWORD *)(v16 + 16) = v18 | *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) &= 0xFFFFFFFA;
  }
  else
  {
    v20 = *(_QWORD *)(v19 + 40);
    if ( v20 )
      *(_DWORD *)(v20 + 16) &= ~2u;
  }
  if ( a4 )
  {
    vOffsetPoints(v16 + 8 * (v13 + 3), (_DWORD)v5, v17, a4->x, a4->y);
  }
  else if ( v7 )
  {
    EXFORMOBJ::bXformRound(v7, (__int64 *)v5, v16 + 8 * (v13 + 3LL), v17);
  }
  else
  {
    umptr_r<_POINTL>::read<_POINTFIX>((__int64)v5, (void *)(v16 + 8 * (v13 + 3LL)), v17);
  }
  if ( *((_BYTE *)v5 + 25) || *((_BYTE *)v5 + 24) )
    goto LABEL_11;
  *((_DWORD *)v5 + 9) -= v17;
  v21 = *((_QWORD *)v5 + 2);
  v29 = 0LL;
  if ( umptr<_POINTL>::ssizet_add_to_sizet(v21, v17, (__int64 *)&v29) && v29 <= *((_QWORD *)v5 + 1) )
    *((_QWORD *)v5 + 2) = v29;
  else
    *((_BYTE *)v5 + 24) = 1;
  *((_DWORD *)v5 + 8) &= 0xFFFFFFFA;
  v23 = (struct _POINTFIX *)(v16 + 24);
  v24 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v24 + 40) == v22 )
  {
    *(_DWORD *)(v24 + 56) = v23->x;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v16 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
  }
  if ( v13 + v17 )
  {
    do
    {
      ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v23);
      v23 = v25 + 1;
    }
    while ( v26 != 1 );
  }
  v27 = *((_QWORD *)this + 1);
  v28 = *(_QWORD **)(v27 + 40);
  if ( v28 )
  {
    *v28 = v16;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v16;
  }
  else
  {
    *(_QWORD *)(v27 + 40) = v16;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v16;
  }
  result = 1LL;
  *(_QWORD *)(v9 + 8) = v16 + 8 * (*(unsigned int *)(v16 + 20) + 3LL);
  return result;
}
