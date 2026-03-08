/*
 * XREFs of ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B2900
 * Callers:
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B2884 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_DEVICE::DecrementCurrentUsage(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v2; // rbp
  __int64 v3; // r8
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx

  v2 = **a2;
  v3 = (*(_DWORD *)(v2 + 68) >> 17) & 0xF;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (*(_DWORD *)(v2 + 68) & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (_DWORD)v3 == 2 )
    v3 = 0LL;
  v5 = *(_QWORD *)(v2 + 16);
  v6 = *(_QWORD *)(v4 + 8 * v3 + 72);
  v7 = (unsigned int)v3;
  if ( v5 > v6 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 68LL, v4, v6, v5);
  }
  *(_QWORD *)(v4 + 8 * v7 + 72) -= v5;
  v8 = *(_QWORD *)(v2 + 16);
  v9 = (*(_DWORD *)(v2 + 68) >> 13) & 0xF;
  v10 = *(_QWORD *)(v4 + 8 * v9 + 136);
  if ( v8 > v10 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 68LL, v4, v10, v8);
  }
  *(_QWORD *)(v4 + 8 * v9 + 136) -= v8;
}
