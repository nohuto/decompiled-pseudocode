/*
 * XREFs of ?SetSystemVisual@CHwndTargetProp@@QEAAJW4_HwndTargetType@@PEAUCompositionObject@@@Z @ 0x1C00BFB00
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionNotifyDwmForSystemVisualCreation @ 0x1C00BFB78 (ApiSetEditionNotifyDwmForSystemVisualCreation.c)
 */

__int64 __fastcall CHwndTargetProp::SetSystemVisual(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rsi
  int v6; // ebx

  v3 = (int)a2;
  v6 = ApiSetEditionNotifyDwmForSystemVisualCreation(*(_QWORD *)(a1 + 16), a2);
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 16 * v3 + 24) = a3;
    ObReferenceObjectByPointer(a3, 3u, ExCompositionObjectType, 0);
  }
  return (unsigned int)v6;
}
