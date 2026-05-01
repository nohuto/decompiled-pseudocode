/*
 * XREFs of ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1800698E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x180069C64 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::ActiveZBandChangedForMonitor(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5)
{
  char v7; // di
  HWND ForegroundWindow; // r14
  __int64 v9; // rbx
  struct IUnknown *v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  struct IUnknown *v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v17; // [rsp+50h] [rbp+20h] BYREF

  if ( !*(_DWORD *)(a1 + 208) )
    return 0LL;
  if ( !a4 )
    return 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(a1 + 88) + 96LL))(*(_QWORD *)(a1 + 88), a4, &v17) < 0 )
    return 0LL;
  if ( !v17 )
    return 0LL;
  v7 = 1;
  if ( a3 != 1 )
    return 0LL;
  v14 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    v9 = *(_QWORD *)(a1 + 72);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    (*(void (__fastcall **)(__int64, HWND, struct IUnknown **))(*(_QWORD *)v9 + 48LL))(v9, ForegroundWindow, &v14);
  }
  v15 = 0LL;
  v10 = v14;
  if ( !v14 )
    goto LABEL_12;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))v10->lpVtbl[11].QueryInterface)(v10, &v15) < 0
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) != 3 )
  {
    v10 = v14;
LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  v10 = v14;
LABEL_13:
  if ( a5 == 2 )
  {
    if ( v7 || (unsigned int)SHIsSameObject(v10, *(struct IUnknown **)(a1 + 96)) )
      goto LABEL_16;
  }
  else if ( v7 )
  {
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    return 0LL;
  }
  v11 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 144));
  v12 = v11;
  if ( v11 >= 0 )
    goto LABEL_16;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2EC,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v12;
}
