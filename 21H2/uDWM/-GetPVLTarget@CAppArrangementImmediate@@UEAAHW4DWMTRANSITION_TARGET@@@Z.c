/*
 * XREFs of ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800AF210
 * Callers:
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800B1BCC (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3480 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementImmediate::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // edx
  unsigned int *i; // r8

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CAppArrangementImmediate::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned int)++v3 >= 0x1C )
      return v2;
  }
  return `CAppArrangementImmediate::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
}
