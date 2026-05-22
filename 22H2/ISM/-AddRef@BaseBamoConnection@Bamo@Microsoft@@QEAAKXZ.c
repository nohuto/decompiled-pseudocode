/*
 * XREFs of ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180032578
 * Callers:
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180032410 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180033100 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ??0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x180110B00 (--0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 *     ?RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180171CA0 (-RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Mic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::AddRef(Microsoft::Bamo::BaseBamoConnection *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 24LL))(this)
                                                                       + 8));
}
