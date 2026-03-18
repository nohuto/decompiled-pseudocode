/*
 * XREFs of ?AcquireLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ @ 0x180102C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::AcquireLock(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 144));
}
