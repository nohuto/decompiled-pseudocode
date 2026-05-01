/*
 * XREFs of ?ShouldHandleActivation@SurfaceHubPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002B280 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::ShouldHandleActivation(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  PositionerPropertySetHelpers *v5; // rcx
  int DetailsForActivation; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct PositionerPropertySetHelpers::ViewSizePreferences *v10; // [rsp+20h] [rbp-8h]
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v13; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v14) < 0 )
    goto LABEL_9;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v5,
                           (struct IApplicationView *)a3,
                           &v13,
                           0LL,
                           v10);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF8,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v11);
  if ( ((__int64)v13.lpVtbl & 0x10) != 0 )
LABEL_9:
    v7 = 0;
  else
    v7 = *((unsigned __int8 *)this + 464);
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
