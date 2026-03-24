/*
 * XREFs of _CreatePopupMenu @ 0x1C01034A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C0103B88 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

struct tagMENU *CreatePopupMenu()
{
  return InternalCreateMenu(1);
}
