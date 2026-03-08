/*
 * XREFs of IsDpiAwarenessBoundaryInParentChain @ 0x1C0168404
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00152E0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDpiAwarenessBoundaryInParentChain(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  __int64 v3; // r9

  v1 = 0;
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 104);
    if ( !v2 )
      break;
    v3 = *(_QWORD *)(v2 + 40);
    if ( (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D )
      break;
    if ( (((unsigned __int16)(*(_DWORD *)(v3 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
      return 1;
    a1 = *(_QWORD *)(a1 + 104);
  }
  return v1;
}
