__int64 __fastcall ReleaseInterface<CSharedSection>(CResource **a1)
{
  CResource *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CResource::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
