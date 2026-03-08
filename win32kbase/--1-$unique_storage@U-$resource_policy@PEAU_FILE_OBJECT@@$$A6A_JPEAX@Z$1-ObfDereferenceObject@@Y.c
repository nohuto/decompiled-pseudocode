/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0072224
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00DE8C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDere.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx
  LONG_PTR result; // rax

  v1 = *a1;
  if ( v1 )
    return ObfDereferenceObject(v1);
  return result;
}
