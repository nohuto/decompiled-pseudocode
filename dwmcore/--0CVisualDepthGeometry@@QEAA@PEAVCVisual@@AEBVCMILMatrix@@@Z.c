/*
 * XREFs of ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180008B48
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180008928 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x180256960 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180009BC0 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CVisualDepthGeometry *__fastcall CVisualDepthGeometry::CVisualDepthGeometry(
        CVisualDepthGeometry *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  int v5; // xmm1_4
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  *(_QWORD *)this = a2;
  `vector constructor iterator'((char *)this + 84, 0x10uLL, 4uLL, (void *(*)(void *))CMilPoint2F::CMilPoint2F);
  v5 = *(_DWORD *)(*(_QWORD *)this + 144LL);
  v7 = *(_DWORD *)(*(_QWORD *)this + 140LL);
  v8 = v5;
  CVisualDepthGeometry::Init(this, (const struct Windows::Foundation::Numerics::float2 *)&v7, a3);
  return this;
}
