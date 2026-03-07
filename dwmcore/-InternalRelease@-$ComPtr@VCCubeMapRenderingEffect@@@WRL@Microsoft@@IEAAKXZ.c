__int64 __fastcall Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::InternalRelease(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 result; // rax
  volatile signed __int32 *v3; // rsi
  unsigned __int32 v4; // ebx

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    v3 = v1 + 2;
    v4 = _InterlockedDecrement(v1 + 2);
    if ( !v4 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 96LL))(v1);
      v4 = _InterlockedDecrement(v3);
      if ( !v4 )
      {
        --*v3;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 88LL))(v1, 1LL);
      }
    }
    return v4;
  }
  return result;
}
