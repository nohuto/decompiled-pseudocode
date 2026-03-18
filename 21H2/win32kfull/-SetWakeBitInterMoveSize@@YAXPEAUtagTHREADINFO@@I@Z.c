/*
 * XREFs of ?SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D972C
 * Callers:
 *     IncPaintCountInterMoveSize @ 0x1C0239BA4 (IncPaintCountInterMoveSize.c)
 * Callees:
 *     <none>
 */

void __fastcall SetWakeBitInterMoveSize(struct tagTHREADINFO *a1)
{
  _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 8LL), 0x20u);
  _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 4LL), 0x20u);
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 56) + 16LL) & 0x20) != 0 )
    KeSetEvent(*((PRKEVENT *)a1 + 92), 6, 0);
}
