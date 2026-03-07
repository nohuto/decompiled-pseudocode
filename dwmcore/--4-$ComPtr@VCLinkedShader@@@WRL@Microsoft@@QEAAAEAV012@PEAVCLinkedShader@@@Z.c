__int64 *__fastcall Microsoft::WRL::ComPtr<CLinkedShader>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v4);
  }
  return a1;
}
