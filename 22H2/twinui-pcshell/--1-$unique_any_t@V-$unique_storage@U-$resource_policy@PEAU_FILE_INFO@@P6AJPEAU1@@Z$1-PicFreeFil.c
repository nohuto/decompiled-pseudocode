/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_INFO@@P6AJPEAU1@@Z$1?PicFreeFileInfo@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1804CDFFC
 * Callers:
 *     _GetAppInventoryData_::_1_::dtor$1 @ 0x1804CE509 (_GetAppInventoryData_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_INFO *,long (*)(_FILE_INFO *),&long PicFreeFileInfo(_FILE_INFO *),wistd::integral_constant<unsigned __int64,0>,_FILE_INFO *,_FILE_INFO *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_INFO *,long (*)(_FILE_INFO *),&long PicFreeFileInfo(_FILE_INFO *),wistd::integral_constant<unsigned __int64,0>,_FILE_INFO *,_FILE_INFO *,0,std::nullptr_t>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return PicFreeFileInfo();
  return result;
}
