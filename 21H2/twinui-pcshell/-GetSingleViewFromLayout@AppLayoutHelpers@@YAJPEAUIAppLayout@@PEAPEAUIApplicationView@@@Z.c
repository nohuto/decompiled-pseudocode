/*
 * XREFs of ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x1804951CC
 * Callers:
 *     ?GetAppId@CDragVisual@@UEAAJPEAPEAG@Z @ 0x180494F00 (-GetAppId@CDragVisual@@UEAAJPEAPEAG@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180495B00 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180496CF8 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180498A18 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppLayoutHelpers::GetSingleViewFromLayout(
        AppLayoutHelpers *this,
        struct IAppLayout *a2,
        struct IApplicationView **a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  v5 = -2147467259;
  if ( (*(unsigned int (__fastcall **)(AppLayoutHelpers *, struct IAppLayout *, struct IApplicationView **))(*(_QWORD *)this + 72LL))(
         this,
         a2,
         a3) == 1 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    v5 = (*(__int64 (__fastcall **)(AppLayoutHelpers *, _QWORD, GUID *, __int64 *))(*(_QWORD *)this + 96LL))(
           this,
           0LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v7);
    if ( v5 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) == 1 )
      v5 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IAppLayout *))(*(_QWORD *)v7 + 48LL))(
             v7,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return (unsigned int)v5;
}
