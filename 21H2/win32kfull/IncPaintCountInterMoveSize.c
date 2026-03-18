/*
 * XREFs of IncPaintCountInterMoveSize @ 0x1C0239BA4
 * Callers:
 *     InternalInvalidate3 @ 0x1C004C894 (InternalInvalidate3.c)
 * Callees:
 *     ?SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D972C (-SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z.c)
 */

void __fastcall IncPaintCountInterMoveSize(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  int v2; // edx

  v1 = *(struct tagTHREADINFO **)(a1 + 16);
  v2 = *((_DWORD *)v1 + 150);
  *((_DWORD *)v1 + 150) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    SetWakeBitInterMoveSize(v1);
  }
}
