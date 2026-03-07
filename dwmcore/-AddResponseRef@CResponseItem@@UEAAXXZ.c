void __fastcall CResponseItem::AddResponseRef(CResponseItem *this)
{
  CMILRefCountImpl::AddReference((CResponseItem *)((char *)this + 8));
  ++*((_DWORD *)this + 4);
}
