/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02D0414
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C015AA94 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CFFDC (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02D00D0 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 */

_BOOL8 __fastcall PRECOMPUTE::bPreComputeFast(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        char a5)
{
  __int64 v5; // rax
  _BYTE *v8; // r14
  unsigned int v9; // esi
  struct _RECTL *v10; // r15
  __int128 *v11; // r9
  __int128 v12; // xmm0
  __int128 *v13; // rbx
  char v14; // r12
  int v15; // edi
  unsigned int v16; // r14d
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r12d
  LONG v20; // edx
  struct _RECTL *v21; // r8
  int v22; // eax
  int v23; // eax
  int v24; // edx
  struct _RECTL *v25; // rax
  unsigned int v26; // eax
  int v27; // eax
  _BYTE *v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+28h] [rbp-D8h]
  LONG v32; // [rsp+38h] [rbp-C8h]
  int v33; // [rsp+3Ch] [rbp-C4h]
  __int128 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+58h] [rbp-A8h]
  __int128 v36; // [rsp+68h] [rbp-98h]
  __int128 v37; // [rsp+78h] [rbp-88h]
  _OWORD v38[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-48h] BYREF
  struct _RECTL v40; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[960]; // [rsp+210h] [rbp+110h] BYREF

  v5 = *((unsigned int *)a2 + 1);
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(v38, 0, sizeof(v38));
  if ( (unsigned int)v5 > 0x14 )
  {
    if ( (unsigned __int64)(48 * v5) > 0xFFFFFFFF )
      return 0LL;
    v29 = PALLOCMEM2(48 * v5, 1734632775LL, 0);
    v8 = v29;
    if ( !v29 )
      return 0LL;
    v30 = 1;
  }
  else
  {
    v30 = 0;
    v8 = v41;
    v29 = v41;
  }
  v9 = 0;
  v10 = &v40;
  v37 = 0LL;
  v39 = 0LL;
  if ( a4 )
  {
    v11 = &v39;
    v12 = (__int128)*a4;
    DWORD1(v39) = 16 * a4->top;
    HIDWORD(v39) = 16 * a4->bottom;
    v37 = v12;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !(unsigned int)bConstructGET(a2, v38, v8, v11) )
  {
LABEL_50:
    v15 = 1;
    goto LABEL_54;
  }
  v13 = &v34;
  v14 = a5;
  v15 = 0;
  LODWORD(v35) = 0;
  v16 = 0x80000000;
  v33 = DWORD2(v37);
  v32 = v37;
  *(_QWORD *)&v34 = &v34;
  HIDWORD(v34) = 0x7FFFFFFF;
LABEL_11:
  if ( v13 != &v34 )
  {
    vAdvanceAETEdges(&v34);
    v13 = (__int128 *)v34;
    if ( (__int128 *)v34 != &v34 )
    {
      if ( *(__int128 **)v34 != &v34 )
      {
        vXSortAETEdges(&v34);
        v13 = (__int128 *)v34;
      }
      v18 = *(_QWORD *)&v38[0];
      goto LABEL_18;
    }
  }
  v18 = *(_QWORD *)&v38[0];
  v17 = (unsigned __int64)v38;
  if ( *(_OWORD **)&v38[0] != v38 )
  {
    v16 = *(_DWORD *)(*(_QWORD *)&v38[0] + 16LL);
LABEL_18:
    if ( *(_DWORD *)(v18 + 16) == v16 )
    {
      vMoveNewEdges(v38, &v34, v16);
      v13 = (__int128 *)v34;
    }
    v19 = v14 & 2;
    while ( 1 )
    {
      v20 = *((_DWORD *)v13 + 3);
      v21 = v10;
      if ( v19 )
      {
        v22 = *((_DWORD *)v13 + 10);
        do
        {
          v13 = *(__int128 **)v13;
          v22 += *((_DWORD *)v13 + 10);
        }
        while ( v22 );
      }
      else
      {
        v13 = *(__int128 **)v13;
      }
      v23 = *((_DWORD *)v13 + 3);
      if ( v20 < v23 )
      {
        if ( a4 )
        {
          v17 = (unsigned int)v32;
          if ( v20 >= v32 )
            v17 = (unsigned int)v20;
          v24 = v33;
          v10->left = v17;
          if ( v23 <= v33 )
            v24 = v23;
          v25 = v10 + 1;
          if ( (int)v17 >= v24 )
            v25 = v10;
          v10 = v25;
          v26 = v9 + 1;
          if ( (int)v17 >= v24 )
            v26 = v9;
          v9 = v26;
        }
        else
        {
          v10->left = v20;
          ++v9;
          ++v10;
          v24 = v23;
        }
        v21->right = v24;
        v21->top = v16;
        v21->bottom = v16 + 1;
        if ( v9 == 20 )
        {
          if ( v19 )
            v27 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v17, a3, &v40, 0x14u);
          else
            v27 = PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v17, a3, &v40, 0x14u);
          if ( !v27 )
          {
            v15 = 1;
            goto LABEL_53;
          }
          v10 = &v40;
          v9 = 0;
        }
      }
      v13 = *(__int128 **)v13;
      if ( v13 == &v34 )
      {
        v13 = (__int128 *)v34;
        ++v16;
        v14 = a5;
        goto LABEL_11;
      }
    }
  }
  if ( v9 )
  {
    if ( (v14 & 2) != 0 )
    {
      v8 = v29;
      if ( (unsigned int)PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v38, a3, &v40, v9) )
        goto LABEL_54;
      goto LABEL_50;
    }
    if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v38, a3, &v40, v9) )
      v15 = 1;
  }
LABEL_53:
  v8 = v29;
LABEL_54:
  if ( v30 )
    Win32FreePool(v8);
  return !v15;
}
