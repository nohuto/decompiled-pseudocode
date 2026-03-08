/*
 * XREFs of ?GetDesktopTree@CRemoteRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x1801C1330
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRemoteRenderTarget::GetDesktopTree(CRemoteRenderTarget *this, struct CDesktopTree **a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v2 = *((_QWORD *)this + 6);
  v3 = 0;
  if ( v2 )
  {
    *a2 = (struct CDesktopTree *)v2;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 8));
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0x76u, 0LL);
  }
  return v3;
}
