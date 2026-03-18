/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C01510C0
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00B3444 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     RemoveVisRgnTracker @ 0x1C00B3BEC (RemoveVisRgnTracker.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C014F364 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C014F4C4 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  CSwapChainProp *v9; // rax
  CSwapChainProp *v10; // rsi
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(1LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v6 != 669 )
    {
      v11 = 0LL;
      if ( a2 )
      {
        if ( CWindowProp::GetProp<CSwapChainProp>(v5, &v11) )
          *(_DWORD *)(v11 + 32) = 1;
      }
      else
      {
        v9 = (CSwapChainProp *)InternalRemoveProp(v5, WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceObject), 1u);
        v10 = v9;
        if ( v9 )
        {
          *((_QWORD *)v9 + 2) = 0LL;
          CSwapChainProp::ClearCompositionSurfaceObj(v9);
          if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v7) )
            CSwapChainProp::NotifyDwm(v10, v7);
          (**(void (__fastcall ***)(CSwapChainProp *))v10)(v10);
          RemoveVisRgnTracker((__int64)v7, 2u);
        }
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
