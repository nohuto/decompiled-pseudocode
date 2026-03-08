/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_EJOB@@$$A6AXPEAU1@@Z$1?PsDetachSiloFromCurrentThread@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0016F80
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C01DDA00 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return PsDetachSiloFromCurrentThread();
  return result;
}
