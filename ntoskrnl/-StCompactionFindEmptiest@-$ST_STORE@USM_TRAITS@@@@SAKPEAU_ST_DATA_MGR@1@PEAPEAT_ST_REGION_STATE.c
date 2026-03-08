/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x1405C1324
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C16E8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
        __int64 a1,
        char *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 v5; // rcx
  char *v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // rdi
  unsigned __int16 *v11; // r12
  unsigned int v12; // eax
  unsigned int v13; // ecx
  _WORD **v14; // rbx
  _WORD **v15; // r9
  bool v16; // cf
  unsigned int v17; // eax
  __int16 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v5 = a3;
  v19 = 0x1FFF;
  v8 = &a2[8 * a3];
  if ( a2 > v8 )
    v5 = 0LL;
  if ( v5 )
    memset64(a2, (unsigned __int64)&v19, v5);
  v9 = 0;
  LODWORD(v10) = -1;
LABEL_6:
  while ( 1 )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (_DWORD)v10 == *(_DWORD *)(a1 + 788) )
      return v9;
    v11 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v10);
    v12 = *v11;
    if ( (v12 & 0x1FFF) != 0 && (v12 & 0x1FFF) <= a4 )
    {
      v13 = v12 >> 13;
      if ( *(_BYTE *)(a1 + 776) )
        v13 = 0;
      if ( (_DWORD)v10 != *(_DWORD *)(a1 + 16 * (v13 + 78LL)) )
      {
        v14 = (_WORD **)a2;
        if ( a2 < v8 )
        {
          while ( 1 )
          {
            v15 = v14 + 1;
            if ( (unsigned __int16)(v12 & 0x1FFF) < (unsigned __int16)(**v14 & 0x1FFF) )
              break;
            ++v14;
            if ( v15 >= (_WORD **)v8 )
              goto LABEL_6;
          }
          memmove(v14 + 1, v14, v8 - (char *)v14 - 8);
          v16 = v9 < v20;
          v17 = v9 + 1;
          *v14 = v11;
          if ( !v16 )
            v17 = v9;
          v9 = v17;
          if ( v17 >= v20 )
            a4 = (**((_WORD **)v8 - 1) & 0x1FFF) - 1;
        }
      }
    }
  }
}
