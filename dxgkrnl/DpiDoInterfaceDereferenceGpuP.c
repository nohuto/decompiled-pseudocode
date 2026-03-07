LONG_PTR __fastcall DpiDoInterfaceDereferenceGpuP(_DWORD *a1)
{
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  DpiGetVirtualGpuType(a1, &Object);
  return ObfDereferenceObject(Object);
}
