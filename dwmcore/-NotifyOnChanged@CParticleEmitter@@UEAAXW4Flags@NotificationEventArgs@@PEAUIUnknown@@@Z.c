/*
 * XREFs of ?NotifyOnChanged@CParticleEmitter@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18023E420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitter::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 72LL))(*(_QWORD *)(a1 + 72));
  return CResource::NotifyOnChanged(a1, a2, a3);
}
