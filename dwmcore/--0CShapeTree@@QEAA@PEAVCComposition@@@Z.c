CShapeTree *__fastcall CShapeTree::CShapeTree(CShapeTree *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CShapeTree *result; // rax

  *((_QWORD *)this + 8) = &CContainerVectorShape::`vbtable'{for `CContent'};
  *((_QWORD *)this + 20) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 19) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 4LL) + 160) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContainerVectorShape::CContainerVectorShape(this, a2);
  *(_QWORD *)this = &CShapeTree::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CShapeTree::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 72;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 88;
  return result;
}
