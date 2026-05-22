/*
 * XREFs of ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x18004BBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::AddRef(__int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::AddRef(a1 - 8);
}
