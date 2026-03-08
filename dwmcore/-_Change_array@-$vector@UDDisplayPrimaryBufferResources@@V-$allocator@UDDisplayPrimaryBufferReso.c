/*
 * XREFs of ?_Change_array@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEAAXQEAUDDisplayPrimaryBufferResources@@_K1@Z @ 0x1802950D4
 * Callers:
 *     ??$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@QEAAPEAUDDisplayPrimaryBufferResources@@QEAU2@$$QEAU2@@Z @ 0x18028DF20 (--$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@-$vector@UDDisplayPrimaryBufferResource.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180284A6C (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 */

void __fastcall std::vector<DDisplayPrimaryBufferResources>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DDisplayPrimaryBufferResources *v6; // rcx

  v6 = *(DDisplayPrimaryBufferResources **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
      v6,
      *(DDisplayPrimaryBufferResources **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
