void **__fastcall DDisplayTaskPoolResources::operator=(void **a1, void **a2)
{
  void *v2; // rax
  void *v5; // rcx
  void *v6; // rax
  void *v7; // rcx
  void **v8; // rsi
  void *v9; // rax
  void *v10; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v2;
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a2[1];
  a2[1] = 0LL;
  v7 = a1[1];
  a1[1] = v6;
  if ( v7 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = a2 + 2;
  if ( a1 + 2 != a2 + 2 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      a1 + 2,
      *v8);
    *v8 = 0LL;
  }
  v9 = a2[3];
  a2[3] = 0LL;
  v10 = a1[3];
  a1[3] = v9;
  if ( v10 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  return a1;
}
