/*
 * XREFs of ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x1405C1980
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C16E8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPickPriority(
        __int64 a1,
        unsigned __int16 **a2,
        unsigned int a3,
        void *a4)
{
  __int64 v4; // rbx
  unsigned __int16 **v8; // r11
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r10
  unsigned __int16 *v14; // rdx
  int v15; // r9d
  _DWORD *v16; // rdx
  unsigned int v17; // r8d
  int i; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  _QWORD v23[40]; // [rsp+20h] [rbp-168h] BYREF

  v4 = a3;
  memset(v23, 0, sizeof(v23));
  v8 = &a2[v4];
  if ( a2 < v8 )
  {
    v9 = (unsigned __int8)*(_DWORD *)(a1 + 776);
    do
    {
      if ( v9 )
        v10 = 0LL;
      else
        v10 = **a2 >> 13;
      v11 = (unsigned int)v10;
      v12 = 5 * v10;
      v13 = LODWORD(v23[v12]);
      if ( (unsigned int)v13 < 4 )
      {
        v14 = *a2;
        LODWORD(v23[v12]) = v13 + 1;
        HIDWORD(v23[v12]) += *v14 & 0x1FFF;
        v23[5 * v11 + 1 + v13] = v14;
      }
      ++a2;
    }
    while ( a2 < v8 );
  }
  v15 = -1;
  v16 = (_DWORD *)&v23[35] + 1;
  v17 = 0;
  for ( i = 7; i >= 0; --i )
  {
    v19 = *(v16 - 1);
    if ( v19 > 1 )
    {
      v20 = *(_DWORD *)(a1 + 816) * v19 - *v16;
      if ( v17 < v20 )
      {
        v17 = v20;
        v15 = i;
      }
    }
    v16 -= 10;
  }
  v21 = v23[5 * v15];
  if ( v21 > 4 )
    v21 = 4;
  memmove(a4, &v23[5 * v15 + 1], 8LL * v21);
  return v21;
}
