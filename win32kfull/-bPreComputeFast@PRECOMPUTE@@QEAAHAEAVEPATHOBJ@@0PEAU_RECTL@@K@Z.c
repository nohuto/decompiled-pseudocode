__int64 __fastcall PRECOMPUTE::bPreComputeFast(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        char a5)
{
  __int64 v5; // rax
  _BYTE *v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  struct _RECTL *v11; // r12
  unsigned int v12; // r14d
  __int128 *v13; // r9
  __int128 v14; // xmm0
  BOOL v15; // edi
  _OWORD *v16; // rsi
  unsigned int v17; // r15d
  __int64 v18; // rax
  unsigned int v19; // r9d
  LONG v20; // r8d
  struct _RECTL *v21; // rdx
  int v22; // eax
  int v23; // eax
  LONG v24; // ecx
  int v25; // r8d
  struct _RECTL *v26; // rax
  unsigned int v27; // eax
  int v28; // eax
  _BYTE *v30; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+2Ch] [rbp-D4h]
  LONG v34; // [rsp+38h] [rbp-C8h]
  __int128 v35; // [rsp+48h] [rbp-B8h]
  struct _RECTL *v36; // [rsp+48h] [rbp-B8h]
  _OWORD v37[3]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v38[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-48h] BYREF
  struct _RECTL v40; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[960]; // [rsp+210h] [rbp+110h] BYREF

  v5 = *((unsigned int *)a2 + 1);
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  if ( (unsigned int)v5 > 0x14 )
  {
    v10 = 48 * v5;
    if ( (unsigned __int64)(48 * v5) > 0xFFFFFFFF )
      return 0LL;
    v9 = 0;
    if ( !v10 )
      return 0LL;
    v30 = (_BYTE *)Win32AllocPool(v10, 1734632775LL, a3, a4);
    v8 = v30;
    if ( !v30 )
      return 0LL;
    v32 = 1;
  }
  else
  {
    v8 = v41;
    v9 = 0;
    v30 = v41;
    v32 = 0;
  }
  v11 = &v40;
  v12 = 0;
  v35 = 0LL;
  v39 = 0LL;
  if ( a4 )
  {
    v13 = &v39;
    v14 = (__int128)*a4;
    DWORD1(v39) = 16 * a4->top;
    HIDWORD(v39) = 16 * a4->bottom;
    v35 = v14;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned int)bConstructGET(a2, v38, v8, v13) )
  {
    v16 = v37;
    *(_QWORD *)&v37[0] = v37;
    v15 = 0;
    v17 = 0x80000000;
    v34 = v35;
    *(_QWORD *)((char *)v37 + 12) = 0x7FFFFFFFLL;
LABEL_13:
    if ( v16 == v37 || (vAdvanceAETEdges(v37), v16 = *(_OWORD **)&v37[0], *(_OWORD **)&v37[0] == v37) )
    {
      v18 = *(_QWORD *)&v38[0];
      if ( *(_OWORD **)&v38[0] == v38 )
      {
        if ( v12 )
        {
          if ( (a5 & 2) != 0 )
          {
            v8 = v30;
            v15 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v38, a3, &v40, v12) == 0;
            goto LABEL_54;
          }
          v15 = PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v38, a3, &v40, v12) == 0;
        }
LABEL_53:
        v8 = v30;
        goto LABEL_54;
      }
      v17 = *(_DWORD *)(*(_QWORD *)&v38[0] + 16LL);
    }
    else
    {
      if ( **(_OWORD ***)&v37[0] != v37 )
      {
        vXSortAETEdges(v37);
        v16 = *(_OWORD **)&v37[0];
      }
      v18 = *(_QWORD *)&v38[0];
    }
    v19 = v17;
    v31 = v17;
    if ( *(_DWORD *)(v18 + 16) == v17 )
    {
      vMoveNewEdges(v38, v37, v17);
      v16 = *(_OWORD **)&v37[0];
      v19 = v17;
    }
    while ( 1 )
    {
      v20 = *((_DWORD *)v16 + 3);
      v21 = v11;
      if ( (a5 & 2) != 0 )
      {
        v22 = *((_DWORD *)v16 + 10);
        do
        {
          v16 = *(_OWORD **)v16;
          v22 += *((_DWORD *)v16 + 10);
        }
        while ( v22 );
      }
      else
      {
        v16 = *(_OWORD **)v16;
      }
      v23 = *((_DWORD *)v16 + 3);
      if ( v20 >= v23 )
      {
        v17 = v19 + 1;
      }
      else
      {
        v36 = v11;
        if ( a4 )
        {
          v24 = v34;
          if ( v20 >= v34 )
            v24 = v20;
          v25 = DWORD2(v35);
          v11->left = v24;
          if ( v23 <= SDWORD2(v35) )
            v25 = v23;
          v26 = v11 + 1;
          if ( v24 >= v25 )
            v26 = v11;
          v11 = v26;
          v27 = v12 + 1;
          if ( v24 >= v25 )
            v27 = v12;
          v12 = v27;
        }
        else
        {
          v11->left = v20;
          ++v12;
          v25 = v23;
          ++v11;
        }
        v17 = v19 + 1;
        v21->right = v25;
        v36->top = v19;
        v21->bottom = v19 + 1;
        if ( v12 == 20 )
        {
          if ( (a5 & 2) != 0 )
            v28 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)4, a3, &v40, 20LL);
          else
            v28 = PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)4, a3, &v40, 20LL);
          if ( !v28 )
          {
            v15 = 1;
            goto LABEL_53;
          }
          v19 = v31;
          v11 = &v40;
          v12 = 0;
        }
      }
      v16 = *(_OWORD **)v16;
      if ( v16 == v37 )
      {
        v15 = 0;
        v16 = *(_OWORD **)&v37[0];
        goto LABEL_13;
      }
    }
  }
  v15 = 1;
LABEL_54:
  if ( v32 )
    Win32FreePool(v8);
  LOBYTE(v9) = !v15;
  return v9;
}
