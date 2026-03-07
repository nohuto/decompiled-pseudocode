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
  EnterCrit(1LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_20;
  v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
  if ( (v8 & 0xFFFFFFFD) == 0 )
    goto LABEL_20;
  if ( (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_20;
  v10 = IsWindowDesktopComposed(v8);
  LOBYTE(v11) = 1;
  v12 = v10;
  if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v11, &v16) < 0 )
    goto LABEL_20;
  CWindowProp::GetProp<CSwapChainProp>((__int64)v9, (__int64 *)&v17);
  v13 = v17;
  if ( !v17 )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v16, &v17) )
      goto LABEL_20;
    v13 = v17;
    v6 = CWindowProp::SetProp(v17, (unsigned __int64)v9);
    if ( !v6 )
    {
LABEL_10:
      (**(void (__fastcall ***)(CSwapChainProp *))v13)(v13);
      goto LABEL_20;
    }
    if ( (int)CreateVisRgnTracker(v9, 2) < 0 )
    {
      v6 = 0;
      goto LABEL_10;
    }
    goto LABEL_18;
  }
  v14 = v16;
  if ( *((void **)v17 + 3) == v16 )
  {
    *((_DWORD *)v17 + 8) = 0;
    v6 = 1;
    DxgkReleaseCompositionObjectReference(v16);
    goto LABEL_20;
  }
  if ( a2 || *((_DWORD *)v17 + 8) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj(v17);
    if ( *((_QWORD *)v13 + 3) )
    {
      LODWORD(v17) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 84);
    }
    *((_QWORD *)v13 + 3) = v14;
    *((_DWORD *)v13 + 8) = 0;
LABEL_18:
    v6 = 1;
    if ( v12 )
      v6 = CSwapChainProp::NotifyDwm(v13, v9);
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
