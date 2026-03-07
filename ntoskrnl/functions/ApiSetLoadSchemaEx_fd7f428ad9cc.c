__int64 __fastcall ApiSetLoadSchemaEx(__int64 a1, _QWORD *a2, size_t *a3)
{
  int v5; // ebx
  __int64 ImageSection; // rax
  size_t v7; // rsi
  char *v8; // r14
  void *Pool2; // rax
  void *v10; // rbp
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = 0LL;
  BaseAddress = 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, __int64, PVOID *, _QWORD *))ApiSetpLoadSchemaImage)(a1, a1, &BaseAddress, v12);
  if ( v5 >= 0 )
  {
    ImageSection = ApiSetpFindImageSection(BaseAddress);
    if ( ImageSection )
    {
      v7 = *(unsigned int *)(ImageSection + 16);
      v8 = (char *)BaseAddress + *(unsigned int *)(ImageSection + 20);
      Pool2 = (void *)ExAllocatePool2(256LL, v7, 1751339841LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v8, v7);
        *a2 = v10;
        *a3 = v7;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    else
    {
      v5 = -1073741701;
    }
  }
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return (unsigned int)v5;
}
