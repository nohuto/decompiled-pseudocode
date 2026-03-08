/*
 * XREFs of MiCheckPatchPagesCallback @ 0x140A33660
 * Callers:
 *     <none>
 * Callees:
 *     RtlAreBitsClear @ 0x14036C910 (RtlAreBitsClear.c)
 *     RtlDetermineHotPatchExtent @ 0x140A736B4 (RtlDetermineHotPatchExtent.c)
 */

char __fastcall MiCheckPatchPagesCallback(__int64 a1, _DWORD *a2, int a3, char a4)
{
  RTL_BITMAP *v5; // rdi
  ULONG StartingIndex; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  StartingIndex = 0;
  v8 = 0;
  if ( a4 )
    v5 = *(RTL_BITMAP **)(a1 + 8);
  else
    v5 = *(RTL_BITMAP **)a1;
  RtlDetermineHotPatchExtent(a3, *a2, 34404, (unsigned int)&StartingIndex, (__int64)&v8);
  if ( v8 >= v5->SizeOfBitMap )
  {
    *(_DWORD *)(a1 + 16) = -1073741701;
    return 1;
  }
  if ( !RtlAreBitsClear(v5, StartingIndex, v8 - StartingIndex + 1) )
  {
    *(_DWORD *)(a1 + 16) = -1073741746;
    return 1;
  }
  return 0;
}
