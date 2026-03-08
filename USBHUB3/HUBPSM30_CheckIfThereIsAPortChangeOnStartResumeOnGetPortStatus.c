/*
 * XREFs of HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus @ 0x1C0013A30
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x1C0005168 (HUBHTX_CheckAndSelectIfAny30PortChangeSet.c)
 */

__int64 __fastcall HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus(__int64 a1)
{
  return HUBHTX_CheckAndSelectIfAny30PortChangeSet(*(_QWORD *)(a1 + 960));
}
