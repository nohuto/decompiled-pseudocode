/*
 * XREFs of ?GetDesktopTree@CDDisplayRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x1801C1250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1800C6CB0 (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::GetDesktopTree(CDDisplayRenderTarget *this, struct CDesktopTree **a2)
{
  __int64 v3; // rdx
  unsigned int v4; // edi
  CResource *v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(&v6, v3);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x9Bu, 0LL);
  }
  *a2 = 0LL;
  return v4;
}
