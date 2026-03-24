/*
 * XREFs of ?SetWakeBitInterMoveSize@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D2C50
 * Callers:
 *     IncPaintCountInterMoveSize @ 0x1C023E4C0 (IncPaintCountInterMoveSize.c)
 * Callees:
 *     <none>
 */

void __fastcall SetWakeBitInterMoveSize(struct tagTHREADINFO *a1)
{
  *(_WORD *)(*((_QWORD *)a1 + 56) + 6LL) |= 0x20u;
  *(_WORD *)(*((_QWORD *)a1 + 56) + 4LL) |= 0x20u;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 56) + 10LL) & 0x20) != 0 )
    KeSetEvent(*((PRKEVENT *)a1 + 92), 6, 0);
}
