__int64 __fastcall NtFlipObjectConsumerBeginProcessPresent(void *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  char v8; // r8
  int v9; // ebx
  PVOID Object; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    Object = 0LL;
    v6 = 0;
    v12 = 0;
    v7 = 0;
    v13 = 0;
    KeEnterCriticalRegion();
    v9 = FlipManagerObject::ResolveHandle(a1, 1u, v8, (struct FlipManagerObject **)&Object);
    if ( v9 >= 0 )
    {
      v9 = FlipManagerObject::ConsumerBeginProcessPresent((FlipManagerObject *)Object, &v12, &v13);
      v6 = v12;
      v7 = v13;
    }
    if ( v9 >= 0 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a2 = v6;
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = v7;
    }
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
