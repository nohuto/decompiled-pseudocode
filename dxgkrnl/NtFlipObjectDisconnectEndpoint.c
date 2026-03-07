__int64 __fastcall NtFlipObjectDisconnectEndpoint(void *a1, int a2)
{
  int v4; // ebx
  char v5; // r8
  unsigned int v6; // edx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Object = 0LL;
    KeEnterCriticalRegion();
    v6 = 2;
    if ( !a2 )
      v6 = 1;
    v4 = FlipManagerObject::ResolveHandle(a1, v6, v5, (struct FlipManagerObject **)&Object);
    if ( v4 >= 0 )
      v4 = FlipManagerObject::DisconnectEndpoint((FlipManagerObject *)Object, a2 != 0);
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
