/*
 * XREFs of ?Destroy@UmfdUMBuffer@@SAXPEAV1@@Z @ 0x1C00BCAE4
 * Callers:
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00BCAB0 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdUMBuffer::Destroy(_QWORD *pv)
{
  void *v1; // rax
  void *v3; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void *)pv[1];
  if ( v1 )
  {
    RegionSize = 0LL;
    BaseAddress = v1;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  v3 = (void *)pv[3];
  if ( v3 )
  {
    RegionSize = 0LL;
    BaseAddress = v3;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  EngFreeMem(pv);
}
