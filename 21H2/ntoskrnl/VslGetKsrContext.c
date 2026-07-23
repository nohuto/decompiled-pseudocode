/*
 * XREFs of VslGetKsrContext @ 0x140A75248
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 *VslGetKsrContext()
{
  if ( !VslVsmEnabled )
    return 0LL;
  VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
  qword_140D58768 = (__int64)VslpRegisterKsrCallback;
  return &VslpIumKsrInitContext;
}
