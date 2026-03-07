__int64 __fastcall DxgkQueryHostCompSurfInfo(void *a1, unsigned int *a2, unsigned __int64 *a3)
{
  int v5; // edi
  PVOID v6; // rbx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = 0LL;
  v5 = CompositionSurfaceObject::ResolveHandle(a1, 1u, (__int64)a3, (struct CompositionSurfaceObject **)&Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    v5 = (**((__int64 (__fastcall ***)(char *, unsigned int *, unsigned __int64 *))Object + 4))(
           (char *)Object + 32,
           a2,
           a3);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
