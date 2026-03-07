__int64 __fastcall CMILCOMBaseT<IDDASwapChain>::Release(__int64 a1)
{
  __int64 *v1; // rsi
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rdx

  v1 = (__int64 *)(a1 - 32);
  v2 = (volatile signed __int32 *)(a1 - 32 + 16);
  v3 = _InterlockedDecrement(v2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 - 32 + 16));
    (*(void (__fastcall **)(__int64 *))(*v1 + 64))(v1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *v1;
      --*v2;
      (*(void (__fastcall **)(__int64 *, __int64))(v4 + 56))(v1, 1LL);
    }
  }
  return v3;
}
