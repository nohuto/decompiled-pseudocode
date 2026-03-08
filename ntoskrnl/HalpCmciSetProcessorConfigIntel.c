/*
 * XREFs of HalpCmciSetProcessorConfigIntel @ 0x14037D2B8
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x14037CC58 (HalpCmciSetProcessorConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpCmciSetProcessorConfigIntel(__int64 a1, char a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // rbp
  __int64 v10; // rcx

  LOBYTE(v5) = HalpMcaNumberOfBanks;
  v7 = a2 != 0 ? 0x40000000 : 0;
  if ( !HalpMcaNumberOfBanks )
  {
    v5 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v5;
  }
  if ( HalpMcaNumberOfBanks )
  {
    v8 = 640;
    v9 = (unsigned __int8)HalpMcaNumberOfBanks;
    do
    {
      LOBYTE(v5) = HalpWheaWriteMsr(a3, v8, v7);
      if ( a2 )
      {
        v5 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(a3, v8, 0LL);
        if ( (v5 & 0x40000000) != 0 )
        {
          v10 = *(_DWORD *)(a1 + 68) & 0x3FFF;
          if ( (*(_DWORD *)(a1 + 68) & 0x3FFF) == 0 )
            v10 = 1LL;
          LOBYTE(v5) = HalpWheaWriteMsr(a3, v8, v10 | v5 & 0xFFFFFFFFFFFFC000uLL);
        }
      }
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  return v5;
}
