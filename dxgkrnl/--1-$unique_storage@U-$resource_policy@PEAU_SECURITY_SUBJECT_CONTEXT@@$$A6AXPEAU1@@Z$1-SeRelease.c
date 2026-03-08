/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_SECURITY_SUBJECT_CONTEXT@@$$A6AXPEAU1@@Z$1?SeReleaseSubjectContext@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006ADF4
 * Callers:
 *     CheckCallerMatchesSid @ 0x1C03BE504 (CheckCallerMatchesSid.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_SECURITY_SUBJECT_CONTEXT *,void (_SECURITY_SUBJECT_CONTEXT *),&void SeReleaseSubjectContext(_SECURITY_SUBJECT_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,_SECURITY_SUBJECT_CONTEXT *,_SECURITY_SUBJECT_CONTEXT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SECURITY_SUBJECT_CONTEXT *,void (_SECURITY_SUBJECT_CONTEXT *),&void SeReleaseSubjectContext(_SECURITY_SUBJECT_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,_SECURITY_SUBJECT_CONTEXT *,_SECURITY_SUBJECT_CONTEXT *,0,std::nullptr_t>>(
        struct _SECURITY_SUBJECT_CONTEXT **a1)
{
  struct _SECURITY_SUBJECT_CONTEXT *v1; // rcx

  v1 = *a1;
  if ( v1 )
    SeReleaseSubjectContext(v1);
}
