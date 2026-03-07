void __fastcall imp_WdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int _a2; // eax
  unsigned int v7; // ebx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxInterrupt *pFxInterrupt; // [rsp+50h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  m_Globals = pFxInterrupt->m_Globals;
  if ( !Info )
    FxVerifierNullBugCheck(pFxInterrupt->m_Globals, retaddr);
  _a2 = Info->Size;
  v7 = 56;
  if ( Info->Size == 56 || (v7 = 64, _a2 == 64) )
  {
    memmove(Info, &pFxInterrupt->m_InterruptInfo, v7);
    Info->Size = v7;
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x19u, WPP_FxInterruptApi_cpp_Traceguids, Interrupt, _a2, 0x40u);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
