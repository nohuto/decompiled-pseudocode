/*
 * XREFs of VfTriageSystem @ 0x140B49FDC
 * Callers:
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ViFindTriageDriverTargets @ 0x140B93F90 (ViFindTriageDriverTargets.c)
 *     ViFindTriageRule @ 0x140B94010 (ViFindTriageRule.c)
 *     ViMakeVerifierSettings @ 0x140B940B4 (ViMakeVerifierSettings.c)
 *     ViTriageSameDriversFromDump @ 0x140B941A4 (ViTriageSameDriversFromDump.c)
 *     ViValidateTriageRules @ 0x140B94260 (ViValidateTriageRules.c)
 *     MmTriageActiveInLastCrash @ 0x140B96664 (MmTriageActiveInLastCrash.c)
 *     TriageGetBugcheckData @ 0x140B98DCC (TriageGetBugcheckData.c)
 */

__int64 __fastcall VfTriageSystem(__int64 a1)
{
  unsigned int v1; // ebx
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned int v7; // edi
  int v8; // r14d
  __int64 TriageDriverTargets; // rsi
  __int64 v10; // rcx
  _DWORD *TriageRule; // rbx
  _BYTE v12[40]; // [rsp+40h] [rbp-30h] BYREF

  v1 = 0;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: verifier triage global/registry settings %X \n", ViVerifyTriage);
  if ( MmVerifyDriverLevel != -1 || ViVerifyAllDrivers )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: driver verifier settings present.\n");
    return 0LL;
  }
  if ( ViVerifyTriage == -1 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is not enabled by default.\n");
    return 0LL;
  }
  if ( !ViVerifyTriage )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is disabled explicitely.\n");
    return 0LL;
  }
  if ( ViVerifyTriage < 0 )
  {
    v1 = (unsigned __int16)ViVerifyTriage;
    v4 = (unsigned __int16)ViVerifyTriage;
    ViVerifyTriage = 1;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: simulated crash code %X.\n", v4);
  }
  v5 = *(_QWORD *)(a1 + 240);
  if ( !v5 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: null loader extension.\n");
    return 0LL;
  }
  if ( *(_DWORD *)v5 < 0xF20u )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: unexpected loader extension size.\n");
    return 0LL;
  }
  v6 = *(_QWORD *)(v5 + 40);
  if ( (int)TriageGetBugcheckData(
              v6,
              (unsigned int)v12,
              (unsigned int)&v12[8],
              (unsigned int)&v12[16],
              (__int64)&v12[24],
              (__int64)&v12[32]) >= 0 )
  {
    v8 = 1;
    v7 = *(_DWORD *)v12;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a real crash happened.\n");
  }
  else
  {
    if ( !v1 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: standard retail exit point.\n");
      return 0LL;
    }
    v7 = v1;
    v8 = 0;
    *(_QWORD *)v12 = v1;
    *(__m128i *)&v12[8] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_OWORD *)&v12[24] = *(_OWORD *)&v12[8];
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a fake crash will be simulated.\n");
  }
  DbgPrintEx(
    0x5Du,
    3u,
    "CRASH TRIAGE: previous crash was %Ix %Ix %Ix %Ix %Ix.\n",
    v7,
    *(_DWORD *)&v12[8],
    *(_DWORD *)&v12[16],
    *(_DWORD *)&v12[24],
    *(_DWORD *)&v12[32]);
  ViTriageCrashData = *(_OWORD *)v12;
  qword_140C36F00 = *(_QWORD *)&v12[32];
  xmmword_140C36EF0 = *(_OWORD *)&v12[16];
  if ( v8 )
  {
    if ( (unsigned int)MmTriageActiveInLastCrash(a1) == 1 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it was active in previous crash or server system.\n");
      return 0LL;
    }
    if ( !(unsigned int)ViTriageSameDriversFromDump(a1, v6) )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: some drivers changed from previous crash.\n");
      return 0LL;
    }
  }
  if ( !(unsigned int)ViValidateTriageRules(&ViVerifyTriageRules, (unsigned int)ViVerifyTriageRulesSize) )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid registry rules.\n");
    return 0LL;
  }
  if ( !(unsigned int)ViValidateTriageRules(&ViInternalTriageRules, 48LL) )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid internal rules!\n");
    return 0LL;
  }
  TriageDriverTargets = 0LL;
  TriageRule = (_DWORD *)ViFindTriageRule(&ViVerifyTriageRules, (unsigned int)ViVerifyTriageRulesSize, v7);
  if ( !TriageRule )
  {
    TriageRule = (_DWORD *)ViFindTriageRule(&ViInternalTriageRules, 48LL, v7);
    if ( !TriageRule )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: crash code %Ix will not be triaged.\n", v7);
      return 0LL;
    }
  }
  if ( *TriageRule < 0x80000u )
  {
    TriageDriverTargets = ViFindTriageDriverTargets(v10, (unsigned int)ViVerifyTriageRulesSize);
    if ( TriageDriverTargets )
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no `targets' rule found.\n");
  }
  if ( !TriageRule[1] )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to rule with null features.\n");
    return 0LL;
  }
  ViMakeVerifierSettings(TriageRule, TriageDriverTargets);
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage enabled!\n");
  return 1LL;
}
