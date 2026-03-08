/*
 * XREFs of ?_Change_array@?$vector@PEAV?$CWeakReference@VCResource@@@@V?$allocator@PEAV?$CWeakReference@VCResource@@@@@std@@@std@@AEAAXQEAPEAV?$CWeakReference@VCResource@@@@_K1@Z @ 0x1801E09E8
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAV?$CWeakReference@VCResource@@@@@?$vector@PEAV?$CWeakReference@VCResource@@@@V?$allocator@PEAV?$CWeakReference@VCResource@@@@@std@@@std@@QEAAPEAPEAV?$CWeakReference@VCResource@@@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801DF06C (--$_Emplace_reallocate@AEBQEAV-$CWeakReference@VCResource@@@@@-$vector@PEAV-$CWeakReference@VCRe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CWeakReference<CResource> *,std::allocator<CWeakReference<CResource> *>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
