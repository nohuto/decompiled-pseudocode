/*
 * XREFs of ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C006C060
 * Callers:
 *     CitProcessCallout @ 0x1C006F63C (CitProcessCallout.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C00B01AC (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C00B8348 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C0272B98 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0272D20 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpProcessInfoIsValid(struct _CIT_PROCESS *a1)
{
  return (unsigned __int64)a1 >= 0xCEF2 || (unsigned __int64)a1 - 1 <= 0xCEEE;
}
