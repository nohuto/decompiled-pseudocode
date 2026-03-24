/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x140220AF0
 * Callers:
 *     KeIntSteerPeriodic @ 0x140229440 (KeIntSteerPeriodic.c)
 *     KiIntSteerLogState @ 0x140377A24 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x14052275C (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140220B40 (EtwpLevelKeywordEnabled.c)
 */

bool __fastcall KiIntSteerEtwEventEnabled(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int8 v3; // r10

  return KiIntSteerEtwHandle
      && ((unsigned __int8)EtwpLevelKeywordEnabled(
                             *(_QWORD *)(KiIntSteerEtwHandle + 32) + 96LL,
                             *(unsigned __int8 *)(a1 + 4),
                             *(_QWORD *)(a1 + 8))
       || *(_BYTE *)(v2 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 96LL, v3, v1));
}
