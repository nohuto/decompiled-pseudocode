__int64 __fastcall CSwapChainProp::CreateSwapChainProp(void *a1, struct CSwapChainProp **a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi

  v2 = 0;
  *a2 = 0LL;
  v5 = (_QWORD *)Win32AllocPoolZInit(40LL, 1668772693LL);
  v6 = v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    *v5 = &CSwapChainProp::`vftable';
    if ( v5[3] )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 84);
    *((_DWORD *)v6 + 8) = 0;
    v2 = 1;
    v6[3] = a1;
    *a2 = (struct CSwapChainProp *)v6;
  }
  return v2;
}
