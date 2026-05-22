/*
 * XREFs of ?GetInputObserverManager@BamoInputSystemPrincipal@@UEAAPEAVBamoInputObserverManagerPrincipal@@XZ @ 0x18001C6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoInputObserverManagerPrincipal *__fastcall BamoInputSystemPrincipal::GetInputObserverManager(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoInputObserverManagerPrincipal *)*((_QWORD *)this + 12);
}
