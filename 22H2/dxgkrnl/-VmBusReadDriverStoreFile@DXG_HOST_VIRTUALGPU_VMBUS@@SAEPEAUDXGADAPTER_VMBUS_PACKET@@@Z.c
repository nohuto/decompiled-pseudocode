/*
 * XREFs of ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0246340
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00406AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     MapGpadl @ 0x1C0251E00 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C0252010 (UnmapGpadl.c)
 *     ?ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z @ 0x1C0264260 (-ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReadDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _KTHREAD **v8; // rdx
  __int64 v9; // rax
  PMDL v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  PVOID MappedSystemVa; // rax
  _BYTE v15[8]; // [rsp+30h] [rbp-30h] BYREF
  DXGPUSHLOCK *v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+40h] [rbp-20h]
  _BYTE v18[8]; // [rsp+48h] [rbp-18h] BYREF
  DXGPUSHLOCK *v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+58h] [rbp-8h]
  int CurrentFile; // [rsp+80h] [rbp+20h] BYREF
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v19);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v20 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 5151LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_20;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v7 )
    goto LABEL_20;
  v8 = (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 56LL);
  MemoryDescriptorList = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, v8, 0);
  DXGPUSHLOCK::AcquireExclusive(v16);
  v9 = *((_QWORD *)a1 + 5);
  v17 = 2;
  if ( !*(_QWORD *)(v9 + 312) )
  {
    CurrentFile = -1073741811;
LABEL_16:
    v10 = MemoryDescriptorList;
    goto LABEL_17;
  }
  CurrentFile = MapGpadl(
                  *((_QWORD *)a1 + 7),
                  *(unsigned int *)(v7 + 36),
                  *(unsigned int *)(v7 + 32),
                  &MemoryDescriptorList);
  if ( CurrentFile < 0 )
    goto LABEL_16;
  v10 = MemoryDescriptorList;
  v11 = *(unsigned int *)(v7 + 32);
  if ( (unsigned int)v11 > MemoryDescriptorList->ByteCount )
    goto LABEL_17;
  v12 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) + 1584LL);
  if ( v11 > v12 || *(_QWORD *)(v7 + 24) > v12 - v11 )
    goto LABEL_17;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  }
  else
  {
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v10 = MemoryDescriptorList;
  }
  if ( MappedSystemVa )
  {
    CurrentFile = CDriverStoreCopy::ReadCurrentFile(
                    *(CDriverStoreCopy **)(*((_QWORD *)a1 + 5) + 312LL),
                    MappedSystemVa,
                    *(_QWORD *)(v7 + 24),
                    *(_DWORD *)(v7 + 32));
    goto LABEL_16;
  }
  CurrentFile = -1073741801;
LABEL_17:
  if ( v10 )
    UnmapGpadl(*((_QWORD *)a1 + 7), *(unsigned int *)(v7 + 36), *(unsigned int *)(v7 + 32));
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &CurrentFile, 4u);
  v5 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v5;
}
