__int64 __fastcall ReplaceInterface<CSharedSection,CSharedSection>(CResource **a1, __int64 a2)
{
  CResource *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CResource::InternalRelease(v4);
  *a1 = (CResource *)a2;
  if ( a2 )
    return CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  return result;
}
