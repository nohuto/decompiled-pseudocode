/*
 * XREFs of HUBDSM_FowardingStreamsRequestToUcxInConfiguredSuspendedWithSpecialFile @ 0x1C001F8F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_ForwardRequestToUCX @ 0x1C00292DC (HUBUCX_ForwardRequestToUCX.c)
 */

__int64 __fastcall HUBDSM_FowardingStreamsRequestToUcxInConfiguredSuspendedWithSpecialFile(__int64 a1)
{
  HUBUCX_ForwardRequestToUCX(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
