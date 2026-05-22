/*
 * XREFs of ?OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z @ 0x180179740
 * Callers:
 *     ?OnGestureDistanceChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800FFF30 (-OnGestureDistanceChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180177B9C (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x180178F4C (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 */

__int64 __fastcall Edges::OnControllerGestureDistanceChanged(
        Edges *this,
        struct EdgyControllerClientProxy *a2,
        unsigned int a3)
{
  char *v3; // rdx
  unsigned int v5; // ebx

  v3 = (char *)a2 + 88;
  v5 = -2147024809;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  if ( (int)Edges::FindEdge(this, (const unsigned __int16 *)v3) >= 0 )
  {
    Edge::s_gestureDistance = a3;
    return 0;
  }
  return v5;
}
