/*
 * XREFs of ??$GetPropertyValue@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector3@@I@Z @ 0x1C00623BC
 * Callers:
 *     ??$UpdateProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector4@@@Z @ 0x1C000BA30 (--$UpdateProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C000BD14 (--$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C000CA38 (--$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0062280 (--$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1C00A9A98 (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUProperty.c)
 *     ??$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00A9B38 (--$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectC.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C00A9C48 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySe.c)
 *     ??$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00A9CE4 (--$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposi.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C00A9DD0 (--$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00A9E70 (--$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C00A9F7C (--$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValu.c)
 *     ??$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00AA02C (--$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposit.c)
 *     ??$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C00B9558 (--$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00CC23C (--$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NP.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C0263CE8 (--$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C0263D80 (--$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 * Callees:
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x1C0062410 (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?GetCount@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEBAIXZ @ 0x1C0263E18 (-GetCount@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
        __int64 a1,
        __int64 a2)
{
  unsigned int Count; // eax
  unsigned int v3; // edx

  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 8) )
  {
    Count = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::GetCount();
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v3, Count);
  }
  return *(_QWORD *)(a1 + 16)
       + (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                         a1,
                         a2);
}
