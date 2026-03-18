/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02CE918
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014D744 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CE4E0 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CE5DC (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
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
  unsigned int v9; // ecx
  unsigned int v10; // esi
  struct _RECTL *v11; // r15
  __int128 *v12; // r9
  __int128 v13; // xmm0
  __int128 *v14; // rbx
  char v15; // r12
  int v16; // edi
  unsigned int v17; // r14d
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r12d
  LONG v21; // edx
  struct _RECTL *v22; // r8
  int v23; // eax
  int v24; // eax
  int v25; // edx
  struct _RECTL *v26; // rax
  unsigned int v27; // eax
  int v28; // eax
  _BYTE *v30; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+28h] [rbp-D8h]
  LONG v33; // [rsp+38h] [rbp-C8h]
  int v34; // [rsp+3Ch] [rbp-C4h]
  __int128 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+58h] [rbp-A8h]
  __int128 v37; // [rsp+68h] [rbp-98h]
  __int128 v38; // [rsp+78h] [rbp-88h]
  _OWORD v39[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-48h] BYREF
  struct _RECTL v41; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v42[960]; // [rsp+210h] [rbp+110h] BYREF

  v5 = *((unsigned int *)a2 + 1);
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( (unsigned int)v5 > 0x14 )
  {
    v9 = 48 * v5;
    if ( (unsigned __int64)(48 * v5) > 0xFFFFFFFF )
      return 0LL;
    if ( !v9 )
      return 0LL;
    v30 = (_BYTE *)Win32AllocPool(v9, 1734632775LL);
    v8 = v30;
    if ( !v30 )
      return 0LL;
    v31 = 1;
  }
  else
  {
    v31 = 0;
    v8 = v42;
    v30 = v42;
  }
  v10 = 0;
  v11 = &v41;
  v38 = 0LL;
  v40 = 0LL;
  if ( a4 )
  {
    v12 = &v40;
    v13 = (__int128)*a4;
    DWORD1(v40) = 16 * a4->top;
    HIDWORD(v40) = 16 * a4->bottom;
    v38 = v13;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !(unsigned int)bConstructGET(a2, v39, v8, v12) )
  {
LABEL_51:
    v16 = 1;
    goto LABEL_55;
  }
  v14 = &v35;
  v15 = a5;
  v16 = 0;
  LODWORD(v36) = 0;
  v17 = 0x80000000;
  v34 = DWORD2(v38);
  v33 = v38;
  *(_QWORD *)&v35 = &v35;
  HIDWORD(v35) = 0x7FFFFFFF;
LABEL_12:
  if ( v14 != &v35 )
  {
    vAdvanceAETEdges(&v35);
    v14 = (__int128 *)v35;
    if ( (__int128 *)v35 != &v35 )
    {
      if ( *(__int128 **)v35 != &v35 )
      {
        vXSortAETEdges(&v35);
        v14 = (__int128 *)v35;
      }
      v19 = *(_QWORD *)&v39[0];
      goto LABEL_19;
    }
  }
  v19 = *(_QWORD *)&v39[0];
  v18 = (unsigned __int64)v39;
  if ( *(_OWORD **)&v39[0] != v39 )
  {
    v17 = *(_DWORD *)(*(_QWORD *)&v39[0] + 16LL);
LABEL_19:
    if ( *(_DWORD *)(v19 + 16) == v17 )
    {
      vMoveNewEdges(v39, &v35, v17);
      v14 = (__int128 *)v35;
    }
    v20 = v15 & 2;
    while ( 1 )
    {
      v21 = *((_DWORD *)v14 + 3);
      v22 = v11;
      if ( v20 )
      {
        v23 = *((_DWORD *)v14 + 10);
        do
        {
          v14 = *(__int128 **)v14;
          v23 += *((_DWORD *)v14 + 10);
        }
        while ( v23 );
      }
      else
      {
        v14 = *(__int128 **)v14;
      }
      v24 = *((_DWORD *)v14 + 3);
      if ( v21 < v24 )
      {
        if ( a4 )
        {
          v18 = (unsigned int)v33;
          if ( v21 >= v33 )
            v18 = (unsigned int)v21;
          v25 = v34;
          v11->left = v18;
          if ( v24 <= v34 )
            v25 = v24;
          v26 = v11 + 1;
          if ( (int)v18 >= v25 )
            v26 = v11;
          v11 = v26;
          v27 = v10 + 1;
          if ( (int)v18 >= v25 )
            v27 = v10;
          v10 = v27;
        }
        else
        {
          v11->left = v21;
          ++v10;
          ++v11;
          v25 = v24;
        }
        v22->right = v25;
        v22->top = v17;
        v22->bottom = v17 + 1;
        if ( v10 == 20 )
        {
          if ( v20 )
            v28 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v18, a3, &v41, 0x14u);
          else
            v28 = PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v18, a3, &v41, 0x14u);
          if ( !v28 )
          {
            v16 = 1;
            goto LABEL_54;
          }
          v11 = &v41;
          v10 = 0;
        }
      }
      v14 = *(__int128 **)v14;
      if ( v14 == &v35 )
      {
        v14 = (__int128 *)v35;
        ++v17;
        v15 = a5;
        goto LABEL_12;
      }
    }
  }
  if ( v10 )
  {
    if ( (v15 & 2) != 0 )
    {
      v8 = v30;
      if ( (unsigned int)PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v39, a3, &v41, v10) )
        goto LABEL_55;
      goto LABEL_51;
    }
    if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v39, a3, &v41, v10) )
      v16 = 1;
  }
LABEL_54:
  v8 = v30;
LABEL_55:
  if ( v31 )
    Win32FreePool(v8);
  return !v16;
}
