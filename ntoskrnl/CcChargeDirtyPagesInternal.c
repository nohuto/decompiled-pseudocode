/*
 * XREFs of CcChargeDirtyPagesInternal @ 0x1402429A0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x140242420 (CcSetDirtyPinnedData.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1403C9F50 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140533834 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 */

_QWORD *__fastcall CcChargeDirtyPagesInternal(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v7; // r14
  _QWORD *result; // rax
  _BYTE *v9; // rdi
  _BYTE *v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  if ( CcEnablePerVolumeLazyWriter )
  {
    v7 = a6 + 124;
    result = a6 + 124;
    v9 = (char *)a6 + 708;
    v10 = (char *)a6 + 1172;
    v11 = (_QWORD *)(a5 + 1056);
  }
  else
  {
    v7 = (_QWORD *)(a5 + 1056);
    v11 = (_QWORD *)(a5 + 1056);
    v9 = (_BYTE *)(a5 + 780);
    v10 = (_BYTE *)(a5 + 1292);
    result = a6 + 124;
  }
  *v11 += a4;
  if ( a6 )
    *result += a4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += a4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += a4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 32LL), a4);
    result = *(_QWORD **)(a1 + 512);
    result[30] += result[4];
    a3 = result[31];
    v12 = *(_QWORD *)(a1 + 512);
    if ( a3 <= *(_QWORD *)(v12 + 32) )
      a3 = *(_QWORD *)(v12 + 32);
    result[31] = a3;
    if ( a6 )
    {
      result[32] += a6[127];
      result[33] = a6[128];
      result[34] = a6[129];
    }
    ++result[35];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), a4);
      result = *(_QWORD **)(a1 + 248);
      if ( result[17] == -1LL )
      {
        result = *(_QWORD **)(a1 + 248);
        result[17] = MEMORY[0xFFFFF78000000320];
      }
    }
  }
  if ( *v10 && *v7 >= 0x2000uLL )
  {
    LOBYTE(a3) = 1;
    result = (_QWORD *)CcScheduleLazyWriteScan(a5, a6, a3, 0LL);
  }
  if ( *v9 )
  {
    result = (_QWORD *)CcScheduleLazyWriteScan(a5, a6, 0LL, 0LL);
    *v9 = 0;
  }
  if ( !CcEnablePerVolumeLazyWriter )
    return (_QWORD *)CcAdjustWriteBehindThreadPoolIfNeeded(a5, 0LL);
  return result;
}
