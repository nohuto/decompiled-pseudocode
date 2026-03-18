/*
 * XREFs of IsTitleWindow @ 0x1C00C1104
 * Callers:
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00C1074 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     GetInheritedMonitor @ 0x1C010E880 (GetInheritedMonitor.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall IsTitleWindow(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  if ( ((*(_BYTE *)(v2 + 31) & 0x10) != 0 || !a2)
    && ((*(_BYTE *)(v2 + 16) & 8) != 0 || (*(_BYTE *)(v2 + 30) & 3) != 0)
    && !IsRectEmptyInl((const struct tagRECT *)(v2 + 104))
    && ((*(_BYTE *)(v4 + 26) & 8) == 0 || (*(_BYTE *)(v4 + 27) & 0x20) != 0) )
  {
    return 1;
  }
  return v3;
}
