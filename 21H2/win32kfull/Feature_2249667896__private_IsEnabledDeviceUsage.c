/*
 * XREFs of Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiGetBitmapBits @ 0x1C0018310 (NtGdiGetBitmapBits.c)
 *     NtGdiSetBitmapBits @ 0x1C0018780 (NtGdiSetBitmapBits.c)
 *     NtGdiGetDIBitsInternal @ 0x1C007FE00 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00A9FA0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C00ABAE0 (NtGdiCreateDIBSection.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00ACA90 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00ADDC0 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiCreateBitmap @ 0x1C0105CF0 (NtGdiCreateBitmap.c)
 *     NtGdiEngCreatePalette @ 0x1C0129060 (NtGdiEngCreatePalette.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C013A350 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C015D510 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C015E8A0 (NtGdiEngDeleteSurface.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0160FC8 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     NtGdiDrawEscape @ 0x1C02AE450 (NtGdiDrawEscape.c)
 *     NtGdiPolyDraw @ 0x1C02AFB40 (NtGdiPolyDraw.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C02B1E54 (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 *     NtGdiCheckBitmapBits @ 0x1C02B69D0 (NtGdiCheckBitmapBits.c)
 *     NtGdiCreateColorTransform @ 0x1C02B6E20 (NtGdiCreateColorTransform.c)
 * Callees:
 *     Feature_2249667896__private_IsEnabledFallback @ 0x1C016B234 (Feature_2249667896__private_IsEnabledFallback.c)
 */

__int64 Feature_2249667896__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2249667896__private_featureState & 0x10) != 0 )
    return Feature_2249667896__private_featureState & 1;
  else
    return Feature_2249667896__private_IsEnabledFallback((unsigned int)Feature_2249667896__private_featureState, 3LL);
}
