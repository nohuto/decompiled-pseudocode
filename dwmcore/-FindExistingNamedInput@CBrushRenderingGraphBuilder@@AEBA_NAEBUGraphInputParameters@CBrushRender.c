bool __fastcall CBrushRenderingGraphBuilder::FindExistingNamedInput(
        CBrushRenderingGraphBuilder *this,
        const struct CBrushRenderingGraph::GraphInputParameters *a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // r10d
  __int64 v6; // r9

  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v5 = *(_DWORD *)(v3 + 40);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v3 + 16);
    do
    {
      if ( *(_QWORD *)(v6 + 24 * v4) == *(_QWORD *)a2
        && *(_QWORD *)(v6 + 24 * v4 + 8) == *((_QWORD *)a2 + 1)
        && *(_DWORD *)(v6 + 24 * v4 + 16) == *((_DWORD *)a2 + 4) )
      {
        break;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  *a3 = v4;
  return (unsigned int)v4 < v5;
}
