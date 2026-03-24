/*
 * XREFs of ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1801944E8
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180075C80 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800B8888 (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ??0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z @ 0x1801944A0 (--0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Add(
        __int64 a1,
        const struct MilRectF *a2,
        int a3,
        const struct CMILMatrix *a4)
{
  CZOrderedRect *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _BYTE v10[40]; // [rsp+30h] [rbp-38h] BYREF

  v5 = CZOrderedRect::CZOrderedRect((CZOrderedRect *)v10, a2, a3, a4);
  v6 = DynArray<CZOrderedRect,0>::AddMultipleAndSet(a1, (__int64)v5);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x25u, 0LL);
  return v8;
}
