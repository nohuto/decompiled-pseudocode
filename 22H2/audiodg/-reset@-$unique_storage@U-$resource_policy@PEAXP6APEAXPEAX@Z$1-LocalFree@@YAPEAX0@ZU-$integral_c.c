/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001438C
 * Callers:
 *     _lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator() @ 0x140013E1C (_lambda_469503bf6dae88a4a10e2b9fb17df9f1_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    LocalFree(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
