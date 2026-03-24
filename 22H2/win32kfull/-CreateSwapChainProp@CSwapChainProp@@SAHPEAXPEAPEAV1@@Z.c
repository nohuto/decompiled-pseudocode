/*
 * XREFs of ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C015E758
 * Callers:
 *     UserSetWindowedSwapChain @ 0x1C015E408 (UserSetWindowedSwapChain.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::CreateSwapChainProp(void *a1, struct CSwapChainProp **a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi

  v2 = 0;
  *a2 = 0LL;
  v5 = (_QWORD *)Win32AllocPoolZInit(32LL, 1668772693LL);
  v6 = v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    *v5 = &CSwapChainProp::`vftable';
    if ( v5[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
    *((_DWORD *)v6 + 6) = 0;
    v2 = 1;
    v6[2] = a1;
    *a2 = (struct CSwapChainProp *)v6;
  }
  return v2;
}
