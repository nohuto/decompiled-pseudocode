/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180046BB8
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046720 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x180046F28 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180047564 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18004772C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180047CF8 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  const struct FastRegion::Internal::CStripe *v4; // rsi
  __int64 v5; // r9
  FastRegion::Internal::CStripe *v6; // rbp
  const struct FastRegion::Internal::CStripe *v7; // r14
  _DWORD *v9; // rdi
  const struct FastRegion::Internal::CStripe *v10; // r11
  const struct FastRegion::Internal::CStripe *v11; // r12
  FastRegion::Internal::CStripe *v12; // rbx
  const struct FastRegion::Internal::CStripe *v13; // r13
  int v14; // eax
  const struct FastRegion::Internal::CStripe *v15; // rsi
  const struct FastRegion::Internal::CStripe *v16; // r8
  FastRegion::Internal::CStripe *v17; // rcx
  const struct FastRegion::Internal::CStripe *v18; // rdx
  const struct FastRegion::Internal::CStripe *v19; // rdi
  char *v20; // rcx
  int v21; // eax
  const struct FastRegion::Internal::CStripe *v22; // r14
  int v23; // eax
  const struct FastRegion::Internal::CStripe *v24; // rdx
  int v25; // ecx
  const struct FastRegion::Internal::CStripe *v26; // r8
  __int64 v27; // rax
  FastRegion::Internal::CStripe *v28; // rbx
  _DWORD *v29; // rax
  _DWORD *v30; // rdx
  int v31; // ecx
  char *v32; // rcx
  int v33; // eax
  const struct FastRegion::Internal::CStripe *v34; // rdx
  const struct FastRegion::Internal::CStripe *v35; // r9
  int v36; // eax
  char *v37; // rcx
  int v38; // eax

  v3 = *(int *)a2;
  v4 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v6 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v7 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v9 = (_DWORD *)((char *)a2 + 12);
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v12 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v5 + 12);
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v14 = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)a2 + 3) >= v14 )
  {
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    if ( *((_DWORD *)a2 + 3) > v14 )
    {
      while ( 1 )
      {
        v36 = *(_DWORD *)v15;
        if ( *v9 < *(_DWORD *)v15 )
        {
          v16 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
          goto LABEL_4;
        }
        v16 = v15;
        v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
        if ( *v9 <= v36 )
          break;
        if ( v15 == v13 )
        {
          v19 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
          v18 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
          v17 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
          goto LABEL_66;
        }
      }
      v19 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      v18 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
      v17 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
      if ( v15 == v13 )
      {
LABEL_66:
        FastRegion::Internal::CStripe::Copy(v17, v18);
        if ( v12 == v6 )
        {
          v37 = (char *)v6 + 8;
          v38 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
          goto LABEL_58;
        }
        goto LABEL_43;
      }
    }
    else
    {
      v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
LABEL_4:
      v17 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
      v18 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
      v19 = (const struct FastRegion::Internal::CStripe *)(v9 + 2);
    }
    FastRegion::Internal::CStripe::Subtract(v17, v18, v16, v10);
    if ( v12 == v6 )
    {
      v20 = (char *)v6 + 8;
      v21 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
      goto LABEL_7;
    }
LABEL_33:
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v12) )
      v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
    goto LABEL_9;
  }
  v19 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  FastRegion::Internal::CStripe::Copy(
    (FastRegion::Internal::CRgnData *)((char *)this + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
  if ( v12 != v6 )
    goto LABEL_37;
  v32 = (char *)v6 + 8;
  v33 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
LABEL_27:
  if ( (_DWORD)v32 + v33 - (_DWORD)v12 )
    v12 = (FastRegion::Internal::CStripe *)v32;
  while ( 1 )
  {
    v23 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 >= *(_DWORD *)v7 )
      break;
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
    v4 = (const struct FastRegion::Internal::CStripe *)((char *)v4 + 8);
    if ( v19 == v11 )
    {
      v23 = *(_DWORD *)v4;
      goto LABEL_13;
    }
    FastRegion::Internal::CStripe::Copy(v12, v4);
    if ( v12 == v6 )
    {
      v32 = (char *)v12 + 8;
      v33 = *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1);
      goto LABEL_27;
    }
LABEL_37:
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v12) )
      v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
  }
  v15 = (const struct FastRegion::Internal::CStripe *)((char *)v7 + 8);
  v34 = v19;
  if ( v23 <= *(_DWORD *)v7 )
  {
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
    if ( v19 == v11 )
      goto LABEL_13;
  }
  else
  {
    v34 = (const struct FastRegion::Internal::CStripe *)((char *)v19 - 8);
  }
  FastRegion::Internal::CStripe::Subtract(v12, v34, v7, v7);
  if ( v12 != v6 )
    goto LABEL_33;
  v20 = (char *)v12 + 8;
  v21 = *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1);
LABEL_7:
  if ( (_DWORD)v20 + v21 - (_DWORD)v12 )
    v12 = (FastRegion::Internal::CStripe *)v20;
LABEL_9:
  v22 = (const struct FastRegion::Internal::CStripe *)((char *)v19 - 8);
  while ( 1 )
  {
    v23 = *(_DWORD *)v19;
    v24 = v19;
    v25 = *(_DWORD *)v15;
    v26 = v15;
    if ( *(_DWORD *)v19 < *(_DWORD *)v15 )
    {
      v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
      v22 = (const struct FastRegion::Internal::CStripe *)((char *)v22 + 8);
      if ( v19 == v11 )
        goto LABEL_13;
      v26 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      goto LABEL_51;
    }
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v23 <= v25 )
      break;
    v24 = v22;
    if ( v15 == v13 )
      goto LABEL_40;
    v35 = v26;
LABEL_52:
    FastRegion::Internal::CStripe::Subtract(v12, v24, v26, v35);
    if ( v12 == v6 )
    {
      if ( *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1) != -8 )
        v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v12) )
    {
      v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
    }
  }
  v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
  v22 = (const struct FastRegion::Internal::CStripe *)((char *)v22 + 8);
  if ( v19 == v11 )
    goto LABEL_13;
  if ( v15 != v13 )
  {
LABEL_51:
    v35 = v24;
    goto LABEL_52;
  }
LABEL_40:
  FastRegion::Internal::CStripe::Copy(v12, v24, v26);
  while ( 1 )
  {
    if ( v12 == v6 )
    {
      v37 = (char *)v12 + 8;
      v38 = *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1);
LABEL_58:
      if ( (_DWORD)v37 + v38 - (_DWORD)v12 )
        v12 = (FastRegion::Internal::CStripe *)v37;
    }
    else
    {
LABEL_43:
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v12) )
        v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
    }
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
    if ( v19 == v11 )
      break;
    FastRegion::Internal::CStripe::Copy(v12, (const struct FastRegion::Internal::CStripe *)((char *)v19 - 8));
  }
  v23 = *((_DWORD *)v19 - 2);
LABEL_13:
  *(_DWORD *)v12 = v23;
  if ( v12 != v6 && (char *)v12 + *((int *)v12 + 1) != (char *)v12 + *((int *)v12 - 1) - 8 )
    v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
  v27 = (v12 - this - 12) >> 3;
  *(_DWORD *)this = v27;
  if ( (_DWORD)v27 )
  {
    v28 = (FastRegion::Internal::CStripe *)((char *)v12 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v29 = (_DWORD *)((char *)v28 + *((int *)v28 + 1));
    while ( 1 )
    {
      v28 = (FastRegion::Internal::CStripe *)((char *)v28 - 8);
      if ( v28 < v6 )
        break;
      v30 = v29;
      v29 = (_DWORD *)((char *)v28 + *((int *)v28 + 1));
      if ( v29 != v30 )
      {
        if ( *((_DWORD *)this + 1) > *v29 )
          *((_DWORD *)this + 1) = *v29;
        v31 = *(v30 - 1);
        if ( *((_DWORD *)this + 2) < v31 )
          *((_DWORD *)this + 2) = v31;
      }
    }
  }
}
