/*
 * XREFs of _CreatePopupMenu @ 0x1C0103150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C0103838 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

struct tagMENU *CreatePopupMenu()
{
  return InternalCreateMenu(1);
}
