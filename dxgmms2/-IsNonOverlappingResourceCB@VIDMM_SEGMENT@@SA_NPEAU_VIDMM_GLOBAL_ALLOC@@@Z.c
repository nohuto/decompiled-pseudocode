char __fastcall VIDMM_SEGMENT::IsNonOverlappingResourceCB(_VIDMM_GLOBAL_ALLOC_NONPAGED **a1)
{
  __int64 v1; // r8
  _QWORD **v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // r9
  int **v5; // r9
  int *v6; // rdx
  int *v7; // rax

  if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(a1[67]) )
    return 1;
  v2 = (_QWORD **)(v1 + 272);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    v5 = (int **)(v4 - 2);
    v6 = *v5;
    while ( v6 != (int *)v5 )
    {
      v7 = v6;
      v6 = *(int **)v6;
      if ( v7[16] > 0 )
        return 1;
    }
  }
  return 0;
}
