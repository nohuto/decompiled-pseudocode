/*
 * XREFs of PopPowerRequestStatsInitialize @ 0x140B62918
 * Callers:
 *     PopPowerRequestInitialize @ 0x140B62754 (PopPowerRequestInitialize.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140245560 (RtlInitializeGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140726450 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x140847520 (SleepstudyHelperCreateLibrary.c)
 *     PopSleepstudyRegisterSessionCallback @ 0x1408475F4 (PopSleepstudyRegisterSessionCallback.c)
 */

void PopPowerRequestStatsInitialize()
{
  __int64 v0; // rbx
  _QWORD *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdx
  PCWSTR SourceString[2]; // [rsp+30h] [rbp-68h]
  _QWORD v5[8]; // [rsp+40h] [rbp-58h] BYREF

  qword_140C38E68 = 0LL;
  PopPowerRequestStatsLock = 0LL;
  HIDWORD(v5[0]) = 0;
  RtlInitializeGenericTableAvl(
    &PopPowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestStatsDatabaseCompare,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestStatsDatabaseAllocate,
    (PRTL_AVL_FREE_ROUTINE)PopPowerRequestStatsDatabaseFree,
    0LL);
  if ( (int)SleepstudyHelperCreateLibrary(1414616912, &PopPowerRequestSleepstudyHandle) < 0 )
    PopPowerRequestSleepstudyHandle = 0LL;
  memset(v5, 0, sizeof(v5));
  v0 = 0LL;
  SourceString[0] = L"Audio";
  v1 = PopPowerRequestStatsScenarioBlockers;
  SourceString[1] = L"Mobile Hotspot";
  v2 = 2LL;
  do
  {
    RtlInitUnicodeString((PUNICODE_STRING)&v5[1], SourceString[v0]);
    if ( (int)PopPowerRequestStatsCreateSleepstudyBlocker((__int64)v5, v3, v1) < 0 )
      PopPowerRequestStatsScenarioBlockers[v0] = 0LL;
    ++v1;
    ++v0;
    --v2;
  }
  while ( v2 );
  qword_140C38F10 = (__int64)PopPowerRequestStatsOnSleepstudySessionChange;
  PopSleepstudyRegisterSessionCallback((__int64)&PopPowerRequestStatsSleepstudyCallback);
}
