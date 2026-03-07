__int64 __fastcall CVisual::GetWorldTransform(
        CVisual *a1,
        const struct CVisualTree *a2,
        int a3,
        struct CMILMatrix *a4,
        bool *a5,
        struct CMILMatrix *a6)
{
  unsigned int v10; // ebx
  struct CTreeData *TreeData; // rax
  unsigned int v12; // ecx
  struct CTreeData *v13; // rsi
  bool v14; // di
  bool v16; // [rsp+30h] [rbp-28h] BYREF

  v10 = 0;
  TreeData = CVisual::FindTreeData(a1, a2);
  v13 = TreeData;
  if ( TreeData )
  {
    v14 = 0;
    v16 = 0;
    if ( a3 != 5 || *((_QWORD *)TreeData + 31) && CVisualTree::_IsInTree(a2, (__int64)a1, 1) )
    {
      CVisual::EnsureWorldTransform(a1, a2, v13);
      CTreeData::GetWorldTransform(v13, a4, &v16, a6);
      v14 = v16;
    }
    else
    {
      CMILMatrix::SetToIdentity(a4);
      if ( a6 )
        CMILMatrix::SetToIdentity(a6);
    }
    if ( a5 )
      *a5 = v14;
  }
  else
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003292412, 0x6ADu, 0LL);
  }
  return v10;
}
