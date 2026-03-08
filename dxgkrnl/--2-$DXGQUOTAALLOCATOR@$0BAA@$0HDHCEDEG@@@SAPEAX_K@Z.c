/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C008513C
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C00851B4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C00875F4 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 DXGQUOTAALLOCATOR<256,1936868166>::operator new()
{
  return ExAllocatePool2(257LL, 72LL, 1936868166LL);
}
