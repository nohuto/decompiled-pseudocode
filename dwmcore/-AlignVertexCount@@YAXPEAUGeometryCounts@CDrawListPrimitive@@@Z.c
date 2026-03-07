void __fastcall AlignVertexCount(struct CDrawListPrimitive::GeometryCounts *a1)
{
  int v1; // eax
  bool v2; // zf

  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v1 = *(_DWORD *)a1 - (*(_DWORD *)a1 & 1) + 2;
    v2 = *((_DWORD *)a1 + 1) == 0;
    *(_DWORD *)a1 = v1;
    if ( !v2 )
      *((_DWORD *)a1 + 1) = v1;
  }
}
