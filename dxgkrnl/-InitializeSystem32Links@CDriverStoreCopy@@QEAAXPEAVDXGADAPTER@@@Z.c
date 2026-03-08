/*
 * XREFs of ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03078F8
 * Callers:
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0308230 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AF50 (-VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DpiGetPnpRegistryKeyName @ 0x1C01DC130 (DpiGetPnpRegistryKeyName.c)
 *     ?EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C03076D8 (-EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall CDriverStoreCopy::InitializeSystem32Links(CDriverStoreCopy *this, struct DXGADAPTER *a2)
{
  int PnpRegistryKeyName; // eax
  __int64 v5; // r8
  int v6; // eax
  struct _UNICODE_STRING *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 27), 3, (__int64 *)&v7);
  if ( PnpRegistryKeyName >= 0 )
  {
    v6 = CDriverStoreCopy::EnumSingleDriverKey(this, v7);
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(3LL, v6);
      return;
    }
    PnpRegistryKeyName = DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 27), 2, (__int64 *)&v7);
    if ( PnpRegistryKeyName >= 0 )
    {
      PnpRegistryKeyName = CDriverStoreCopy::EnumSingleDriverKey(this, v7);
      if ( PnpRegistryKeyName >= 0 )
        return;
      v5 = 1143LL;
    }
    else
    {
      v5 = 1137LL;
    }
  }
  else
  {
    v5 = 1124LL;
  }
  WdLogSingleEntry2(3LL, PnpRegistryKeyName, v5);
}
