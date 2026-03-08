/*
 * XREFs of ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ @ 0x180104CE0
 * Callers:
 *     ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x180117A70 (-AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 *     ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x180117A90 (-AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::AddRef(Microsoft::BamoImpl::ConnectionIndirector *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
