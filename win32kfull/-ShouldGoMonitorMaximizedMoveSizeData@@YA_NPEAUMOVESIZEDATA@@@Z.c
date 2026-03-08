/*
 * XREFs of ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAUMOVESIZEDATA@@@Z @ 0x1C01EBAA4
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldGoMonitorMaximizedMoveSizeData(struct MOVESIZEDATA *a1)
{
  _DWORD *v1; // rdx
  char v2; // r8

  v1 = (_DWORD *)((char *)a1 + 200);
  v2 = 1;
  if ( *((_DWORD *)a1 + 60) || (*v1 & 0x300) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 30LL) & 1) == 0 )
  {
    *v1 |= 0x40000u;
    return 0;
  }
  return v2;
}
