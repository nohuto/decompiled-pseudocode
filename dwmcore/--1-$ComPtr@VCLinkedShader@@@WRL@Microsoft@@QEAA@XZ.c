volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CLinkedShader>::~ComPtr<CLinkedShader>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)CMILRefCountBaseT<IMILRefCount>::InternalRelease(result);
  }
  return result;
}
