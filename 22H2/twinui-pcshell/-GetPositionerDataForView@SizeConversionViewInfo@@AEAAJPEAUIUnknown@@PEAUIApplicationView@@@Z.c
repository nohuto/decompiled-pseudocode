/*
 * XREFs of ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x18044184C
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x180441A50 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180441B0C (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$PerformCallbackOnView@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@ShellPositionerHelpers@@YAJPEAUIUnknown@@PEAUIApplicationView@@$$QEAV_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Z @ 0x18043FC24 (--$PerformCallbackOnView@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@ShellPositionerHelpers@@YA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SizeConversionViewInfo::GetPositionerDataForView(
        SizeConversionViewInfo *this,
        IUnknown *punk,
        struct IApplicationView *a3)
{
  int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  *(_QWORD *)v8 = this;
  v9[0] = (__int64)a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  v6 = ShellPositionerHelpers::PerformCallbackOnView<_lambda_b596592e3ff57c102c32409cde6b4c14_>(
         punk,
         (__int64)a3,
         (__int64)v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v6;
}
