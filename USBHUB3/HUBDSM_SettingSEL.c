/*
 * XREFs of HUBDSM_SettingSEL @ 0x1C0024DC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C002D548 (HUBDTX_SetSelUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingSEL(__int64 a1)
{
  HUBDTX_SetSelUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
