/*
 * XREFs of ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0018684
 * Callers:
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C001855C (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003540 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00035E0 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C001AC80 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiAllocatePacketFromGuaranteedPacketPool(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v3; // r14
  unsigned int v4; // ebp
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v3 = (KSPIN_LOCK *)(v2 + 1736);
  v4 = *(_DWORD *)(v2 + 152) * ((*(_DWORD *)(v2 + 76) << 6) + ((8 * *(_DWORD *)(v2 + 76) + 231) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v2 + 76) + 111);
  if ( v4 <= 0x460 )
    v4 = 1120;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1736), (_QWORD **)a1 + 92, (_DWORD *)a1 + 188);
  v6 = v5;
  if ( !v5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 3584LL, v2, a1, (char *)a1 + 776);
    __debugbreak();
    JUMPOUT(0x1C002C18FLL);
  }
  v7 = v5 - 1;
  if ( v5 != (_QWORD *)8 )
  {
    memset(v5 - 1, 0, v4);
    *((_DWORD *)v7 + 16) |= 0x40u;
    v7[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v7 + 13) = 1;
    VidSchiInterlockedInsertTailList(v3, (__int64)a1 + 760, v6, (_DWORD *)a1 + 194);
  }
  return (struct _VIDSCH_QUEUE_PACKET *)v7;
}
