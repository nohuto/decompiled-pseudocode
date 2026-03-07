__int64 __fastcall AlpcpCaptureDirectAttribute32(unsigned int *a1, void *a2, __int64 a3, int a4, int a5)
{
  char v6; // dl
  NTSTATUS v7; // r9d
  void *v9; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  v6 = _bittest(&a5, 0x1Du) & ((a4 & 0x10010) == 0);
  v7 = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
  {
    v9 = (void *)*a1;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v7 >= 0 )
      *(_QWORD *)(a3 + 56) = (unsigned __int64)Object | 3;
  }
  return (unsigned int)v7;
}
