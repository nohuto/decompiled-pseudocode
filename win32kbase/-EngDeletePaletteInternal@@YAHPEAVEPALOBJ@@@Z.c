/*
 * XREFs of ?EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z @ 0x1C002D400
 * Callers:
 *     EngDeletePalette @ 0x1C002D390 (EngDeletePalette.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall EngDeletePaletteInternal(struct EPALOBJ *a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  int v3; // edx

  v1 = *(_QWORD *)a1;
  result = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_DWORD *)(v1 + 24);
    if ( (v3 & 0x100) == 0 )
    {
      *(_DWORD *)(v1 + 24) = v3 | 0x4000000;
      XEPALOBJ::vUnrefPalette(a1);
      return 1LL;
    }
  }
  return result;
}
