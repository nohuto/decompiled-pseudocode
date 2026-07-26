/*
 * XREFs of ndisDriverReinit @ 0x1C003A180
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAoAcInitDisconnectedStandby@@YAXXZ @ 0x1C005B1CC (-ndisAoAcInitDisconnectedStandby@@YAXXZ.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0107940 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 */

void __fastcall ndisDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  ndisIfEnsureNsiInitialized();
  if ( (ndisAoAcCapable || ndisAoAcTest) && !ndisEnforceDisconnectedStandby )
    ndisAoAcInitDisconnectedStandby();
  ndisBootFinishedTime.QuadPart = MEMORY[0xFFFFF78000000014];
}
