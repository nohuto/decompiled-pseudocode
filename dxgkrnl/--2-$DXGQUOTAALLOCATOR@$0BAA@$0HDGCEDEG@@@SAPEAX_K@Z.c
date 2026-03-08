/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C00849B8
 * Callers:
 *     ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C0084BC4 (-Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAV.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C00851B4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 DXGQUOTAALLOCATOR<256,1935819590>::operator new()
{
  return ExAllocatePool2(257LL, 40LL, 1935819590LL);
}
