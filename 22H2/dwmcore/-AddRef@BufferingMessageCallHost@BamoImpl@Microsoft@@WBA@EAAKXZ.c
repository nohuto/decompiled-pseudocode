/*
 * XREFs of ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18011BC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::AddRef(__int64 a1)
{
  return Microsoft::BamoImpl::ConnectionIndirector::AddRef((Microsoft::BamoImpl::ConnectionIndirector *)(a1 - 16));
}
