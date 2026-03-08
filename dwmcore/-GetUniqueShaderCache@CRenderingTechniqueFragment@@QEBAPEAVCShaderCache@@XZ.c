/*
 * XREFs of ?GetUniqueShaderCache@CRenderingTechniqueFragment@@QEBAPEAVCShaderCache@@XZ @ 0x18002987C
 * Callers:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x1800298D4 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

struct CShaderCache *__fastcall CRenderingTechniqueFragment::GetUniqueShaderCache(CRenderingTechniqueFragment *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v7; // rax

  v1 = *((_QWORD *)this + 4);
  v2 = *((_QWORD *)this + 1);
  v3 = (*((_QWORD *)this + 5) - v1) >> 4;
  v4 = 0;
  if ( !(_DWORD)v3 )
    return (struct CShaderCache *)v2;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v1 + 16LL * v4 + 8);
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 8);
      if ( !v7 )
        return 0LL;
      if ( !v2 )
      {
        v2 = v7;
        goto LABEL_3;
      }
      if ( v7 != v2 )
        return 0LL;
    }
LABEL_3:
    if ( ++v4 >= (unsigned int)v3 )
      return (struct CShaderCache *)v2;
  }
}
