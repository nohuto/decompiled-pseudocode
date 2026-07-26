/*
 * XREFs of NdisAllocatePacketPoolEx @ 0x1C0032560
 * Callers:
 *     ?ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z @ 0x1C00AC5D0 (-ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z.c)
 *     NdisAllocatePacketPool @ 0x1C00C1810 (NdisAllocatePacketPool.c)
 *     DriverEntry @ 0x1C01448F0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     NdisFreePacket @ 0x1C0032820 (NdisFreePacket.c)
 *     NdisAllocatePacket @ 0x1C00328E0 (NdisAllocatePacket.c)
 *     NdisPacketSize @ 0x1C0032B70 (NdisPacketSize.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

void __stdcall NdisAllocatePacketPoolEx(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT NumberOfOverflowDescriptors,
        UINT ProtocolReservedLength)
{
  PVOID v5; // rdi
  ULONG v10; // esi
  UINT v11; // edi
  UINT v12; // eax
  unsigned __int16 v13; // bp
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx
  UINT v16; // eax
  KIRQL v17; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v19; // rdi
  int v20; // eax
  KIRQL v21; // al
  _LIST_ENTRY *v22; // r8
  _LIST_ENTRY **v23; // rdx
  int v24; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PNDIS_PACKET Packet; // [rsp+68h] [rbp+10h] BYREF

  v5 = *PoolHandle;
  Packet = 0LL;
  v10 = 1886405710;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xAu,
      (struct _GUID *)&WPP_04c15853d33533e3b941c1f11ee3988a_Traceguids);
  *PoolHandle = 0LL;
  if ( ((((unsigned int)v5 & 0xFFFFFF) - 5260366LL) & 0xFFFFFFFFFFDFFFFFuLL) == 0 )
    v10 = (unsigned int)v5 & 0x7FFFFFFF;
  if ( NumberOfDescriptors > 0xFFFF )
    goto LABEL_27;
  v11 = NumberOfDescriptors + NumberOfOverflowDescriptors;
  if ( NumberOfDescriptors + NumberOfOverflowDescriptors < NumberOfDescriptors )
  {
    *Status = -1073741811;
    return;
  }
  if ( v11 > 0xFFFF )
    v11 = 0xFFFF;
  v12 = NdisPacketSize(ProtocolReservedLength);
  v13 = v12;
  if ( v12 - 1 > 0xFFFE
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, v10), (v15 = PoolWithTag) == 0LL) )
  {
LABEL_27:
    *Status = -1073741670;
    return;
  }
  memset(PoolWithTag + 1, 0, 0x68uLL);
  *(_DWORD *)v15 = v10;
  *((_WORD *)v15 + 2) = v13;
  *((_WORD *)v15 + 3) = 0xFC0u / v13;
  if ( 0xFC0u / v13 )
  {
    *((_DWORD *)v15 + 5) = 4096;
    *((_WORD *)v15 + 4) = (0xFC0u / v13 + v11 - 1) / (0xFC0u / v13);
  }
  KeInitializeSpinLock(v15 + 4);
  v16 = *((unsigned __int16 *)v15 + 3);
  if ( v16 > v11 || !(_WORD)v16 )
  {
    v20 = v11 * *((unsigned __int16 *)v15 + 2);
    *((_WORD *)v15 + 3) = v11;
    *((_DWORD *)v15 + 5) = v20 + 64;
    *((_WORD *)v15 + 4) = 1;
  }
  *((_DWORD *)v15 + 4) = 0;
  v15[10] = v15 + 9;
  v15[9] = v15 + 9;
  v15[6] = v15 + 5;
  v15[5] = v15 + 5;
  v15[8] = v15 + 7;
  v15[7] = v15 + 7;
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
  Flink = ndisGlobalPacketPoolList.Flink;
  v19 = (_LIST_ENTRY *)(v15 + 11);
  if ( ndisGlobalPacketPoolList.Flink->Blink != &ndisGlobalPacketPoolList )
    goto LABEL_26;
  v19->Flink = ndisGlobalPacketPoolList.Flink;
  v15[12] = &ndisGlobalPacketPoolList;
  Flink->Blink = v19;
  ndisGlobalPacketPoolList.Flink = (_LIST_ENTRY *)(v15 + 11);
  KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v17);
  NdisAllocatePacket(Status, &Packet, v15);
  if ( !*Status )
  {
    NdisFreePacket(Packet);
    *PoolHandle = v15;
    v15[3] = retaddr;
    goto LABEL_18;
  }
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
  v22 = v19->Flink;
  if ( v19->Flink->Blink != v19 || (v23 = (_LIST_ENTRY **)v15[12], *v23 != v19) )
LABEL_26:
    __fastfail(3u);
  *v23 = v22;
  v22->Blink = (_LIST_ENTRY *)v23;
  KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v21);
  ExFreePoolWithTag(v15, 0);
LABEL_18:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v24 = *Status;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xBu,
      (struct _GUID *)&WPP_04c15853d33533e3b941c1f11ee3988a_Traceguids,
      v24);
  }
}
