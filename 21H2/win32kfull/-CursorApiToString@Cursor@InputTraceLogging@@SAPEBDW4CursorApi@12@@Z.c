/*
 * XREFs of ?CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z @ 0x1C023A0AC
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
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
