/*
 * XREFs of ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800FA464
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x180029E64 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800FA464 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 * Callees:
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180029FE8 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800FA464 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 */

bool __fastcall CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(CBrushRenderingGraphBuilder *this, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  bool IsIntermediateUsedInBlur; // r8
  unsigned int v7; // ebp
  __int64 v8; // rsi
  unsigned int v9; // edx
  CRenderingTechnique *v10; // rcx
  unsigned int v11; // r9d
  _DWORD *v12; // rax

  v2 = *(_QWORD *)this;
  v3 = (unsigned int)(a2 + 1);
  IsIntermediateUsedInBlur = 0;
  v7 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  if ( (unsigned int)v3 < v7 )
  {
    v8 = 8 * v3;
    do
    {
      if ( IsIntermediateUsedInBlur )
        break;
      v9 = 0;
      v10 = *(CRenderingTechnique **)(v8 + *(_QWORD *)(v2 + 144));
      v11 = *((_DWORD *)v10 + 19);
      if ( v11 )
      {
        v12 = (_DWORD *)((char *)v10 + 84);
        do
        {
          if ( *((_BYTE *)v12 + 4) && *v12 == a2 )
            break;
          ++v9;
          v12 += 11;
        }
        while ( v9 < v11 );
      }
      if ( v9 < v11 )
      {
        if ( CRenderingTechnique::IsExternallyImplementedSubgraph(v10, 0LL) )
          IsIntermediateUsedInBlur = 1;
        else
          IsIntermediateUsedInBlur = CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(this, v3);
      }
      LODWORD(v3) = v3 + 1;
      v8 += 8LL;
    }
    while ( (unsigned int)v3 < v7 );
  }
  return IsIntermediateUsedInBlur;
}
