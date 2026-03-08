/*
 * XREFs of HalpCmciSetProcessorConfigAMD @ 0x140503AC8
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x14037CC58 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x14037CE58 (HalpCmciPollProcessor.c)
 *     HalpCmciResetStateAMD @ 0x1405039DC (HalpCmciResetStateAMD.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpCmciSetProcessorMiscConfigAMD @ 0x140503D34 (HalpCmciSetProcessorMiscConfigAMD.c)
 *     HalpWheaReadMsrMisc @ 0x140516598 (HalpWheaReadMsrMisc.c)
 */

char __fastcall HalpCmciSetProcessorConfigAMD(int a1, char a2, __int64 a3)
{
  int v5; // ebp
  __int64 v6; // rax
  __int64 MsrMisc; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  unsigned int v10; // esi
  int v11; // r13d
  int v12; // r9d
  int v13; // edi
  unsigned int v14; // ebp
  __int64 v15; // r12
  int v16; // eax
  int v17; // r9d
  int v18; // edx
  __int64 v19; // rax
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  int v23; // r9d
  int v25; // [rsp+30h] [rbp-48h]
  unsigned int v26; // [rsp+30h] [rbp-48h]
  unsigned int v28; // [rsp+98h] [rbp+20h]

  v5 = a1;
  if ( HalpMcaScalableRasSupported )
  {
    v6 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a3, 3221226512LL, 0LL);
    HalpWheaWriteMsr(a3, 3221226512LL, (a2 != 0 ? 0x1000uLL : 0) | v6 & 0xFFFFFFFFFFFF0F0FuLL | (a2 != 0 ? 0x20 : 0));
  }
  LOBYTE(MsrMisc) = HalpMcaNumberOfBanks;
  if ( !HalpMcaNumberOfBanks )
  {
    MsrMisc = __readmsr(0x179u);
    HalpMcaNumberOfBanks = MsrMisc;
  }
  v8 = (unsigned __int8)HalpMcaNumberOfBanks;
  v9 = 0;
  v28 = (unsigned __int8)HalpMcaNumberOfBanks;
  if ( HalpMcaNumberOfBanks )
  {
    v10 = -1073733622;
    v11 = 1027;
    do
    {
      MsrMisc = HalpWheaReadMsrMisc(a3, v9);
      v25 = MsrMisc;
      v13 = MsrMisc;
      if ( MsrMisc < 0 )
      {
        if ( BYTE3(MsrMisc) )
        {
          if ( HalpMcaScalableRasSupported )
            v14 = v10;
          else
            v14 = 8 * BYTE3(MsrMisc) - 1073740800;
          v15 = 4LL;
          do
          {
            v16 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(a3, v14, 0LL);
            LOBYTE(v17) = a2;
            HalpCmciSetProcessorMiscConfigAMD(a1, v14++, v16, v17, a3);
            --v15;
          }
          while ( v15 );
          v13 = v25;
          v8 = v28;
          v5 = a1;
        }
        v18 = v10 - 7;
        if ( !HalpMcaScalableRasSupported )
          v18 = v11;
        v26 = v10 - 6;
        LOBYTE(v12) = a2;
        LOBYTE(MsrMisc) = HalpCmciSetProcessorMiscConfigAMD(v5, v18, v13, v12, a3);
        if ( HalpMcaScalableRasSupported )
        {
          v19 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(a3, v26, 0LL);
          HalpWheaWriteMsr(a3, v26, v19 & 0xFFFFFF9FFFFFFFFFuLL | -(__int64)(a2 != 0) & 0x2000000000LL);
          v20 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(a3, v10, 0LL);
          LOBYTE(v21) = a2;
          HalpCmciSetProcessorMiscConfigAMD(v5, v10, v20, v21, a3);
          v22 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(a3, v10 + 1, 0LL);
          LOBYTE(v23) = a2;
          LOBYTE(MsrMisc) = HalpCmciSetProcessorMiscConfigAMD(v5, v10 + 1, v22, v23, a3);
        }
      }
      ++v9;
      v11 += 4;
      v10 += 16;
    }
    while ( v9 < v8 );
  }
  return MsrMisc;
}
