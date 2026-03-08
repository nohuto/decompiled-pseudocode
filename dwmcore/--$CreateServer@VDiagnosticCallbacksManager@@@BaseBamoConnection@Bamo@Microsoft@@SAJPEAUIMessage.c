/*
 * XREFs of ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800AF3D0
 * Callers:
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC614 (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x1800ACCEC (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 *     ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x1800AF64C (--0DiagnosticCallbacksManager@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B5970 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 Microsoft::Bamo::BaseBamoConnection::CreateServer<DiagnosticCallbacksManager>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3,
        ...)
{
  DiagnosticCallbacksManager **v3; // rsi
  DiagnosticCallbacksManager *v7; // rax
  DiagnosticCallbacksManager *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // [rsp+20h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DiagnosticCallbacksManager *v17; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  DiagnosticCallbacksManager **v19; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, DiagnosticCallbacksManager *);
  v19 = va_arg(va1, DiagnosticCallbacksManager **);
  v3 = v19;
  *v19 = 0LL;
  v7 = (DiagnosticCallbacksManager *)DefaultHeap::AllocClear(0x110uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v17 = DiagnosticCallbacksManager::DiagnosticCallbacksManager(v7);
  v8 = v17;
  if ( v17 )
  {
    v15 = *a3;
    v9 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
           (__int64)v17,
           a1,
           a2,
           &v15,
           L"Microsoft.DiagCallbackConversation");
    v10 = v9;
    if ( v9 >= 0 )
    {
      *v3 = v8;
      return 0LL;
    }
    v13 = (unsigned int)v9;
    v12 = 2785LL;
  }
  else
  {
    v10 = -2147024882;
    v12 = 2783LL;
    v13 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
    (const char *)v13,
    v14);
  wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>((DiagnosticCallbacksManager **)va);
  return v10;
}
