/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x18003C658
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18001D964 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18003BFFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18003C524 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18003C690 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18003C6CC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
