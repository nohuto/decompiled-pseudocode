/*
 * XREFs of ??$_Uninitialized_move@PEAVCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAPEAVCDepthSortedVisualCollection@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x1801D6334
 * Callers:
 *     ??$_Emplace_reallocate@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAPEAVCDepthSortedVisualCollection@@QEAV2@$$QEAV2@@Z @ 0x1801D61A4 (--$_Emplace_reallocate@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@QEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x1801B073C (--$_Destroy_range@V-$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVis.c)
 */

CDepthSortedVisualCollection *__fastcall std::_Uninitialized_move<CDepthSortedVisualCollection *>(
        _QWORD *a1,
        _QWORD *a2,
        CDepthSortedVisualCollection *a3)
{
  CDepthSortedVisualCollection *v3; // rbx
  _QWORD *v5; // r9
  char *v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 5;
    v6 = (char *)(a3 - (CDepthSortedVisualCollection *)a1);
    do
    {
      v7 = *(v5 - 3);
      *(v5 - 3) = 0LL;
      v8 = *(v5 - 4);
      *(v5 - 4) = 0LL;
      v9 = *(v5 - 5);
      *(v5 - 5) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 32) = v8;
      *(_QWORD *)v3 = v9;
      v3 = (CDepthSortedVisualCollection *)((char *)v3 + 56);
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 24) = v7;
      *(_DWORD *)((char *)v5 + (_QWORD)v6 - 16) = *((_DWORD *)v5 - 4);
      v10 = *(v5 - 1);
      v11 = v5[1];
      v12 = *v5;
      v5[1] = 0LL;
      *v5 = 0LL;
      *(v5 - 1) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 8) = v10;
      *(_QWORD *)&v6[(_QWORD)v5] = v12;
      *(_QWORD *)((char *)v5 + (_QWORD)v6 + 8) = v11;
      v5 += 7;
    }
    while ( v5 - 5 != a2 );
  }
  std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(v3, v3);
  return v3;
}
