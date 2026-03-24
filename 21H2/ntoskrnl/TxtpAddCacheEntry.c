/*
 * XREFs of TxtpAddCacheEntry @ 0x1409F45FC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403B1888 (BgpTxtDisplayCharacter.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall TxtpAddCacheEntry(__int64 *a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int64 Memory; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned int v12; // esi
  __int64 v13; // rcx
  int v14; // ecx
  __int64 **v16; // rdi
  __int64 **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9

  Memory = BgpFwAllocateMemory(0x38uLL);
  v12 = 0;
  if ( !Memory )
    return (unsigned int)-1073741801;
  *(_WORD *)(Memory + 16) = a2;
  *(_OWORD *)(Memory + 24) = *(_OWORD *)a3;
  *(_QWORD *)(Memory + 40) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(Memory + 48) = a4;
  v13 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
LABEL_10:
    __fastfail(3u);
  *(_QWORD *)Memory = v13;
  *(_QWORD *)(Memory + 8) = a1;
  *(_QWORD *)(v13 + 8) = Memory;
  *a1 = Memory;
  v14 = *((_DWORD *)a1 + 4);
  if ( v14 == 125 )
  {
    v16 = (__int64 **)a1[1];
    if ( *v16 == a1 )
    {
      v17 = (__int64 **)v16[1];
      if ( *v17 == (__int64 *)v16 )
      {
        a1[1] = (__int64)v17;
        *v17 = a1;
        BgpGxRectangleDestroy((__int64)v16[6], v9, v10, v11);
        BgpFwFreeMemory((__int64)v16, v18, v19, v20);
        return v12;
      }
    }
    goto LABEL_10;
  }
  *((_DWORD *)a1 + 4) = v14 + 1;
  return v12;
}
