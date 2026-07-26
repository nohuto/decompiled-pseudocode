/*
 * XREFs of ?ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C00ACFDC
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C0126F10 (NdisMDeregisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

const struct NDIS_MINIPORT_HOOK_PROVIDER_INFO *__fastcall ndisMpHookGetHookUnsafe(int a1)
{
  return (MINIPORT_HOOK_DRIVER *)((char *)g_MiniportHookDrivers + 128 * (__int64)a1 + 24);
}
