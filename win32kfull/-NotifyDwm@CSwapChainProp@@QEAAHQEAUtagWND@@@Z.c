__int64 __fastcall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2)
{
  struct tagWND *v2; // rax
  unsigned int v3; // ebx
  void *v6; // rcx
  void *v7; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct tagWND *)*((_QWORD *)this + 2);
  v3 = 0;
  if ( v2 && v2 != a2 )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 54);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v6 = (void *)*((_QWORD *)this + 3);
    v9 = 0LL;
    if ( !v6 || (int)DxgkOpenDwmHandleForCompositionObjectReference(v6, &v9) >= 0 )
    {
      v7 = (void *)ReferenceDwmApiPort(v6);
      LOBYTE(v3) = (int)DwmAsyncDxBindSwapChain(v7) >= 0;
    }
  }
  return v3;
}
