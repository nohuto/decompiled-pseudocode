/*
 * XREFs of ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0077C08
 * Callers:
 *     ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0077EC8 (-CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0078650 (--0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ?Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z @ 0x1C0088ED0 (-Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z.c)
 *     ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0089044 (--0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     <none>
 */

CToken *__fastcall CToken::CToken(CToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  *((_QWORD *)this + 3) = 6LL;
  *(_QWORD *)this = &CToken::`vftable';
  *((_QWORD *)this + 5) = a2;
  *((_WORD *)this + 24) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *((_QWORD *)this + 4) = a3;
  ObReferenceObjectByPointer(a3, 3u, g_pDxgkCompositionObjectType, 0);
  return this;
}
