/*
 * XREFs of ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0089044
 * Callers:
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00891B4 (-CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0077C08 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::CFlipContentToken(
        CFlipContentToken *this,
        __int64 a2,
        struct CompositionSurfaceObject *a3)
{
  CToken::CToken(this, a2, a3);
  *((_BYTE *)this + 212) &= ~1u;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  memset((char *)this + 120, 0, 0x5CuLL);
  memset((char *)this + 216, 0, 0x48uLL);
  return this;
}
