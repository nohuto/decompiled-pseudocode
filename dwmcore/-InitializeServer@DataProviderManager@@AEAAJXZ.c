/*
 * XREFs of ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1800FC86C
 * Callers:
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC400 (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800AF1D0 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@QEAA@XZ @ 0x180193C60 (--1-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180196B80 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801B59E0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 */

__int64 __fastcall DataProviderManager::InitializeServer(DataProviderManager *this)
{
  const char *v2; // r9
  __int64 v3; // rcx
  int v4; // eax
  unsigned int LastError; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v12; // [rsp+58h] [rbp+18h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-"
           "3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x30,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldataprovidermanager.cpp",
                  v2);
LABEL_13:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(&SecurityDescriptor);
    return LastError;
  }
  v3 = *((_QWORD *)this + 2);
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)v3 + 64LL))(
         v3,
         SecurityDescriptor,
         &v12);
  LastError = v4;
  if ( v4 < 0 )
  {
    v9 = 53LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldataprovidermanager.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>(&v12);
    goto LABEL_13;
  }
  *(_QWORD *)&v10 = 0LL;
  v6 = (__int64 *)*((_QWORD *)this + 2);
  DWORD2(v10) = 1;
  v4 = Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(v6, v12, &v10);
  LastError = v4;
  if ( v4 < 0 )
  {
    v9 = 65LL;
    goto LABEL_12;
  }
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return 0LL;
}
