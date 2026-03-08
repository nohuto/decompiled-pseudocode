/*
 * XREFs of ?IsScanoutCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180130390
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsScanoutCompatible(CGlobalCompositionSurfaceInfo *this)
{
  bool result; // al
  __int64 v2; // r8

  result = 1;
  if ( *((_DWORD *)this + 34) == 3 )
  {
    if ( *((_BYTE *)this + 303) )
    {
      if ( !*((_BYTE *)this + 420) )
        return result;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) == 0 )
        return 0;
      v2 = 2LL;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) == 0 )
        return 0;
      v2 = 0LL;
    }
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&CompSurfInfo_ScanoutIncompatible,
      v2);
    return 0;
  }
  return result;
}
