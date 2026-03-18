/*
 * XREFs of ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1C005BA44
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C005CFC0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C005D248 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FCursorShadowed(struct _CURSINFO *a1)
{
  char v1; // r8

  v1 = 0;
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == 0x80002000 )
    return (*(_DWORD *)a1 & 0x200) != 0;
  return v1;
}
