/*
 * XREFs of ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x1C00473D8
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C005790C (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchControlVSyncAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5)
{
  unsigned int v5; // r11d

  v5 = a3;
  LOBYTE(a3) = a4;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)(a1 + 8) + 552LL))(a2, v5, a3, a5);
}
