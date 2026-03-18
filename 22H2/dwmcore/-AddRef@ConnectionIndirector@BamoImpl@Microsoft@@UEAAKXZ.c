/*
 * XREFs of ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801057E0
 * Callers:
 *     ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18011BC20 (-AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 *     ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x18011BC40 (-AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::AddRef(Microsoft::BamoImpl::ConnectionIndirector *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
