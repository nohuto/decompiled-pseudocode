/*
 * XREFs of ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008F054
 * Callers:
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEBAPEBVCShape@@PEAW4D2D1_ANTIALIAS_MODE@@@Z @ 0x180016C0C (-GetTopCpuClipInScope@CScopedClipStack@@QEBAPEBVCShape@@PEAW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180021404 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18008D070 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18008D534 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18008E940 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800922F8 (-HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1801D7918 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasCpuClipsInScope(CScopedClipStack *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 != *(_QWORD *)this )
    return *(_QWORD *)(v1 - 176) != 0LL;
  return v2;
}
