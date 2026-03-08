/*
 * XREFs of ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C018A190
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C018A9F0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ @ 0x1C018A8FC (-lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ.c)
 */

__int64 __fastcall BEZIER32::bNext(BEZIER32 *this, struct _POINTFIX *a2)
{
  BEZIER32 *v2; // r10
  HFDBASIS32 *v3; // rdi
  HFDBASIS32 *v4; // rbx
  int v5; // r13d
  __int64 result; // rax
  int v7; // edx
  int v8; // r15d
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r12d
  int v14; // r11d
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int i; // r11d
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // [rsp+50h] [rbp+8h]

  v2 = this;
  v3 = (BEZIER32 *)((char *)this + 4);
  v4 = (BEZIER32 *)((char *)this + 20);
  a2->x = *((_DWORD *)this + 9) + ((*((_DWORD *)this + 1) + 4096) >> 13);
  a2->y = *((_DWORD *)this + 10) + ((*((_DWORD *)this + 5) + 4096) >> 13);
  v5 = *(_DWORD *)this;
  if ( !*(_DWORD *)this )
    return 0LL;
  v7 = *((_DWORD *)this + 4);
  v8 = *((_DWORD *)this + 3);
  v9 = -v7;
  if ( v7 >= 0 )
    v9 = *((_DWORD *)this + 4);
  v10 = -*((_DWORD *)this + 3);
  if ( v8 >= 0 )
    v10 = *((_DWORD *)this + 3);
  if ( v10 <= v9 )
  {
    v11 = *((_DWORD *)this + 4);
    if ( v7 < 0 )
      v11 = -v7;
  }
  else
  {
    v11 = v10;
  }
  v12 = *((_DWORD *)v2 + 8);
  v33 = *((_DWORD *)v2 + 7);
  v13 = -v12;
  if ( v12 >= 0 )
    v13 = *((_DWORD *)v2 + 8);
  v14 = -*((_DWORD *)v2 + 7);
  if ( *((int *)v2 + 7) >= 0 )
    v14 = *((_DWORD *)v2 + 7);
  if ( v14 <= v13 )
  {
    v15 = *((_DWORD *)v2 + 8);
    if ( v12 < 0 )
      v15 = -*((_DWORD *)v2 + 8);
  }
  else
  {
    v15 = v14;
  }
  if ( v11 <= v15 )
  {
    if ( v14 <= v13 )
    {
      v10 = *((_DWORD *)v2 + 8);
      if ( v12 < 0 )
        v10 = -*((_DWORD *)v2 + 8);
    }
    else
    {
      v10 = v14;
    }
  }
  else if ( v10 <= v9 )
  {
    v10 = v7;
    if ( v7 < 0 )
      v10 = -v7;
  }
  if ( v10 > 523776 )
  {
    v16 = (v7 + v8) >> 3;
    *((_DWORD *)v2 + 3) = v16;
    v17 = *((_DWORD *)v2 + 2) - v16;
    *((_DWORD *)v2 + 4) = v7 >> 2;
    *((_DWORD *)v2 + 2) = v17 >> 1;
    v18 = (v12 + v33) >> 3;
    v19 = *((_DWORD *)v2 + 6) - v18;
    *((_DWORD *)v2 + 7) = v18;
    *((_DWORD *)v2 + 6) = v19 >> 1;
    *((_DWORD *)v2 + 8) = v12 >> 2;
    *(_DWORD *)v2 = 2 * v5;
  }
  for ( i = *(_DWORD *)v2; (i & 1) == 0; *(_DWORD *)v2 = i )
  {
    if ( (int)HFDBASIS32::lParentErrorDividedBy4(v3) > 130944 )
      break;
    if ( (int)HFDBASIS32::lParentErrorDividedBy4(v4) > 130944 )
      break;
    v21 = *((_DWORD *)v2 + 3);
    v22 = *((_DWORD *)v2 + 2);
    *((_DWORD *)v2 + 4) *= 4;
    *((_DWORD *)v2 + 8) *= 4;
    i >>= 1;
    v23 = v21 + 2 * v22;
    v24 = *((_DWORD *)v2 + 6);
    *((_DWORD *)v2 + 2) = v23;
    v25 = 8 * v21 - *((_DWORD *)v2 + 4);
    v26 = *((_DWORD *)v2 + 7);
    *((_DWORD *)v2 + 3) = v25;
    *((_DWORD *)v2 + 6) = v26 + 2 * v24;
    *((_DWORD *)v2 + 7) = 8 * v26 - *((_DWORD *)v2 + 8);
  }
  v27 = *((_DWORD *)v3 + 2);
  v28 = *((_DWORD *)v4 + 2);
  *(_DWORD *)v2 = i - 1;
  v29 = *((_DWORD *)v3 + 1);
  *(_DWORD *)v3 += v29;
  *((_DWORD *)v3 + 1) = v27 + v29;
  v30 = v27 + v27 - *((_DWORD *)v3 + 3);
  *((_DWORD *)v3 + 3) = v27;
  v31 = *((_DWORD *)v4 + 1);
  *(_DWORD *)v4 += v31;
  *((_DWORD *)v4 + 1) = v28 + v31;
  v32 = v28 - *((_DWORD *)v4 + 3);
  *((_DWORD *)v3 + 2) = v30;
  *((_DWORD *)v4 + 2) = v28 + v32;
  result = 1LL;
  *((_DWORD *)v4 + 3) = v28;
  return result;
}
