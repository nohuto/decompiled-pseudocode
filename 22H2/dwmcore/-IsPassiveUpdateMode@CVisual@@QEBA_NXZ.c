/*
 * XREFs of ?IsPassiveUpdateMode@CVisual@@QEBA_NXZ @ 0x1800DB830
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063690 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsPassiveUpdateMode(CVisual *this)
{
  while ( this && (*((_BYTE *)this + 102) & 8) == 0 )
    this = (CVisual *)*((_QWORD *)this + 11);
  return this != 0LL;
}
