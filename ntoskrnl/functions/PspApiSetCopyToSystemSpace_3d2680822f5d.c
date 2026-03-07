__int64 __fastcall PspApiSetCopyToSystemSpace(void *Src, size_t Size, _QWORD *a3, _QWORD *a4)
{
  int v8; // eax
  PVOID v9; // rsi
  int v10; // edi
  size_t v11; // r8
  void *v12; // rbx
  void *v14; // [rsp+40h] [rbp-20h] BYREF
  size_t v15; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+38h] BYREF

  v14 = 0LL;
  Object = 0LL;
  v16 = 0LL;
  v15 = Size;
  v8 = MmCreateSection((int)&Object, 983071LL, 0, &v15, 4, 0x8000000, 0LL, 0LL);
  v9 = Object;
  v10 = v8;
  if ( v8 >= 0 )
  {
    Object = 0LL;
    v10 = MiMapViewInSystemSpace((__int64)v9, &v14, &v16, &Object, 0LL, 0LL);
    if ( v10 >= 0 )
    {
      v11 = Size;
      v12 = v14;
      memmove(v14, Src, v11);
      *a3 = v9;
      *a4 = v12;
    }
  }
  if ( v9 && v10 < 0 )
    ObfDereferenceObject(v9);
  return (unsigned int)v10;
}
