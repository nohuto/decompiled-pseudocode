/*
 * XREFs of ?StDmCombineTargetCompare@?$ST_STORE@USM_TRAITS@@@@SAHPEAXPEBX1@Z @ 0x14045D2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineTargetCompare(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // r9d
  bool v7; // cf
  __int64 v8; // rax
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // r9d
  int v12; // r8d
  int v13; // edx

  v3 = a2[1];
  v5 = a3[1];
  if ( v3 == v5 )
  {
    v8 = a1[1];
    v9 = *(_DWORD *)(v8 + 812);
    v10 = *a2 & *(_DWORD *)(v8 + 808);
    v11 = *a3 & *(_DWORD *)(v8 + 808);
    v12 = *a2 >> v9;
    v13 = *a3 >> v9;
    if ( v12 != v13 )
    {
      if ( v12 == *(_DWORD *)a1 )
        return 1LL;
      if ( v13 == *(_DWORD *)a1 )
        return 0xFFFFFFFFLL;
    }
    v7 = v10 < v11;
  }
  else
  {
    v7 = v5 < v3;
  }
  return v7 ? -1 : 1;
}
