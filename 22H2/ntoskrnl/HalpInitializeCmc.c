/*
 * XREFs of HalpInitializeCmc @ 0x140A8B58C
 * Callers:
 *     HalpInitializeErrSrc @ 0x140A8B540 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmciInitializeErrorPacket @ 0x140380734 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x1403807F8 (HalpCmciInitProcessor.c)
 *     HalpCmcInitializePolling @ 0x1403B3DB8 (HalpCmcInitializePolling.c)
 *     HalpCmcStartPolling @ 0x1403B42D8 (HalpCmcStartPolling.c)
 *     HalpIsCmciImplemented @ 0x140A91BE8 (HalpIsCmciImplemented.c)
 */

__int64 __fastcall HalpInitializeCmc(int a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h]

  HIDWORD(v6) = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      HalpCmcErrorSourceId = a2[7];
      HalpCmcErrorSource = a2;
      if ( (unsigned __int8)HalpIsCmciImplemented() )
      {
        HalpCmciEnabled = 1;
        _InterlockedIncrement(&HalpCmciRevertToPolledMode);
      }
      HalpCmcInitializePolling((__int64)a2);
      HalpCmcStartPolling(v5, v4);
    }
    else
    {
      LODWORD(v6) = KeGetPcr()->Prcb.Number;
      if ( (unsigned __int8)HalpIsCmciImplemented() )
      {
        HalpCmciInitializeErrorPacket((__int64)a2, v6);
        HalpCmciInitProcessor((__int64)a2, v6);
      }
    }
  }
  else
  {
    HalpCmcErrorSourceId = a2[7];
    HalpCmcErrorSource = a2;
  }
  return 0LL;
}
