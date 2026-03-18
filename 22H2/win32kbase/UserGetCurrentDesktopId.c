/*
 * XREFs of UserGetCurrentDesktopId @ 0x1C012F828
 * Callers:
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UserGetCurrentDesktopId(_QWORD *a1)
{
  unsigned int v2; // ebx

  *a1 = -1LL;
  v2 = 0;
  if ( *((struct tagDESKTOP **)PtiCurrentShared() + 57) == grpdeskRitInput )
  {
    v2 = 1;
    *a1 = ***(_QWORD ***)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL);
  }
  return v2;
}
