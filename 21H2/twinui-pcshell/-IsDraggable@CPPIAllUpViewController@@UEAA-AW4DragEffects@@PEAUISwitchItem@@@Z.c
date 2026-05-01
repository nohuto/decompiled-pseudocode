/*
 * XREFs of ?IsDraggable@CPPIAllUpViewController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x18040D990
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18040BDE8 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CPPIAllUpViewController::IsDraggable(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  unsigned int v2; // edi
  char v4; // si
  int v5; // eax
  __int64 (__fastcall ****v6)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  struct IApplicationView *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v10 = 0LL;
  v4 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = (**a2)(a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v10);
  if ( v5 >= 0 )
  {
    v6 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(
                                                                                   v10,
                                                                                   &v11);
    v4 = 1;
    if ( TabletModePositionerHelpers::IsOperableView(*v6, v7) )
      v2 = 2;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewcontroller.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v2;
}
