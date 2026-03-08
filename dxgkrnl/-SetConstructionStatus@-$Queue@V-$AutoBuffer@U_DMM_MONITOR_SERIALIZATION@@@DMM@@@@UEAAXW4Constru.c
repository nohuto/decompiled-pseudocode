/*
 * XREFs of ?SetConstructionStatus@?$Queue@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@UEAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C004B6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::SetConstructionStatus(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 8LL))(a1 + 8);
}
