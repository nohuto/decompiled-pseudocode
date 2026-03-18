/*
 * XREFs of ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x1800AD450
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800AF930 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800AFB30 (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800ACD90 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int16 *a5)
{
  __int64 v8; // rax
  char v10[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  *(_OWORD *)v10 = *a4;
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v8, a2, a3, v10, a5);
}
