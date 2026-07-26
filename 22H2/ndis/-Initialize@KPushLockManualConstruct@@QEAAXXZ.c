/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00F9928
 * Callers:
 *     DriverEntry @ 0x1C01448F0 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C0146938 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1C01479C4 (-ndisPcwInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
