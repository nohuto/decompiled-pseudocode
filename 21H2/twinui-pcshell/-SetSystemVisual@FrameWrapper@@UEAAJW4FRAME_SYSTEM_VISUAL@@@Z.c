/*
 * XREFs of ?SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1801F5630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x1801F4C24 (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 */

__int64 __fastcall FrameWrapper::SetSystemVisual(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 56LL))(*(_QWORD *)(a1 + 16));
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( a2 )
      *(_DWORD *)(a1 + 48) |= 2u;
    else
      *(_DWORD *)(a1 + 48) &= ~2u;
    FrameWrapper::ReconcileFramedView((FrameWrapper *)(a1 - 32));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13B,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
