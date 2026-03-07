NTSTATUS __fastcall CmSiMapViewOfSection(
        void *a1,
        HANDLE *a2,
        LARGE_INTEGER a3,
        ULONG_PTR a4,
        ULONG a5,
        int a6,
        PVOID *BaseAddress)
{
  PVOID *v7; // r8
  ULONG AllocationType; // [rsp+40h] [rbp-18h]
  LARGE_INTEGER v10; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = a4;
  AllocationType = a5;
  v10 = a3;
  v7 = BaseAddress;
  *BaseAddress = 0LL;
  return ZwMapViewOfSection(a1, *a2, v7, 0LL, 0LL, &v10, &v11, ViewUnmap, AllocationType, 2u);
}
