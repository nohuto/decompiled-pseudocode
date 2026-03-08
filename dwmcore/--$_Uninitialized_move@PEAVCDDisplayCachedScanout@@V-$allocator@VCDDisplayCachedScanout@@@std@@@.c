/*
 * XREFs of ??$_Uninitialized_move@PEAVCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@QEAV1@0PEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180284F60
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180284E34 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDD.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180284B38 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 */

__int64 *__fastcall std::_Uninitialized_move<CDDisplayCachedScanout *>(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r8
  char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  if ( a1 != a2 )
  {
    v5 = a1 + 8;
    v6 = (char *)a3 - a1;
    do
    {
      v7 = *(_QWORD *)v5;
      v8 = *(_QWORD *)(v5 + 8);
      v9 = *(_QWORD *)(v5 - 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)(v5 - 8) = 0LL;
      *(_QWORD *)&v6[v5] = v7;
      *a3 = v9;
      a3 += 5;
      *(_QWORD *)&v6[v5 + 8] = v8;
      v10 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)&v6[v5 + 16] = v10;
      *(_DWORD *)&v6[v5 + 24] = *(_DWORD *)(v5 + 24);
      v5 += 40LL;
    }
    while ( v5 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(a3, a3);
  return a3;
}
