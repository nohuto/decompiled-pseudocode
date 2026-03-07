int __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int DeregisterEventSource(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int DeregisterEventSource(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return DeregisterEventSource(v1);
  return result;
}
