CResponseItem *__fastcall CResponseItem::CResponseItem(CResponseItem *this, struct CGlobalSurfaceManager *a2)
{
  CMILRefCountImpl *v3; // rcx

  v3 = (CResponseItem *)((char *)this + 8);
  *(_QWORD *)this = &CResponseItem::`vftable';
  *(_DWORD *)v3 = 0;
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 3) = a2;
  *((_WORD *)this + 16) = 0;
  CMILRefCountImpl::AddReference(v3);
  return this;
}
