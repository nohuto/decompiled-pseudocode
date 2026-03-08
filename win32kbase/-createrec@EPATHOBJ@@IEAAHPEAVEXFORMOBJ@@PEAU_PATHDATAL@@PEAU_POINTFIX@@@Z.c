/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C0180B48 (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C0180C10 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     Feature_1391280440__private_IsEnabledDeviceUsage @ 0x1C00DE19C (Feature_1391280440__private_IsEnabledDeviceUsage.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C017FF8C (-bXformRound@EXFORMOBJ@@QEAAHAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ?ssizet_add_to_sizet@?$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z @ 0x1C0180144 (-ssizet_add_to_sizet@-$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1C0180398 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C01815E8 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C0181710 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@AEAV?$umptr_r@U_POINTL@@@@IJJ@Z @ 0x1C01818C8 (-vOffsetPoints@@YAXPEAU_POINTFIX@@AEAV-$umptr_r@U_POINTL@@@@IJJ@Z.c)
 *     freepathalloc @ 0x1C0181AB0 (freepathalloc.c)
 *     newpathalloc @ 0x1C0181B40 (newpathalloc.c)
 */

__int64 __fastcall EPATHOBJ::createrec(EPATHOBJ *this, struct EXFORMOBJ *a2, __int64 a3, struct _POINTFIX *a4)
{
  __int64 v4; // r10
  struct _PATHDATAL *v5; // rdi
  struct _POINTFIX *v6; // r11
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // r9d
  unsigned int v12; // r15d
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // r14
  unsigned int v16; // ebp
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r10
  struct _POINTFIX *v22; // rdx
  __int64 v23; // rcx
  struct _POINTFIX *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 result; // rax
  unsigned __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v30; // [rsp+78h] [rbp+10h]
  struct _POINTFIX *v31; // [rsp+88h] [rbp+20h]

  v31 = a4;
  v30 = (__int64 *)a2;
  v4 = *((_QWORD *)this + 1);
  v5 = (struct _PATHDATAL *)a3;
  LODWORD(a3) = 0;
  v6 = a4;
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8) + 24LL;
    v10 = v8 + *(unsigned int *)(v8 + 16);
    if ( v10 > v9 )
      a3 = (__int64)(v10 - v9) >> 3;
  }
  v11 = *((_DWORD *)v5 + 8);
  v12 = *(_DWORD *)(v4 + 80) & 1;
  if ( (v11 & 0x10) != 0 && (_DWORD)a3 )
    LODWORD(a3) = 3 * (((unsigned int)a3 - v12) / 3) + v12;
  if ( (unsigned int)a3 >= v12 + *((_DWORD *)v5 + 9) || (unsigned int)a3 >= 8 )
  {
    v14 = 0;
  }
  else
  {
    v13 = newpathalloc();
    v8 = v13;
    if ( !v13 )
    {
      EngSetLastError(8u);
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    v14 = 1;
    v6 = v31;
    *(_QWORD *)v13 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v13;
    v11 = *((_DWORD *)v5 + 8);
    LODWORD(a3) = (unsigned int)(*(_DWORD *)(v13 + 16) - *(_DWORD *)(v13 + 8) + v13 - 24) >> 3;
    if ( (v11 & 0x10) != 0 )
      LODWORD(a3) = a3 - (((unsigned int)(*(_DWORD *)(v13 + 16) - *(_DWORD *)(v13 + 8) + v13 - 24) >> 3) - v12) % 3;
  }
  v15 = *(_QWORD *)(v8 + 8);
  v16 = v12 + *((_DWORD *)v5 + 9);
  if ( (unsigned int)a3 <= v16 )
    v16 = a3;
  v17 = v11 | 2;
  *(_QWORD *)v15 = 0LL;
  *(_DWORD *)(v15 + 16) = v17;
  *(_DWORD *)(v15 + 20) = v16;
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v18 = *((_QWORD *)this + 1);
  if ( v12 )
  {
    --v16;
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(v18 + 64);
    *(_DWORD *)(v15 + 16) = v17 | *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) &= 0xFFFFFFFA;
  }
  else
  {
    v19 = *(_QWORD *)(v18 + 40);
    if ( v19 )
      *(_DWORD *)(v19 + 16) &= ~2u;
  }
  if ( v6 )
  {
    vOffsetPoints(v15 + 8 * (v12 + 3), (_DWORD)v5, v16, v6->x, v6->y);
  }
  else if ( v30 )
  {
    EXFORMOBJ::bXformRound(v30, (__int64 *)v5, v15 + 8 * (v12 + 3LL), v16);
  }
  else
  {
    umptr_r<_POINTL>::read<_POINTFIX>((__int64)v5, (void *)(v15 + 8 * (v12 + 3LL)), v16);
  }
  if ( *((_BYTE *)v5 + 25) || *((_BYTE *)v5 + 24) )
  {
    EPATHOBJ::reinit(this);
    if ( !(unsigned int)Feature_1391280440__private_IsEnabledDeviceUsage() && v14 == 1 )
      freepathalloc((void *)v8);
    return 0LL;
  }
  *((_DWORD *)v5 + 9) -= v16;
  v20 = *((_QWORD *)v5 + 2);
  v29 = 0LL;
  if ( umptr<_POINTL>::ssizet_add_to_sizet(v20, v16, (__int64 *)&v29) && v29 <= *((_QWORD *)v5 + 1) )
    *((_QWORD *)v5 + 2) = v29;
  else
    *((_BYTE *)v5 + 24) = 1;
  *((_DWORD *)v5 + 8) &= 0xFFFFFFFA;
  v22 = (struct _POINTFIX *)(v15 + 24);
  v23 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v23 + 40) == v21 )
  {
    *(_DWORD *)(v23 + 56) = v22->x;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v15 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
  }
  if ( v12 + v16 )
  {
    do
    {
      ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v22);
      v22 = v24 + 1;
    }
    while ( v25 != 1 );
  }
  v26 = *((_QWORD *)this + 1);
  v27 = *(_QWORD **)(v26 + 40);
  if ( v27 )
  {
    *v27 = v15;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v15;
  }
  else
  {
    *(_QWORD *)(v26 + 40) = v15;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v15;
  }
  result = 1LL;
  *(_QWORD *)(v8 + 8) = v15 + 8 * (*(unsigned int *)(v15 + 20) + 3LL);
  return result;
}
