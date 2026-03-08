/*
 * XREFs of ?InFrame@CDisableScanoutToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0088F80
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00793E8 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 */

__int64 __fastcall CDisableScanoutToken::InFrame(CDisableScanoutToken *this, struct CCompositionFrame *a2, bool *a3)
{
  *((_DWORD *)this + 6) = 3;
  return CompositionSurfaceObject::NotifyTokenInFrame(*((CompositionSurfaceObject **)this + 4), this, a3);
}
