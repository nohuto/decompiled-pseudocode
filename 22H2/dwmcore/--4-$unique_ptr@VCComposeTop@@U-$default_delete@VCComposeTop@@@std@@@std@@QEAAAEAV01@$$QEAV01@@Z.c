/*
 * XREFs of ??4?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801B1DD4
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B1E44 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall std::unique_ptr<CComposeTop>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = (_QWORD *)*a1;
    *a1 = v3;
    if ( v4 )
    {
      v5 = (__int64 (__fastcall ***)(_QWORD, __int64))v4[20];
      if ( v5 )
        std::default_delete<CShape>::operator()((__int64)a1, v5);
      v6 = (__int64 (__fastcall ***)(_QWORD, __int64))v4[2];
      if ( v6 )
        std::default_delete<CShape>::operator()((__int64)a1, v6);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)(v4 + 1));
      operator delete(v4);
    }
  }
  return a1;
}
