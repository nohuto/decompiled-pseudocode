/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180284D7C
 * Callers:
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180285070 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180284AA4 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 */

void __fastcall std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Free_non_head<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  __int64 *v3; // rbx
  _QWORD *v4; // rsi

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (__int64 *)v2[2];
      v4 = (_QWORD *)*v2;
      if ( v3 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3 + 3);
        if ( *v3 )
        {
          std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(*v3, v3[1]);
          std::_Deallocate<16,0>((void *)*v3, 16 * ((v3[2] - *v3) >> 4));
          *v3 = 0LL;
          v3[1] = 0LL;
          v3[2] = 0LL;
        }
        operator delete(v3);
      }
      std::_Deallocate<16,0>(v2, 0x18uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
