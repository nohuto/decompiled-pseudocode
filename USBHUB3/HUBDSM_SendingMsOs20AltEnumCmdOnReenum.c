/*
 * XREFs of HUBDSM_SendingMsOs20AltEnumCmdOnReenum @ 0x1C00213A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C002AC88 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SendingMsOs20AltEnumCmdOnReenum(__int64 a1)
{
  HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
