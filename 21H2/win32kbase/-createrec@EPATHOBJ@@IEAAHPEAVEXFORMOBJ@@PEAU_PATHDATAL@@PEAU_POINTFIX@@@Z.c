/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0080694
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C00805CC (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C013CF30 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00BC570 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C00BD398 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     newpathalloc @ 0x1C00BDC30 (newpathalloc.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C013D070 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z @ 0x1C013D104 (-vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z.c)
 */

__int64 __fastcall EPATHOBJ::createrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  EXFORMOBJ *v6; // r11
  __int64 v8; // r10
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  int v14; // r8d
  __int64 v16; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  struct _POINTFIX *v21; // rcx
  struct _POINTFIX *v22; // rdx
  struct _POINTFIX *v23; // rdx
  __int64 v24; // rcx
  struct _POINTFIX *v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rax

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  v9 = *(_QWORD *)(v8 + 24);
  LODWORD(v10) = 0;
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 8) + 24LL;
    v12 = v9 + *(unsigned int *)(v9 + 16);
    if ( v12 > v11 )
      v10 = (__int64)(v12 - v11) >> 3;
  }
  v13 = *(_DWORD *)(v8 + 80) & 1;
  v14 = *(_DWORD *)a3;
  if ( (v14 & 0x10) != 0 && (_DWORD)v10 )
    LODWORD(v10) = 3 * (((unsigned int)v10 - v13) / 3) + v13;
  if ( (unsigned int)v10 < v13 + *((_DWORD *)a3 + 1) && (unsigned int)v10 < 8 )
  {
    v16 = newpathalloc();
    v9 = v16;
    if ( !v16 )
    {
      EngSetLastError(8u);
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    *(_QWORD *)v16 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v16;
    LODWORD(v10) = (unsigned int)(v16 + *(_DWORD *)(v16 + 16) - *(_DWORD *)(v16 + 8) - 24) >> 3;
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      LODWORD(v10) = 3 * (((unsigned int)v10 - v13) / 3) + v13;
    v6 = a2;
  }
  if ( (unsigned int)v10 > v13 + *((_DWORD *)a3 + 1) )
    LODWORD(v10) = v13 + *((_DWORD *)a3 + 1);
  v18 = *(_QWORD *)(v9 + 8);
  *(_DWORD *)(v18 + 16) = v14 | 2;
  *(_DWORD *)(v18 + 20) = v10;
  *(_QWORD *)v18 = 0LL;
  *(_QWORD *)(v18 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v19 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    *(_QWORD *)(v18 + 24) = *(_QWORD *)(v19 + 64);
    LODWORD(v10) = v10 - 1;
    *(_DWORD *)(v18 + 16) |= *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) &= 0xFFFFFFFA;
  }
  else
  {
    v20 = *(_QWORD *)(v19 + 40);
    if ( v20 )
      *(_DWORD *)(v20 + 16) &= ~2u;
  }
  v21 = (struct _POINTFIX *)(v18 + 8 * (v13 + 3LL));
  v22 = (struct _POINTFIX *)*((_QWORD *)a3 + 1);
  if ( a4 )
  {
    vOffsetPoints(v21, v22, v10, a4->x, a4->y);
  }
  else if ( v6 )
  {
    EXFORMOBJ::bXformRound(v6, (struct _POINTL *)v22, (struct _POINTFIX *)(v18 + 8 * (v13 + 3LL)), (unsigned int)v10);
  }
  else
  {
    memmove(v21, v22, 8LL * (unsigned int)v10);
  }
  *((_DWORD *)a3 + 1) -= v10;
  *((_QWORD *)a3 + 1) += 8LL * (unsigned int)v10;
  *(_DWORD *)a3 &= 0xFFFFFFFA;
  v23 = (struct _POINTFIX *)(v18 + 24);
  v24 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v24 + 40) )
  {
    *(_DWORD *)(v24 + 56) = v23->x;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v18 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
    v24 = *((_QWORD *)this + 1);
  }
  if ( v13 + (_DWORD)v10 )
  {
    do
    {
      ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v23);
      v23 = v25 + 1;
    }
    while ( v26 != 1 );
    v24 = *((_QWORD *)this + 1);
  }
  v27 = *(_QWORD **)(v24 + 40);
  if ( v27 )
  {
    *v27 = v18;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v18;
  }
  else
  {
    *(_QWORD *)(v24 + 40) = v18;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v18;
  }
  *(_QWORD *)(v9 + 8) = v18 + 8 * (*(unsigned int *)(v18 + 20) + 3LL);
  return 1LL;
}
