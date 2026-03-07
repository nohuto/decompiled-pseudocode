__int64 __fastcall CTokenManager::ReferenceAdapter(CTokenManager *this, struct _LUID a2, struct IAdapter **a3)
{
  __int64 result; // rax
  struct CAdapter *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  result = CAdapterCollection::ReferenceAdapter((CTokenManager *)((char *)this + 112), a2, &v5);
  *a3 = v5;
  return result;
}
