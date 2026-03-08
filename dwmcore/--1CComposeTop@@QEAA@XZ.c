/*
 * XREFs of ??1CComposeTop@@QEAA@XZ @ 0x18001FEC0
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18001D508 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x1800AC200 (-ResetComposeTop@CWindowNode@@AEAAXXZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18020C844 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800DF1AC (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

void __fastcall CComposeTop::~CComposeTop(CComposeTop *this)
{
  if ( *((_QWORD *)this + 20) )
    std::default_delete<CShape>::operator()();
  if ( *((_QWORD *)this + 2) )
    std::default_delete<CShape>::operator()();
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)this + 8);
}
