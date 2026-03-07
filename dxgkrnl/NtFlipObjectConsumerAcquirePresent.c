__int64 __fastcall NtFlipObjectConsumerAcquirePresent(void *a1, unsigned int a2, unsigned int a3, char *a4, char *a5)
{
  size_t v7; // r14
  int v9; // ebx
  void *v10; // r12
  struct CFlipPropertySet *v11; // rdi
  char v12; // r8
  __int64 v13; // rdx
  struct CFlipPropertySet *v15; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  void *v17; // [rsp+40h] [rbp-28h] BYREF

  v7 = a2;
  if ( (!a2 || a4) && (!a3 || a5) )
  {
    Object = 0LL;
    v10 = 0LL;
    v17 = 0LL;
    v11 = 0LL;
    v15 = 0LL;
    KeEnterCriticalRegion();
    v9 = FlipManagerObject::ResolveHandle(a1, 1u, v12, (struct FlipManagerObject **)&Object);
    if ( v9 >= 0 )
    {
      v9 = FlipManagerObject::ConsumerAcquirePresent((FlipManagerObject *)Object, v7, a3, &v17, &v15);
      v10 = v17;
      v11 = v15;
    }
    if ( v9 >= 0 )
    {
      if ( (_DWORD)v7 )
      {
        if ( (unsigned __int64)&a4[v7] > MmUserProbeAddress || &a4[v7] <= a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v10, v7);
      }
      if ( a3 )
        CFlipPropertySetBase::WriteSerializedProperties__lambda_e99d979129121065e2eb9a95ec4ea8f5___(
          (__int64)v11,
          v13,
          a5);
    }
    if ( v11 )
      CFlipPropertySetBase::Release(v11);
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
