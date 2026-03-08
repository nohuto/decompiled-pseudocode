/*
 * XREFs of ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C001855C
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C000C470 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 * Callees:
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0018684 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiUpdatePriorityTables @ 0x1C0018770 (VidSchiUpdatePriorityTables.c)
 *     memset @ 0x1C001AC80 (memset.c)
 */

LONG __fastcall VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(__int128 *a1, int a2)
{
  __int128 v3; // xmm0
  __int64 v4; // rdi
  __int128 v5; // xmm1
  __int64 v6; // rbx
  struct _VIDSCH_QUEUE_PACKET *PacketFromGuaranteedPacketPool; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  LONG result; // eax
  _OWORD v14[5]; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+88h] [rbp+18h] BYREF

  v15 = a2;
  memset(v14, 0, sizeof(v14));
  v3 = *a1;
  v4 = *(_QWORD *)a1;
  v5 = a1[1];
  *((_QWORD *)&v14[1] + 1) = VidSchiExecuteMmIoFlipAtPassiveLevel;
  v14[3] = v3;
  v6 = *(_QWORD *)(v4 + 248);
  v14[4] = v5;
  DWORD2(v14[2]) = 5;
  PacketFromGuaranteedPacketPool = VidSchiAllocatePacketFromGuaranteedPacketPool((struct _VIDSCH_CONTEXT *)v6);
  *(_DWORD *)PacketFromGuaranteedPacketPool = 895576406;
  *((_DWORD *)PacketFromGuaranteedPacketPool + 12) = 6;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PacketFromGuaranteedPacketPool + 13) = 2;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 11) = v6;
  CurrentThread = KeGetCurrentThread();
  v9 = v14[1];
  v15 = 0;
  *((_OWORD *)PacketFromGuaranteedPacketPool + 17) = v14[0];
  *((_QWORD *)PacketFromGuaranteedPacketPool + 13) = CurrentThread;
  v10 = v14[2];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 18) = v9;
  v11 = v14[3];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 19) = v10;
  v12 = v14[4];
  *((_OWORD *)PacketFromGuaranteedPacketPool + 20) = v11;
  *((_OWORD *)PacketFromGuaranteedPacketPool + 21) = v12;
  result = VidSchiUpdatePriorityTables(v4, PacketFromGuaranteedPacketPool, &v15);
  ++*(_DWORD *)(v6 + 808);
  if ( v15 )
  {
    *(_QWORD *)(v4 + 1224) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1192), 0, 0);
  }
  return result;
}
