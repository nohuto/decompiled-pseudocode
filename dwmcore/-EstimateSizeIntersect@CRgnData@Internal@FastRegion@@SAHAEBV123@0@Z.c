/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180047DCC
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800462A8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeIntersect(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // r10
  _DWORD *v6; // r11
  _DWORD *v7; // rbp
  unsigned int v8; // r8d
  int v9; // eax
  char *v10; // rbx
  bool v11; // cc
  char *v12; // rdx
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // r9
  int v16; // ecx
  int v17; // r11d
  int v18; // r10d
  _DWORD *v19; // rcx
  _DWORD *v20; // rsi
  char *v21; // rdi
  int v23; // r11d
  _DWORD *v24; // rdi
  int v25; // ecx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = v3;
  v7 = &v3[2 * v2];
  v8 = 8 * (v4 + v2) + 12;
  v9 = *v3;
  v10 = (char *)a2 + 8 * v4 + 12;
  v11 = *v3 <= *((_DWORD *)a2 + 3);
  if ( *v3 < *((_DWORD *)a2 + 3) )
  {
    v15 = v3 + 2;
    while ( *v15 < *(_DWORD *)v5 )
    {
      v15 += 2;
      if ( v15 == v7 )
        return v8;
    }
    v23 = (_DWORD)a2 + 20;
    v24 = v15;
    v12 = (char *)a2 + 20;
    if ( *v15 <= *(_DWORD *)v5 )
    {
      v15 += 2;
      if ( v15 == v7 )
        return v8;
      v25 = v15[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - v24[1] - (_DWORD)v24;
    }
    else
    {
      v25 = v15[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - *(v15 - 1) - ((_DWORD)v15 - 8);
    }
    v16 = v23 + (_DWORD)v15 + v25 - (_DWORD)v5;
    goto LABEL_5;
  }
  v12 = (char *)a2 + 20;
  if ( v11 )
  {
    v15 = v3 + 2;
LABEL_15:
    v16 = (_DWORD)v12
        + (_DWORD)v15
        + v15[1]
        + *((_DWORD *)v12 + 1)
        - *((_DWORD *)v5 + 1)
        - v6[1]
        - (_DWORD)v6
        - (_DWORD)v5;
LABEL_5:
    v17 = *(_DWORD *)v12;
    while ( 1 )
    {
      v18 = *v15;
      v8 += v16;
      while ( 1 )
      {
        v19 = v15;
        v20 = v15;
        v21 = v12;
        if ( v18 < v17 )
          break;
        v12 += 8;
        if ( v18 > v17 )
        {
          if ( v12 == v10 )
            return v8;
          v8 += (_DWORD)v12 + v15[1] + *((_DWORD *)v12 + 1) - *((_DWORD *)v21 + 1) - *(v15 - 1) + 8 - (_DWORD)v21;
        }
        else
        {
          v15 += 2;
          if ( v15 == v7 || v12 == v10 )
            return v8;
          v18 = *v15;
          v8 += (_DWORD)v12
              + (_DWORD)v15
              + v15[1]
              + *((_DWORD *)v12 + 1)
              - *((_DWORD *)v21 + 1)
              - v19[1]
              - (_DWORD)v19
              - (_DWORD)v21;
        }
        v17 = *(_DWORD *)v12;
      }
      v15 += 2;
      if ( v15 == v7 )
        break;
      v16 = (_DWORD)v15 + *((_DWORD *)v12 + 1) + v15[1] - *((_DWORD *)v12 - 1) - v20[1] - (_DWORD)v20 + 8;
    }
    return v8;
  }
  while ( 1 )
  {
    v13 = *(_DWORD *)v12;
    if ( v9 < *(_DWORD *)v12 )
    {
      v14 = v3[3] - *((_DWORD *)v12 - 1);
      v15 = v3 + 2;
      v16 = (_DWORD)v15 + *((_DWORD *)v12 + 1) + v14 - v6[1] - (_DWORD)v6 + 8;
      goto LABEL_5;
    }
    v5 = v12;
    v12 += 8;
    if ( v9 <= v13 )
      break;
    if ( v12 == v10 )
      return v8;
  }
  v15 = v3 + 2;
  if ( v12 != v10 )
    goto LABEL_15;
  return v8;
}
