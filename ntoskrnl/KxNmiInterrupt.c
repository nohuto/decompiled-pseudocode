/*
 * XREFs of KxNmiInterrupt @ 0x140424000
 * Callers:
 *     KiNmiInterruptStart @ 0x140423B80 (KiNmiInterruptStart.c)
 * Callees:
 *     KiProcessNMI @ 0x140369160 (KiProcessNMI.c)
 *     KiSaveProcessorState @ 0x14036A140 (KiSaveProcessorState.c)
 */

__int64 __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    KiSaveProcessorState(v0 - 128, (__int64)v2);
  return KiProcessNMI(v0 - 128, v2);
}
