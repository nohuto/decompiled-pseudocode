__int64 __fastcall CDepthSortingPreComputeHelper::PreComputePostSubgraph(
        CDepthSortingPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        struct CVisual *a4)
{
  __int64 DepthSortedList; // rax
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+70h] [rbp-18h]

  if ( *((_DWORD *)a3 + 27) == 3 )
  {
    DepthSortedList = CVisual::CreateDepthSortedList(a3);
    if ( !(unsigned __int8)CDepthSortedVisualCollection::SortVisuals(*((_QWORD *)this + 1) - 56LL, DepthSortedList) )
      CVisual::DeleteDepthSortedList(a3);
    CDepthSortedVisualCollection::`scalar deleting destructor'((CDepthSortedVisualCollection *)(*((_QWORD *)this + 1)
                                                                                              - 56LL));
    *((_QWORD *)this + 1) -= 56LL;
  }
  else
  {
    CVisual::DeleteDepthSortedList(a3);
  }
  if ( a4 && *((_DWORD *)a4 + 27) == 3 )
  {
    v11 = 0;
    CVisual::GetWorldTransform(a3, a2, 1, (struct CMILMatrix *)v10, 0LL, 0LL);
    CDepthSortedVisualCollection::AddVisual(
      (CDepthSortedVisualCollection *)(*((_QWORD *)this + 1) - 56LL),
      a3,
      (struct CMILMatrix *)v10);
  }
  return 0LL;
}
