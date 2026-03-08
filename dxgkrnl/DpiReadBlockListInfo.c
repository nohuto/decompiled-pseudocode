/*
 * XREFs of DpiReadBlockListInfo @ 0x1C039554C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall DpiReadBlockListInfo(__int64 a1, unsigned int *a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  const void *v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8

  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 2 )
  {
    if ( a4 )
    {
      if ( !*(_BYTE *)(v4 + 5724) )
        goto LABEL_6;
    }
    else if ( !*(_BYTE *)(v4 + 5740) )
    {
LABEL_6:
      v6 = *a2;
      v7 = -1;
      v8 = *a2 + 4;
      if ( v8 >= v6 )
        v7 = v8;
      if ( a3 >= v7 && v8 >= v6 )
      {
        if ( a4 )
        {
          v9 = *(_DWORD *)(v4 + 5720);
          v10 = *(const void **)(v4 + 5712);
        }
        else
        {
          v9 = *(_DWORD *)(v4 + 5736);
          v10 = *(const void **)(v4 + 5728);
        }
        if ( v6 )
        {
          if ( v9 > v6 )
          {
            v12 = a3;
            v13 = -1073741811LL;
LABEL_22:
            WdLogSingleEntry2(3LL, v12, v13);
            v11 = -1073741789;
            goto LABEL_23;
          }
          if ( v9 )
            memmove(a2 + 1, v10, v9);
        }
        *a2 = v9;
        return 0LL;
      }
      v12 = a3;
      v13 = -1073741789LL;
      goto LABEL_22;
    }
    v11 = -1073741637;
    WdLogSingleEntry1(3LL, -1073741637LL);
LABEL_23:
    *a2 = 0;
    return v11;
  }
  return 3221225485LL;
}
