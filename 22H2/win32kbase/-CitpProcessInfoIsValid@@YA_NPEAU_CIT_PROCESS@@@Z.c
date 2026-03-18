/*
 * XREFs of ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0033BE4
 * Callers:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0010D88 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     CitProcessCallout @ 0x1C00362EC (CitProcessCallout.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C00CA074 (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C0233DE8 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0233F70 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpProcessInfoIsValid(struct _CIT_PROCESS *a1)
{
  return (unsigned __int64)a1 >= 0xCEF2 || (unsigned __int64)a1 - 1 <= 0xCEEE;
}
