/*
 * XREFs of ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1C00204B4
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00219C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0021C48 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
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
