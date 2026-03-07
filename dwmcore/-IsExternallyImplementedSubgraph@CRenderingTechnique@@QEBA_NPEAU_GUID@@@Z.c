char __fastcall CRenderingTechnique::IsExternallyImplementedSubgraph(CRenderingTechnique *this, struct _GUID *a2)
{
  char v2; // bl

  v2 = 1;
  if ( (*((_BYTE *)this + 80) & 1) == 0 )
    return 0;
  if ( a2 )
    CRenderingTechniqueFragment::GetExternalImplementationId(*((CRenderingTechniqueFragment **)this + 1), a2);
  return v2;
}
