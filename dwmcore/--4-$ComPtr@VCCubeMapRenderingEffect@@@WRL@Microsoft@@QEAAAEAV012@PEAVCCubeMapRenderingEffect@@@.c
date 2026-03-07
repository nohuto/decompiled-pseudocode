__int64 *__fastcall Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::InternalRelease(&v5);
  }
  return a1;
}
