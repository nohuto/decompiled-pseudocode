/*
 * XREFs of ?_Change_array@?$vector@PEAVCCachedWindowBackgroundTreatment@@V?$allocator@PEAVCCachedWindowBackgroundTreatment@@@std@@@std@@AEAAXQEAPEAVCCachedWindowBackgroundTreatment@@_K1@Z @ 0x18001CE1C
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVCCachedWindowBackgroundTreatment@@@?$vector@PEAVCCachedWindowBackgroundTreatment@@V?$allocator@PEAVCCachedWindowBackgroundTreatment@@@std@@@std@@QEAAPEAPEAVCCachedWindowBackgroundTreatment@@QEAPEAV2@AEBQEAV2@@Z @ 0x18001CD30 (--$_Emplace_reallocate@AEBQEAVCCachedWindowBackgroundTreatment@@@-$vector@PEAVCCachedWindowBackg.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CCachedWindowBackgroundTreatment *>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
