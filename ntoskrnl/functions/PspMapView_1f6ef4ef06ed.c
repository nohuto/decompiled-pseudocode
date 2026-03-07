NTSTATUS __fastcall PspMapView(__int64 a1)
{
  PVOID v2; // rdi
  KPROCESSOR_MODE v3; // r9
  ACCESS_MASK v4; // edx
  void *v5; // rcx
  NTSTATUS result; // eax
  int v7; // esi
  ULONGLONG v8; // [rsp+48h] [rbp-30h]
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 61) )
  {
    v2 = *(PVOID *)(a1 + 24);
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 60);
    v4 = *(_DWORD *)(a1 + 56);
    v5 = *(void **)(a1 + 24);
    Object = 0LL;
    result = ObReferenceObjectByHandle(v5, v4, MmSectionObjectType, v3, &Object, 0LL);
    v2 = Object;
    if ( result < 0 )
      return result;
  }
  LODWORD(v8) = 0;
  v7 = MiMapViewOfSectionExCommon(
         (int)v2,
         *(_QWORD *)(a1 + 16),
         1,
         (int)a1 + 32,
         a1 + 40,
         a1 + 48,
         *(_DWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 12),
         0LL,
         v8,
         0,
         0LL,
         0,
         0x2000000);
  if ( v7 >= 0 && *(_BYTE *)(a1 + 62) )
  {
    *(_QWORD *)(a1 + 24) = v2;
  }
  else if ( !*(_BYTE *)(a1 + 61) )
  {
    ObfDereferenceObject(v2);
  }
  return v7;
}
