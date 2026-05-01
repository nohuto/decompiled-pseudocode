/*
 * XREFs of ?GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z @ 0x1804416C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180441128 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1804414BC (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::GetPhysicalChromeOffsets(
        struct IImmersiveMonitor **this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3)
{
  WindowSizeConverter *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int FrameForMonitor; // eax
  __int64 v9; // rdx
  struct IApplicationFrame *v10; // rbx
  __int64 (__fastcall *v11)(struct IApplicationFrame *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IApplicationFrame *v16; // [rsp+40h] [rbp+20h] BYREF
  __int64 v17; // [rsp+50h] [rbp+30h] BYREF

  *a3 = 0LL;
  v5 = (WindowSizeConverter *)(this - 11);
  v6 = WindowSizeConverter::EnsureEntry(this - 11, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    FrameForMonitor = WindowSizeConverter::GetFrameForMonitor(v5, a2, &v16);
    v7 = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v9 = 347LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)FrameForMonitor);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      return v7;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, __int64))(*(_QWORD *)v16 + 112LL))(
                        v16,
                        255LL,
                        1LL);
    v7 = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v9 = 348LL;
      goto LABEL_7;
    }
    v17 = 0LL;
    v10 = v16;
    v11 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v16 + 144LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v12 = v11(v10, &v17);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 48LL))(v17, 1LL, 0LL);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, 1LL);
        v7 = v12;
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, struct tagRECT *))(*(_QWORD *)v16 + 120LL))(
                  v16,
                  a3);
          v7 = v12;
          if ( v12 >= 0 )
          {
LABEL_17:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
            goto LABEL_18;
          }
          v13 = 356LL;
        }
        else
        {
          v13 = 353LL;
        }
      }
      else
      {
        v13 = 352LL;
      }
    }
    else
    {
      v13 = 351LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x155,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
