/*
 * XREFs of ?GetKeyboardDockServer@BamoInputSystemPrincipal@@UEAAPEAVBamoKeyboardDockServerPrincipal@@XZ @ 0x18001C6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoKeyboardDockServerPrincipal *__fastcall BamoInputSystemPrincipal::GetKeyboardDockServer(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoKeyboardDockServerPrincipal *)*((_QWORD *)this + 14);
}
