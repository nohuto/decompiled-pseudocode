/*
 * XREFs of ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180440C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x18044151C (-GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::ConvertForDpiAndChromeConfiguration(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagSIZE *a7)
{
  int MonitorForDpi; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IImmersiveMonitor *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  MonitorForDpi = WindowSizeConverter::GetMonitorForDpi((WindowSizeConverter *)((char *)this - 88), a3, &v16);
  v12 = MonitorForDpi;
  if ( MonitorForDpi >= 0 )
  {
    MonitorForDpi = (*(__int64 (__fastcall **)(WindowSizeConverter *, struct tagSIZE, struct IImmersiveMonitor *, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, struct tagSIZE *))(*(_QWORD *)this + 48LL))(
                      this,
                      a2,
                      v16,
                      a4,
                      a5,
                      a6,
                      a7);
    v12 = MonitorForDpi;
    if ( MonitorForDpi >= 0 )
    {
      v12 = 0;
      goto LABEL_7;
    }
    v13 = 331LL;
  }
  else
  {
    v13 = 330LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)MonitorForDpi);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v12;
}
