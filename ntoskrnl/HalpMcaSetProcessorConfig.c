/*
 * XREFs of HalpMcaSetProcessorConfig @ 0x140A87E04
 * Callers:
 *     HalpMceInitProcessor @ 0x140A87C98 (HalpMceInitProcessor.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A9218C (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     HalpIsLmceSupported @ 0x14037CF24 (HalpIsLmceSupported.c)
 *     HalpWheaWriteMsrStatus @ 0x14037D018 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x14037D060 (HalpWheaWriteMsrControl.c)
 *     HalpMcaProcessorBankConfig @ 0x14037D0B4 (HalpMcaProcessorBankConfig.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpMcaSetProcessorConfig(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  __int64 *v6; // r14
  __int64 v7; // r8
  char result; // al
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  if ( HalpMcaEnabled )
  {
    if ( (((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a2, 377LL, 0LL) & 0x100) != 0 )
      HalpWheaWriteMsr(a2, 379LL, *(_QWORD *)(a1 + 56));
    if ( HalpIsLmceSupported() )
    {
      ++HalpLmceSupportedCount;
      v12 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a2, 1232LL, 0LL);
      HalpWheaWriteMsr(a2, 1232LL, v12 | 1);
    }
    else
    {
      ++HalpLmceNotSupportedCount;
    }
    if ( !HalpMcaNumberOfBanks )
    {
      v11 = __readmsr(0x179u);
      HalpMcaNumberOfBanks = v11;
    }
    v4 = (unsigned __int8)HalpMcaNumberOfBanks;
    v5 = 0;
    if ( HalpMcaNumberOfBanks )
    {
      v6 = (__int64 *)(a1 + 84);
      do
      {
        if ( !HalpMcaBanksValidOnBoot || PshedIsSystemWheaEnabled() )
          HalpWheaWriteMsrStatus(a2, v5);
        if ( v4 <= *(unsigned __int8 *)(a1 + 43) )
          v7 = *v6;
        else
          v7 = *(_QWORD *)(a1 + 84);
        HalpWheaWriteMsrControl(a2, v5, v7);
        HalpMcaProcessorBankConfig(a2, v5++);
        v6 = (__int64 *)((char *)v6 + 28);
      }
      while ( v5 < v4 );
    }
  }
  result = HalpMceEnabled;
  v9 = __readcr4();
  if ( result )
    v10 = v9 | 0x40;
  else
    v10 = v9 ^ 0x40;
  __writecr4(v10);
  return result;
}
