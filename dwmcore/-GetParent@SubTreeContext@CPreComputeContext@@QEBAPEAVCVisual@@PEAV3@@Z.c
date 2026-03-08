/*
 * XREFs of ?GetParent@SubTreeContext@CPreComputeContext@@QEBAPEAVCVisual@@PEAV3@@Z @ 0x18006D860
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CPreComputeContext::SubTreeContext::GetParent(
        CPreComputeContext::SubTreeContext *this,
        struct CVisual *a2)
{
  if ( a2 == *(struct CVisual **)(*((_QWORD *)this + 54) + 64LL) )
    return 0LL;
  else
    return (struct CVisual *)*((_QWORD *)a2 + 11);
}
