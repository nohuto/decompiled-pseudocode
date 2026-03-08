/*
 * XREFs of HUBUCX_CheckIfHubIsDisconnected @ 0x1C00293D4
 * Callers:
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C007E890 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CheckIfHubIsDisconnected(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 544))(*(_QWORD *)(a1 + 248));
}
