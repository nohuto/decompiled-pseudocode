/*
 * XREFs of ?HandleCurrentMonitorDisconnect@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803A01A4
 * Callers:
 *     s_HandleCurrentMonitorDisconnect @ 0x1803A07D0 (s_HandleCurrentMonitorDisconnect.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803A038C (-MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ImmersiveMonitorHelper::HandleCurrentMonitorDisconnect(__int64 a1, struct IUnknown *a2, char a3)
{
  char v6; // si
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  struct IImmersiveMonitor *v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+70h] [rbp+18h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  if ( (a3 & 0x20) == 0 )
    return 0;
  v6 = 0;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[2].QueryInterface)(a2, &v15);
  if ( v7 >= 0 )
  {
    if ( v15 || !(unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 64), a2) )
      return v6;
    v13[0] = 0LL;
    v8 = *(_QWORD *)(a1 + 72);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v8 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
    v10 = v9(v8, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v13);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v13[0] + 48LL))(v13[0], &v16);
      v11 = retaddr;
      if ( v10 >= 0 )
      {
        if ( !v16 )
          goto LABEL_15;
        v10 = ImmersiveMonitorHelper::MoveStartToMonitorWithoutHiding((ImmersiveMonitorHelper *)a1, v13[0]);
        v11 = retaddr;
        if ( v10 >= 0 )
          goto LABEL_15;
        v12 = 350LL;
      }
      else
      {
        v12 = 348LL;
      }
    }
    else
    {
      v12 = 345LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)v12,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v10);
LABEL_15:
    v6 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
    return v6;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x151,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
    (const char *)(unsigned int)v7);
  return v6;
}
