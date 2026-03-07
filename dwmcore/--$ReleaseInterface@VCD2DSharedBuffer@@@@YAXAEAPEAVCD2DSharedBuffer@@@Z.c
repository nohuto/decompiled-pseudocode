__int64 __fastcall ReleaseInterface<CD2DSharedBuffer>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 2;
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 48LL))(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        --*v3;
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 40LL))(v1, 1LL);
      }
    }
    *a1 = 0LL;
  }
  return result;
}
