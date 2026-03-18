/*
 * XREFs of ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAUMOVESIZEDATA@@@Z @ 0x1C020B048
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldGoMonitorMaximizedMoveSizeData(struct MOVESIZEDATA *a1)
{
  char v1; // r8

  v1 = 1;
  if ( *((_DWORD *)a1 + 60) || (*((_DWORD *)a1 + 50) & 0x300) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 30LL) & 1) == 0 )
  {
    *((_DWORD *)a1 + 50) |= 0x80000u;
    return 0;
  }
  return v1;
}
