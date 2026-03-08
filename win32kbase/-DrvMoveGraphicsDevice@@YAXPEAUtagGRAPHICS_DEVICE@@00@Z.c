/*
 * XREFs of ?DrvMoveGraphicsDevice@@YAXPEAUtagGRAPHICS_DEVICE@@00@Z @ 0x1C00CB4CC
 * Callers:
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00CB3D4 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvMoveGraphicsDevice(
        struct tagGRAPHICS_DEVICE *a1,
        struct tagGRAPHICS_DEVICE *a2,
        struct tagGRAPHICS_DEVICE *a3)
{
  __int64 v6; // rcx

  if ( a1 && a2 && a2 != a3 )
  {
    *((_QWORD *)a2 + 16) = *((_QWORD *)a1 + 16);
    v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
    if ( a3 )
    {
      *((_QWORD *)a1 + 16) = *((_QWORD *)a3 + 16);
      *((_QWORD *)a3 + 16) = a1;
    }
    else
    {
      *((_QWORD *)a1 + 16) = *(_QWORD *)(v6 + 1264);
      *(_QWORD *)(v6 + 1264) = a1;
    }
    if ( a1 == *(struct tagGRAPHICS_DEVICE **)(v6 + 1272) )
      *(_QWORD *)(v6 + 1272) = a2;
  }
}
