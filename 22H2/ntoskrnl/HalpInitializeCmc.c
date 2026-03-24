/*
 * XREFs of HalpInitializeCmc @ 0x1409A0E28
 * Callers:
 *     HalpInitializeErrSrc @ 0x1409A0A50 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmcInitializePolling @ 0x1403C5040 (HalpCmcInitializePolling.c)
 *     HalpCmcStartPolling @ 0x1403C53F8 (HalpCmcStartPolling.c)
 *     HalpIsCmciImplemented @ 0x140999C54 (HalpIsCmciImplemented.c)
 *     HalpCmciInitProcessor @ 0x140999D10 (HalpCmciInitProcessor.c)
 *     HalpCmciInit @ 0x1409A0EB4 (HalpCmciInit.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A0FDC (HalpCmciInitializeErrorPacket.c)
 */

__int64 __fastcall HalpInitializeCmc(int a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+18h]

  HIDWORD(v5) = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      HalpCmcErrorSourceId = *(_DWORD *)(a2 + 28);
      HalpCmcErrorSource = (PVOID)a2;
      if ( HalpIsCmciImplemented() )
      {
        *(_BYTE *)(a2 + 48) = 5;
        HalpCmciInit(a2);
      }
      HalpCmcInitializePolling(a2);
      HalpCmcStartPolling(v4);
    }
    else
    {
      LODWORD(v5) = KeGetPcr()->Prcb.Number;
      if ( HalpIsCmciImplemented() )
      {
        HalpCmciInitializeErrorPacket(a2, v5);
        HalpCmciInitProcessor(a2, v5);
      }
    }
  }
  else
  {
    HalpCmcErrorSourceId = *(_DWORD *)(a2 + 28);
    HalpCmcErrorSource = (PVOID)a2;
    if ( HalpIsCmciImplemented() )
    {
      HalpCmciEnabled = 1;
      *(_BYTE *)(a2 + 48) = 5;
      HalpCmciInit(a2);
    }
  }
  return 0LL;
}
