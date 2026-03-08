/*
 * XREFs of ?_Change_array@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@AEAAXQEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@2@_K1@Z @ 0x18023C3F4
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x18023B76C (--$_Emplace_reallocate@AEAPEAV-$CWeakReference@VCResource@@@@AEAI@-$vector@U-$pair@PEAV-$CWeakRe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
