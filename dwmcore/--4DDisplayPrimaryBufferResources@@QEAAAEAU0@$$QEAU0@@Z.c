void **__fastcall DDisplayPrimaryBufferResources::operator=(void **a1, __int64 *a2)
{
  void *v2; // rax
  void *v5; // rcx
  void **v6; // rsi
  void *v7; // rax
  void *v8; // rcx

  v2 = (void *)*a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v2;
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (void **)(a2 + 1);
  if ( a1 + 1 != (void **)(a2 + 1) )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      a1 + 1,
      *v6);
    *v6 = 0LL;
  }
  v7 = (void *)a2[2];
  a2[2] = 0LL;
  v8 = a1[2];
  a1[2] = v7;
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  *((_BYTE *)a1 + 24) = *((_BYTE *)a2 + 24);
  return a1;
}
