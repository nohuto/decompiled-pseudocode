/*
 * XREFs of ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B4320
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800B46F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800B4254 (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014E3BC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::Create(
        struct IMessageSession *a1,
        struct DiagnosticCallbacksManager **a2)
{
  const char *v4; // r9
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // r9
  unsigned int LastError; // ebx
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-20h]
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
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
                  (void *)0x29,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
                  v4);
    goto LABEL_7;
  }
  v5 = *(_QWORD *)a1;
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IMessageSession *, PSECURITY_DESCRIPTOR, __int64 *))(v5 + 64))(
         a1,
         SecurityDescriptor,
         &v15);
  LastError = v6;
  if ( v6 < 0 )
  {
    v11 = 46LL;
  }
  else
  {
    *(_QWORD *)&v13 = 0LL;
    DWORD2(v13) = 1;
    v6 = Microsoft::Bamo::BaseBamoConnection::CreateServer<DiagnosticCallbacksManager>((__int64 *)a1, v15, &v13, v7, a2);
    LastError = v6;
    if ( v6 >= 0 )
    {
      LastError = 0;
      goto LABEL_5;
    }
    v11 = 53LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
    (const char *)(unsigned int)v6,
    v12);
LABEL_5:
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_7:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return LastError;
}
