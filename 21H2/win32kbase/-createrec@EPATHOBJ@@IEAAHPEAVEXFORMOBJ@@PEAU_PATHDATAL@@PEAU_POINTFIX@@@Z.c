/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0019374
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C00192AC (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C016A0A0 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C001B1F0 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     freepathalloc @ 0x1C0090F40 (freepathalloc.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C00CC16C (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     newpathalloc @ 0x1C00CCAC0 (newpathalloc.c)
 *     ?Feature_1592607032__private_IsEnabled@@YAHXZ @ 0x1C00D9644 (-Feature_1592607032__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C016A1E0 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z @ 0x1C016A274 (-vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z.c)
 */

__int64 __fastcall EPATHOBJ::createrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  EXFORMOBJ *v6; // r10
  __int64 v8; // r8
  _QWORD *v9; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  char *v12; // rax
  unsigned int v13; // r12d
  int v14; // r8d
  __int64 v16; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdi
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  struct _POINTFIX *v23; // rcx
  struct _POINTFIX *v24; // rdx
  struct _POINTFIX *v25; // rdx
  __int64 v26; // rcx
  struct _POINTFIX *v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rax
  _QWORD *v30; // [rsp+40h] [rbp-38h]

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  v30 = *(_QWORD **)(v8 + 24);
  v9 = v30;
  v10 = 0LL;
  if ( v30 )
  {
    v11 = v30[1] + 24LL;
    v12 = (char *)v30 + *((unsigned int *)v30 + 4);
    if ( (unsigned __int64)v12 > v11 )
      v10 = (__int64)&v12[-v11] >> 3;
  }
  v13 = *(_DWORD *)(v8 + 80) & 1;
  v14 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0x10) != 0 && (_DWORD)v10 )
    v10 = 3 * (((unsigned int)v10 - v13) / 3) + v13;
  if ( (unsigned int)v10 < v13 + *((_DWORD *)a3 + 1) && (unsigned int)v10 < 8 )
  {
    v16 = newpathalloc();
    v9 = (_QWORD *)v16;
    if ( !v16 )
    {
      EngSetLastError(8u);
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    *(_QWORD *)v16 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v16;
    v10 = (unsigned int)(v16 + *(_DWORD *)(v16 + 16) - *(_DWORD *)(v16 + 8) - 24) >> 3;
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      v10 = 3 * (((unsigned int)v10 - v13) / 3) + v13;
    v6 = a2;
  }
  v18 = v13 + *((_DWORD *)a3 + 1);
  if ( (unsigned int)v10 > v18 )
    v10 = v18;
  v19 = v9[1];
  v20 = v14 | 2;
  *(_DWORD *)(v19 + 16) = v20;
  *(_DWORD *)(v19 + 20) = v10;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)(v19 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v21 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v21 + 64);
    v10 = (unsigned int)(v10 - 1);
    *(_DWORD *)(v19 + 16) = v20 | *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) &= 0xFFFFFFFA;
  }
  else
  {
    v22 = *(_QWORD *)(v21 + 40);
    if ( v22 )
      *(_DWORD *)(v22 + 16) &= ~2u;
  }
  v23 = (struct _POINTFIX *)(v19 + 8 * (v13 + 3LL));
  v24 = (struct _POINTFIX *)*((_QWORD *)a3 + 1);
  if ( a4 )
  {
    vOffsetPoints(v23, v24, v10, a4->x, a4->y);
  }
  else if ( v6 )
  {
    EXFORMOBJ::bXformRound(v6, (struct _POINTL *)v24, (struct _POINTFIX *)(v19 + 8 * (v13 + 3LL)), (unsigned int)v10);
  }
  else
  {
    memmove(v23, v24, 8 * v10);
  }
  *((_DWORD *)a3 + 1) -= v10;
  *((_QWORD *)a3 + 1) += 8LL * (unsigned int)v10;
  *(_DWORD *)a3 &= 0xFFFFFFFA;
  v25 = (struct _POINTFIX *)(v19 + 24);
  v26 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v26 + 40) )
  {
    *(_DWORD *)(v26 + 56) = v25->x;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v19 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
    v26 = *((_QWORD *)this + 1);
  }
  if ( v13 + (_DWORD)v10 )
  {
    do
    {
      ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v25);
      v25 = v27 + 1;
    }
    while ( v28 != 1 );
    v26 = *((_QWORD *)this + 1);
  }
  v29 = *(_QWORD **)(v26 + 40);
  if ( v29 )
  {
    *v29 = v19;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v19;
  }
  else
  {
    *(_QWORD *)(v26 + 40) = v19;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v19;
  }
  v9[1] = v19 + 8 * (*(unsigned int *)(v19 + 20) + 3LL);
  return 1LL;
}
