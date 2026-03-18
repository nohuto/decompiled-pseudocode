/*
 * XREFs of HUBDSM_CompletingClientRequestOnFailureInConfigured @ 0x1C001F270
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C0015950 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 */

__int64 __fastcall HUBDSM_CompletingClientRequestOnFailureInConfigured(__int64 a1)
{
  HUBPDO_CompleteClientSerialRequestWithLastStatus(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
