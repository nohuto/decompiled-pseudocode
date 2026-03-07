__int64 __fastcall CTokenManager::OpenEventForSynchonize(void *a1, void **a2)
{
  unsigned int v3; // ebx
  NTSTATUS v4; // eax
  PVOID v5; // rsi
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  *a2 = (void *)-1LL;
  v3 = -1073741811;
  if ( a1 )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v5 = Object;
    v3 = v4;
    if ( v4 >= 0 )
    {
      v3 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, a2);
      ObfDereferenceObject(v5);
    }
  }
  return v3;
}
