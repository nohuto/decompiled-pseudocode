/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18004705C
 * Callers:
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18004591C (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180046470 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D6F70 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180047564 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800475C8 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18004772C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180047CF8 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  FastRegion::Internal::CStripe *v4; // rbp
  __int64 v5; // r10
  int *v6; // r14
  const struct FastRegion::Internal::CStripe *v7; // r13
  char *v8; // rsi
  const struct FastRegion::Internal::CStripe *v9; // r15
  FastRegion::Internal::CStripe *v10; // rbx
  const struct FastRegion::Internal::CStripe *v11; // r11
  int v12; // eax
  int v13; // ecx
  __int64 v14; // r8
  const struct FastRegion::Internal::CStripe *v15; // rsi
  char *v16; // r8
  __int64 v17; // rax
  char *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  const struct FastRegion::Internal::CStripe *v23; // r14
  const struct FastRegion::Internal::CStripe *v24; // r8
  const struct FastRegion::Internal::CStripe *v25; // rdx
  FastRegion::Internal::CStripe *v26; // rcx
  FastRegion::Internal::CStripe *v27; // rcx
  int v28; // eax
  const struct FastRegion::Internal::CStripe *v29; // r15
  const struct FastRegion::Internal::CStripe *v30; // r13
  int v31; // ecx
  const struct FastRegion::Internal::CStripe *v32; // rax
  int v33; // r8d
  const struct FastRegion::Internal::CStripe *v34; // rdx
  const struct FastRegion::Internal::CStripe *v35; // r8
  const struct FastRegion::Internal::CStripe *v36; // rdx
  bool IsEqualToPrevious; // al
  int v38; // eax
  int v39; // eax
  int v40; // eax
  const struct FastRegion::Internal::CStripe *v41; // r8
  int v42; // ecx
  int v43; // ecx
  FastRegion::Internal::CStripe *v44; // r11
  int v45; // ecx
  int v46; // eax
  const struct FastRegion::Internal::CStripe *v47; // rdx
  int v48; // ecx
  int v49; // ecx
  FastRegion::Internal::CStripe *v50; // r11
  const struct FastRegion::Internal::CStripe *v51; // [rsp+20h] [rbp-58h]
  const struct FastRegion::Internal::CStripe *v52; // [rsp+28h] [rbp-50h]

  v3 = *(int *)a3;
  v4 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v5 = *(int *)a2;
  v6 = (int *)((char *)a3 + 12);
  v7 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v8 = (char *)a2 + 12;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v10 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v52 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v3 + 12);
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v5 + 12);
  v51 = v11;
  *((_DWORD *)this + 4) = 8 * (v3 + v5);
  v12 = *((_DWORD *)a2 + 3);
  v13 = *((_DWORD *)a3 + 3);
  if ( v12 < v13 )
  {
    v14 = *((int *)v4 + 1);
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    *(_DWORD *)v4 = v12;
    v16 = (char *)v10 + v14;
    v17 = *((int *)a2 + 4);
    v18 = (char *)a2 + v17 + 12;
    v19 = (*((int *)a2 + 6) - (v17 - 8)) >> 2;
    if ( (int)v19 > 0 )
    {
      v20 = 0LL;
      do
      {
        *(_DWORD *)&v16[4 * v20] = *(_DWORD *)&v18[4 * v20];
        ++v20;
      }
      while ( v20 < (int)v19 );
    }
    *((_DWORD *)v4 + 3) = (_DWORD)v16 + 4 * v19 - ((_DWORD)v4 + 8);
    v21 = *(_DWORD *)v15;
    if ( (_DWORD)v4 + 8 + *((_DWORD *)v4 + 3) - (_DWORD)v10 - *((_DWORD *)v4 + 1) )
      v10 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    v22 = *v6;
    if ( v21 < *v6 )
    {
      while ( 1 )
      {
        v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
        v7 = (const struct FastRegion::Internal::CStripe *)((char *)v7 + 8);
        if ( v15 == v11 )
          break;
        FastRegion::Internal::CStripe::Copy(v10, v7);
        if ( v10 == v4 )
        {
          if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
            v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        {
          v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        v21 = *(_DWORD *)v15;
        v22 = *v6;
        v11 = v51;
        if ( *(_DWORD *)v15 >= *v6 )
          goto LABEL_13;
      }
      v42 = *((_DWORD *)v10 + 1) - ((_DWORD)v10 + 8);
      *(_DWORD *)v10 = *(_DWORD *)v7;
      v43 = (_DWORD)v10 + v42;
      *((_DWORD *)v10 + 3) = v43;
      if ( v10 == v4 )
      {
        if ( v43 - *((_DWORD *)v10 + 1) != -8 )
          v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
      {
        v10 = v44;
      }
      v23 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
      v25 = v9;
      v26 = v10;
LABEL_59:
      FastRegion::Internal::CStripe::Copy(v26, v25);
LABEL_60:
      if ( v10 == v4 )
      {
        if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
          v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
      {
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
      }
      while ( 1 )
      {
        v23 = (const struct FastRegion::Internal::CStripe *)((char *)v23 + 8);
        if ( v23 == v52 )
          break;
        FastRegion::Internal::CStripe::Copy(v10, (const struct FastRegion::Internal::CStripe *)((char *)v23 - 8));
        if ( v10 == v4 )
        {
          if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
            v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        {
          v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
      }
      v38 = *((_DWORD *)v23 - 2);
      goto LABEL_39;
    }
LABEL_13:
    v23 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
    v24 = v15;
    v25 = v9;
    if ( v21 <= v22 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v26 = v10;
      if ( v15 == v11 )
        goto LABEL_59;
      goto LABEL_16;
    }
    v24 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    goto LABEL_15;
  }
  v23 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
  if ( v12 > v13 )
  {
    FastRegion::Internal::CStripe::Copy(v10, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    if ( v10 == v4 )
    {
      if ( (_DWORD)v4 + 8 + *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) - (_DWORD)v10 )
        v10 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    v45 = *(_DWORD *)v7;
    v46 = *(_DWORD *)v23;
    if ( *(_DWORD *)v7 >= *(_DWORD *)v23 )
    {
      while ( 1 )
      {
        v47 = v23;
        v24 = v23;
        v23 = (const struct FastRegion::Internal::CStripe *)((char *)v23 + 8);
        if ( v45 <= v46 )
          break;
        if ( v23 == v52 )
        {
          v48 = *((_DWORD *)v10 + 1) - ((_DWORD)v10 + 8);
          *(_DWORD *)v10 = v46;
          v49 = (_DWORD)v10 + v48;
          *((_DWORD *)v10 + 3) = v49;
          if ( v10 == v4 )
          {
            if ( v49 - *((_DWORD *)v10 + 1) != -8 )
              v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
          {
            v10 = v50;
          }
          v15 = (const struct FastRegion::Internal::CStripe *)(v8 + 8);
          v25 = v7;
          v26 = v10;
          goto LABEL_79;
        }
        FastRegion::Internal::CStripe::Copy(v10, v47);
        if ( v10 == v4 )
        {
          if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
            v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        {
          v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        v45 = *(_DWORD *)v7;
        v46 = *(_DWORD *)v23;
        if ( *(_DWORD *)v7 < *(_DWORD *)v23 )
          goto LABEL_69;
      }
      v15 = (const struct FastRegion::Internal::CStripe *)(v8 + 8);
      v25 = v7;
      v26 = v10;
      if ( v23 == v52 )
      {
LABEL_79:
        FastRegion::Internal::CStripe::Copy(v26, v25);
        if ( v10 == v4 )
        {
          v30 = v51;
          goto LABEL_105;
        }
        IsEqualToPrevious = FastRegion::Internal::CStripe::IsEqualToPrevious(v10);
        v30 = v51;
        goto LABEL_35;
      }
      goto LABEL_16;
    }
LABEL_69:
    v15 = (const struct FastRegion::Internal::CStripe *)(v8 + 8);
    v24 = (const struct FastRegion::Internal::CStripe *)((char *)v23 - 8);
    v25 = v7;
LABEL_15:
    v26 = v10;
LABEL_16:
    FastRegion::Internal::CStripe::Union(v26, v25, v24);
    if ( v10 != v4 )
      goto LABEL_17;
    v27 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    v28 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1);
LABEL_22:
    if ( (_DWORD)v27 + v28 - (_DWORD)v10 )
      v10 = v27;
    goto LABEL_24;
  }
  v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  FastRegion::Internal::CStripe::Union(
    v10,
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
  if ( v10 == v4 )
  {
    v27 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    v28 = *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1);
    goto LABEL_22;
  }
LABEL_17:
  if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
LABEL_24:
  v29 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
  v30 = v51;
  while ( 1 )
  {
    v31 = *(_DWORD *)v15;
    v32 = v15;
    v33 = *(_DWORD *)v23;
    v34 = v23;
    if ( *(_DWORD *)v15 < *(_DWORD *)v23 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v34 = (const struct FastRegion::Internal::CStripe *)((char *)v23 - 8);
      v29 = (const struct FastRegion::Internal::CStripe *)((char *)v29 + 8);
      if ( v15 == v51 )
        goto LABEL_72;
LABEL_49:
      v41 = v34;
      v34 = v32;
      goto LABEL_50;
    }
    v23 = (const struct FastRegion::Internal::CStripe *)((char *)v23 + 8);
    if ( v31 <= v33 )
      break;
    if ( v23 == v52 )
    {
      v35 = v34;
      v36 = v29;
      goto LABEL_32;
    }
    v41 = v29;
LABEL_50:
    FastRegion::Internal::CStripe::Union(v10, v34, v41);
    if ( v10 == v4 )
    {
      if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
  }
  v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
  v29 = (const struct FastRegion::Internal::CStripe *)((char *)v29 + 8);
  if ( v15 == v51 )
  {
    if ( v23 == v52 )
    {
      *(_DWORD *)v10 = v31;
      goto LABEL_40;
    }
LABEL_72:
    FastRegion::Internal::CStripe::Copy(v10, v34, v32);
    goto LABEL_60;
  }
  if ( v23 != v52 )
    goto LABEL_49;
  v35 = v34;
  v36 = v32;
LABEL_32:
  FastRegion::Internal::CStripe::Copy(v10, v36, v35);
  while ( 1 )
  {
    if ( v10 == v4 )
    {
LABEL_105:
      if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    else
    {
      IsEqualToPrevious = FastRegion::Internal::CStripe::IsEqualToPrevious(v10);
LABEL_35:
      if ( !IsEqualToPrevious )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v15 == v30 )
      break;
    FastRegion::Internal::CStripe::Copy(v10, (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8));
  }
  v38 = *((_DWORD *)v15 - 2);
LABEL_39:
  *(_DWORD *)v10 = v38;
LABEL_40:
  if ( v10 != v4 && (char *)v10 + *((int *)v10 + 1) != (char *)v10 + *((int *)v10 - 1) - 8 )
    v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
  *(_DWORD *)this = (v10 - this - 12) >> 3;
  v39 = *((_DWORD *)a2 + 1);
  if ( v39 >= *((_DWORD *)a3 + 1) )
    v39 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v39;
  v40 = *((_DWORD *)a2 + 2);
  if ( v40 <= *((_DWORD *)a3 + 2) )
    v40 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v40;
}
