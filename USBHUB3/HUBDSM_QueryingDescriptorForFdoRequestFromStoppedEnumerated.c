/*
 * XREFs of HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated @ 0x1C001FB10
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C002D9F4 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 */

__int64 __fastcall HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated(__int64 a1)
{
  HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
