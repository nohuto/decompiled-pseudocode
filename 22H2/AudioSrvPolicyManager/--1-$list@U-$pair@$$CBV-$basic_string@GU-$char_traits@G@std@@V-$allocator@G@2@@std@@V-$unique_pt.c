/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18002F818
 * Callers:
 *     _TSSession::Create_::_1_::dtor$11 @ 0x18003C55A (_TSSession--Create_--_1_--dtor$11.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002F68C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::~list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>(
        void **a1)
{
  std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  operator delete(*a1, (const struct std::nothrow_t *)0x38);
}
