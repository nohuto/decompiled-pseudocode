/*
 * XREFs of IncPaintCountInterMoveSize @ 0x1C0225B30
 * Callers:
 *     InternalInvalidate3 @ 0x1C0054B50 (InternalInvalidate3.c)
 * Callees:
 *     ?SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B4100 (-SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z.c)
 */

void __fastcall IncPaintCountInterMoveSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rbx
  int v5; // edx

  v4 = *(struct tagTHREADINFO **)(a1 + 16);
  v5 = *((_DWORD *)v4 + 150);
  *((_DWORD *)v4 + 150) = v5 + 1;
  if ( !v5 )
  {
    EtwTraceWakePump(v4, a1, 15LL, a4);
    SetWakeBitInterMoveSize(v4);
  }
}
