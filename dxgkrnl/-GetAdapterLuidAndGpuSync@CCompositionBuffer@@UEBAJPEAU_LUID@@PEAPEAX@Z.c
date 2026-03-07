__int64 __fastcall CCompositionBuffer::GetAdapterLuidAndGpuSync(CCompositionBuffer *this, struct _LUID *a2, void **a3)
{
  struct _LUID v5; // rcx
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(struct _LUID *)(*(__int64 (__fastcall **)(CCompositionBuffer *, char *))(*(_QWORD *)this + 96LL))(this, &v7);
  result = 3221225474LL;
  *a2 = v5;
  *a3 = 0LL;
  return result;
}
