/*
 * XREFs of HalpMcaResumeProcessorConfig @ 0x140A9218C
 * Callers:
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A94574 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpCmciInitProcessor @ 0x14037CD68 (HalpCmciInitProcessor.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpMcaSetProcessorConfig @ 0x140A87E04 (HalpMcaSetProcessorConfig.c)
 *     HalpIsCmciImplemented @ 0x140A8E988 (HalpIsCmciImplemented.c)
 */

char __fastcall HalpMcaResumeProcessorConfig(int a1)
{
  KPCR *Pcr; // rax
  __int64 i; // rdi
  __int64 v4; // rbx
  _BYTE v6[976]; // [rsp+20h] [rbp-3E8h] BYREF

  memset(v6, 0, 0x3CCuLL);
  LOBYTE(Pcr) = HalpFeatureBits;
  if ( (HalpFeatureBits & 0xC) != 0 )
  {
    Pcr = KeGetPcr();
    for ( i = *(_QWORD *)&Pcr->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
    {
      v4 = *(_QWORD *)(i + 172);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          HalpMcaSetProcessorConfig((__int64)HalpMceErrorSource, *(_QWORD *)(i + 172));
          LOBYTE(Pcr) = HalpIsCmciImplemented();
          if ( (_BYTE)Pcr )
            LOBYTE(Pcr) = HalpCmciInitProcessor((__int64)HalpCmcErrorSource, v4);
        }
      }
      else
      {
        memset(v6, 0, 0x3CCuLL);
        PshedGetErrorSourceInfo(0LL, v6);
        LOBYTE(Pcr) = HalpMcaSetProcessorConfig((__int64)v6, v4);
      }
    }
  }
  return (char)Pcr;
}
