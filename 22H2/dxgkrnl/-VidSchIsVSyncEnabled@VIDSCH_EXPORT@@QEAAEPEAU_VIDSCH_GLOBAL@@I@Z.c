/*
 * XREFs of ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00420D8
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C005790C (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchIsVSyncEnabled(VIDSCH_EXPORT *this, struct _VIDSCH_GLOBAL *a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD))(*((_QWORD *)this + 1) + 544LL))(a2, a3);
}
