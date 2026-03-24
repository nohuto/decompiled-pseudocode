/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C015E408
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C015E3F0 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     CreateVisRgnTracker @ 0x1C0035F74 (CreateVisRgnTracker.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C003819C (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00EC870 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C015E5C4 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C015E714 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C015E758 (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  int v10; // eax
  __int64 v11; // r9
  int v12; // r15d
  CSwapChainProp *v13; // rbx
  void *v14; // rbp
  void *v16; // [rsp+30h] [rbp-38h] BYREF
  CSwapChainProp *v17; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v6 = 0;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_15;
  v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
  if ( (v8 & 0xFFFFFFFD) == 0 )
    goto LABEL_15;
  if ( (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_15;
  v10 = IsWindowDesktopComposed(v8);
  LOBYTE(v11) = 1;
  v12 = v10;
  if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v11, &v16) < 0 )
    goto LABEL_15;
  CWindowProp::GetProp<CSwapChainProp>((__int64)v9, (__int64 *)&v17);
  v13 = v17;
  if ( !v17 )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v16, &v17) )
      goto LABEL_15;
    v13 = v17;
    v6 = CWindowProp::SetProp(v17, (unsigned __int64)v9);
    if ( v6 )
    {
      if ( (int)CreateVisRgnTracker(v9, 2) >= 0 )
      {
        v6 = 1;
LABEL_13:
        if ( v12 )
          v6 = CSwapChainProp::NotifyDwm(v13, v9);
        goto LABEL_15;
      }
      v6 = 0;
    }
    (**(void (__fastcall ***)(CSwapChainProp *))v13)(v13);
    v13 = 0LL;
LABEL_12:
    if ( !v6 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v14 = v16;
  if ( *((void **)v17 + 2) == v16 )
  {
    *((_DWORD *)v17 + 6) = 0;
    v6 = 1;
    DxgkReleaseCompositionObjectReference(v16);
    goto LABEL_15;
  }
  if ( a2 || *((_DWORD *)v17 + 6) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj(v17);
    if ( *((_QWORD *)v13 + 2) )
    {
      LODWORD(v17) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
    }
    *((_QWORD *)v13 + 2) = v14;
    v6 = 1;
    *((_DWORD *)v13 + 6) = 0;
    goto LABEL_12;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
