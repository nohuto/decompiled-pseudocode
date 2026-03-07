__int64 __fastcall NtFlipObjectQueryEndpointConnected(void *a1, int a2, _DWORD *a3)
{
  bool v6; // si
  char v7; // r8
  int IsEndpointConnected; // ebx
  bool v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  if ( a1 && a3 )
  {
    Object = 0LL;
    v6 = 0;
    v10 = 0;
    KeEnterCriticalRegion();
    IsEndpointConnected = FlipManagerObject::ResolveHandle(a1, 0, v7, (struct FlipManagerObject **)&Object);
    if ( IsEndpointConnected >= 0 )
    {
      IsEndpointConnected = FlipManagerObject::IsEndpointConnected((FlipManagerObject *)Object, a2 != 0, &v10);
      v6 = v10;
    }
    if ( IsEndpointConnected >= 0 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = v6;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)IsEndpointConnected;
}
