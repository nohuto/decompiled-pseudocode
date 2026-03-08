/*
 * XREFs of HalCalculateScatterGatherListSizeV3 @ 0x1403AB6C0
 * Callers:
 *     <none>
 * Callees:
 *     HalGetDmaTransferInfo @ 0x140453480 (HalGetDmaTransferInfo.c)
 */

__int64 __fastcall HalCalculateScatterGatherListSizeV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  unsigned __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 result; // rax
  unsigned __int64 v10; // r8
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+34h] [rbp-24h]

  v12 = 0LL;
  if ( !a2 )
  {
    v7 = ((a3 & 0xFFF) + (unsigned __int64)a4 + 4095) >> 12;
    v8 = 24 * v7 + 208;
    if ( v8 < 0xA8 )
      v8 = 168;
    goto LABEL_4;
  }
  v10 = a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32);
  if ( v10 >= *(unsigned int *)(a2 + 40) )
    return 3221225485LL;
  v11 = 1;
  result = HalGetDmaTransferInfo(a1, a2, v10, a4, 0, (__int64)&v11);
  if ( (int)result >= 0 )
  {
    v8 = DWORD2(v12);
    LODWORD(v7) = v12;
LABEL_4:
    if ( (unsigned int)v7 > *(_DWORD *)(a1 + 232) )
    {
      return 3221225626LL;
    }
    else
    {
      *a5 = v8;
      if ( a6 )
        *a6 = v7;
      return 0LL;
    }
  }
  return result;
}
