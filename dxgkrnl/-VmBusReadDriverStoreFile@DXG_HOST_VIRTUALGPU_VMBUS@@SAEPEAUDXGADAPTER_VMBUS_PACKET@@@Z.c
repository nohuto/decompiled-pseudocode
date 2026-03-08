/*
 * XREFs of ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037FD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC74 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z @ 0x1C0308088 (-ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z.c)
 *     MapGpadl @ 0x1C03916D0 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C03919D0 (UnmapGpadl.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReadDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  union _LARGE_INTEGER *v4; // rsi
  struct _KTHREAD **v5; // rdx
  __int64 v6; // rax
  union _LARGE_INTEGER *v7; // rcx
  LONG *p_HighPart; // rdx
  _QWORD *v9; // r11
  ULONG *v10; // r14
  PMDL v11; // r10
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  PVOID MappedSystemVa; // rdx
  PVOID v15; // rax
  _BYTE v17[8]; // [rsp+50h] [rbp-30h] BYREF
  DXGPUSHLOCK *v18; // [rsp+58h] [rbp-28h]
  int v19; // [rsp+60h] [rbp-20h]
  _BYTE v20[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGPUSHLOCK *v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+78h] [rbp-8h]
  int CurrentFile; // [rsp+B0h] [rbp+30h] BYREF
  PMDL MemoryDescriptorList; // [rsp+B8h] [rbp+38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v22 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 5787LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5787LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  v4 = (union _LARGE_INTEGER *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_20;
  v5 = (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 56LL);
  MemoryDescriptorList = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, v5, 0);
  DXGPUSHLOCK::AcquireExclusive(v18);
  v6 = *((_QWORD *)a1 + 10);
  v19 = 2;
  if ( !*(_QWORD *)(v6 + 336) )
  {
    CurrentFile = -1073741811;
    v7 = v4 + 4;
    p_HighPart = &v4[4].HighPart;
    v9 = (_QWORD *)((char *)a1 + 96);
LABEL_16:
    v11 = MemoryDescriptorList;
    goto LABEL_17;
  }
  v10 = (ULONG *)&v4[4];
  CurrentFile = MapGpadl(*((_QWORD *)a1 + 12), (unsigned int)v4[4].HighPart, v4[4].LowPart, &MemoryDescriptorList);
  v7 = v4 + 4;
  p_HighPart = &v4[4].HighPart;
  v9 = (_QWORD *)((char *)a1 + 96);
  if ( CurrentFile < 0 )
    goto LABEL_16;
  v11 = MemoryDescriptorList;
  v12 = *v10;
  if ( (unsigned int)v12 > MemoryDescriptorList->ByteCount )
    goto LABEL_17;
  v13 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 336LL) + 1584LL);
  v7 = v4 + 4;
  if ( v12 > v13 || v4[3].QuadPart > v13 - v12 )
    goto LABEL_17;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  }
  else
  {
    v15 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v11 = MemoryDescriptorList;
    MappedSystemVa = v15;
  }
  if ( MappedSystemVa )
  {
    CurrentFile = CDriverStoreCopy::ReadCurrentFile(
                    *(const WCHAR **)(*((_QWORD *)a1 + 10) + 336LL),
                    MappedSystemVa,
                    v4[3],
                    *v10);
    v7 = v4 + 4;
    p_HighPart = &v4[4].HighPart;
    v9 = (_QWORD *)((char *)a1 + 96);
    goto LABEL_16;
  }
  CurrentFile = -1073741801;
  v7 = v4 + 4;
  p_HighPart = &v4[4].HighPart;
  v9 = (_QWORD *)((char *)a1 + 96);
LABEL_17:
  if ( v11 )
    UnmapGpadl(*v9, (unsigned int)*p_HighPart, v7->LowPart, v11);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &CurrentFile, 4u);
  v3 = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v3;
}
