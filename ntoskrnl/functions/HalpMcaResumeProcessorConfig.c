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
