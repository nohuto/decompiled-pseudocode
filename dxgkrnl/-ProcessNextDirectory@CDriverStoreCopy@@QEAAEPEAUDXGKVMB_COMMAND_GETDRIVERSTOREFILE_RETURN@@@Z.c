/*
 * XREFs of ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0307B34
 * Callers:
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AAA0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003F8DC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0307228 (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 */

unsigned __int8 __fastcall CDriverStoreCopy::ProcessNextDirectory(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  void *v4; // rcx
  CDriverStoreCopy **v5; // rax
  CDriverStoreCopy **v6; // r11
  CDriverStoreCopy *v7; // rcx
  __int64 v9; // r11

  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 != (void *)-1LL )
  {
    ZwClose(v4);
    *((_QWORD *)this + 2) = -1LL;
  }
  v5 = (CDriverStoreCopy **)((char *)this + 1592);
  v6 = (CDriverStoreCopy **)*((_QWORD *)this + 199);
  if ( v6[1] != (CDriverStoreCopy *)((char *)this + 1592) || (v7 = *v6, *((CDriverStoreCopy ***)*v6 + 1) != v6) )
    __fastfail(3u);
  *v5 = v7;
  *((_QWORD *)v7 + 1) = v5;
  if ( v6 == v5 )
    return 0;
  *((_DWORD *)a2 + 4) = RtlStringCbCopyW((unsigned __int16 *)a2 + 30, 0x208uLL, (size_t *)v6 - 65);
  ExFreePoolWithTag((PVOID)(v9 - 520), 0);
  if ( *((int *)a2 + 4) >= 0 )
    CDriverStoreCopy::EnumDirectory(this, a2);
  return 1;
}
