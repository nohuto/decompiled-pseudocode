/*
 * XREFs of ?GetDesktopTree@CLegacyRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x18016E440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C07A0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetDesktopTree(CLegacyRenderTarget *this, struct CDesktopTree **a2)
{
  struct CDesktopTree *v2; // rcx
  unsigned int v3; // ebx

  v2 = (struct CDesktopTree *)*((_QWORD *)this + 5);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    CMILCOMBase::InternalAddRef(v2);
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0xA3u, 0LL);
  }
  return v3;
}
