/*
 * XREFs of ?GotoParent@?$CGraphWalker@VCVisual@@@@QEAAXPEAPEAVCVisual@@@Z @ 0x180098348
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009A318 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     <none>
 */

void __fastcall CGraphWalker<CVisual>::GotoParent(__int64 a1, _QWORD *a2)
{
  int v2; // r10d
  __int64 v3; // r8
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0LL;
  if ( v2 )
  {
    v6 = *(_DWORD *)(a1 + 32);
    v7 = 0LL;
    v8 = 0;
    if ( v6 )
    {
      v9 = (unsigned int)(v6 - 1);
      *(_DWORD *)(a1 + 32) = v9;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v9 + 8);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v9);
    }
    v3 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a1 + 4) = v2 - 1;
    *(_QWORD *)(a1 + 16) = v7;
    *(_DWORD *)(a1 + 24) = v8;
  }
  *a2 = v3;
}
