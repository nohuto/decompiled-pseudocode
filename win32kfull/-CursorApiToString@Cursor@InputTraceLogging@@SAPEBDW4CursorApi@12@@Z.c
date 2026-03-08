/*
 * XREFs of ?CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z @ 0x1C0225E10
 * Callers:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0021C48 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::Cursor::CursorApiToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Unknown";
  v1 = a1 - 1;
  if ( !v1 )
    return "Dwm";
  if ( v1 == 1 )
    return "Gre";
  return "UNKNOWN VALUE";
}
