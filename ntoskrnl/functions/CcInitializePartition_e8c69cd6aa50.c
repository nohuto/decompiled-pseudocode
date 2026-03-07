char __fastcall CcInitializePartition(char *StartContext, __int64 a2, _QWORD *a3)
{
  char v5; // si
  char *v7; // r15
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  unsigned __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // rbx
  bool v14; // zf
  PVOID PoolWithTag; // rax
  __int64 PoolWithTagFromNode; // rax
  __int64 *v17; // rcx
  bool v19; // cf
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  ULONG v22; // edx
  void *v23; // r9
  __int64 v24; // r8
  unsigned int v25; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  char v27; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  memset(&ObjectAttributes, 0, 44);
  memset(StartContext, 0, 0x580uLL);
  *(_DWORD *)StartContext = 92275447;
  *((_QWORD *)StartContext + 1) = a3;
  *((_QWORD *)StartContext + 162) = 1LL;
  v7 = StartContext + 96;
  *((_QWORD *)StartContext + 3) = StartContext + 16;
  *((_QWORD *)StartContext + 2) = StartContext + 16;
  *((_QWORD *)StartContext + 5) = StartContext + 32;
  *((_QWORD *)StartContext + 4) = StartContext + 32;
  *((_QWORD *)StartContext + 11) = StartContext + 80;
  *((_QWORD *)StartContext + 10) = StartContext + 80;
  *((_QWORD *)StartContext + 81) = StartContext + 640;
  *((_QWORD *)StartContext + 80) = StartContext + 640;
  *((_QWORD *)StartContext + 79) = StartContext + 624;
  *((_QWORD *)StartContext + 78) = StartContext + 624;
  *((_QWORD *)StartContext + 89) = StartContext + 704;
  *((_QWORD *)StartContext + 88) = StartContext + 704;
  *((_QWORD *)StartContext + 13) = StartContext + 96;
  *((_QWORD *)StartContext + 12) = StartContext + 96;
  *((_DWORD *)StartContext + 168) = 2048;
  *((_QWORD *)StartContext + 85) = StartContext + 656;
  *((_QWORD *)StartContext + 86) = StartContext + 656;
  *((_QWORD *)StartContext + 82) = StartContext + 680;
  *((_QWORD *)StartContext + 83) = StartContext + 680;
  *((_DWORD *)StartContext + 174) = 2048;
  *((_QWORD *)StartContext + 96) = 0LL;
  *((_QWORD *)StartContext + 104) = 0LL;
  *((_QWORD *)StartContext + 107) = StartContext + 848;
  *((_QWORD *)StartContext + 106) = StartContext + 848;
  *((_QWORD *)StartContext + 112) = StartContext + 888;
  *((_QWORD *)StartContext + 111) = StartContext + 888;
  *((_WORD *)StartContext + 440) = 1;
  StartContext[882] = 6;
  *((_DWORD *)StartContext + 221) = 0;
  *((_QWORD *)StartContext + 115) = StartContext + 912;
  *((_QWORD *)StartContext + 114) = StartContext + 912;
  *((_WORD *)StartContext + 452) = 1;
  StartContext[906] = 6;
  *((_DWORD *)StartContext + 227) = 0;
  *((_QWORD *)StartContext + 118) = StartContext + 936;
  *((_QWORD *)StartContext + 117) = StartContext + 936;
  *((_WORD *)StartContext + 464) = 1;
  StartContext[930] = 6;
  *((_DWORD *)StartContext + 233) = 0;
  *((_QWORD *)StartContext + 121) = StartContext + 960;
  *((_QWORD *)StartContext + 120) = StartContext + 960;
  *((_WORD *)StartContext + 476) = 1;
  StartContext[954] = 6;
  *((_DWORD *)StartContext + 239) = 0;
  *((_QWORD *)StartContext + 165) = StartContext + 1312;
  *((_QWORD *)StartContext + 164) = StartContext + 1312;
  *((_WORD *)StartContext + 652) = 0;
  StartContext[1306] = 6;
  *((_DWORD *)StartContext + 327) = 0;
  *((_WORD *)StartContext + 664) = 0;
  *((_QWORD *)StartContext + 168) = StartContext + 1336;
  *((_QWORD *)StartContext + 167) = StartContext + 1336;
  StartContext[1330] = 6;
  *((_DWORD *)StartContext + 333) = 0;
  *((_QWORD *)StartContext + 9) = StartContext + 64;
  *((_QWORD *)StartContext + 8) = StartContext + 64;
  *((_WORD *)StartContext + 28) = 0;
  StartContext[58] = 6;
  *((_DWORD *)StartContext + 15) = 0;
  *((_OWORD *)StartContext + 66) = 0LL;
  *((_QWORD *)StartContext + 134) = 0LL;
  *(_OWORD *)(StartContext + 1080) = 0LL;
  *(_OWORD *)(StartContext + 1096) = 0LL;
  *(_OWORD *)(StartContext + 1112) = 0LL;
  *((_QWORD *)StartContext + 141) = 0LL;
  *((_OWORD *)StartContext + 85) = 0LL;
  *((_DWORD *)StartContext + 340) = 1;
  *((_QWORD *)StartContext + 171) = StartContext;
  memset(StartContext + 984, 0, 0x48uLL);
  StartContext[984] = 9;
  *((_QWORD *)StartContext + 125) = StartContext + 992;
  *((_QWORD *)StartContext + 124) = StartContext + 992;
  *((_DWORD *)StartContext + 247) = 0;
  *((_QWORD *)StartContext + 126) = 0LL;
  *((_DWORD *)StartContext + 261) = 0;
  *((_WORD *)StartContext + 520) = 0;
  StartContext[1048] = 1;
  NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject(a3);
  if ( (_BYTE)dword_140D1D1EC )
  {
    v19 = (unsigned int)CcAzure_TopBottomDPTEqual < 2;
    *((_QWORD *)StartContext + 136) = NumberOfPhysicalPagesForPartitionObject >> 1;
    if ( v19 )
      v20 = (unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(a3) >> 1;
    else
      v20 = (unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(a3) >> 3;
    *((_QWORD *)StartContext + 137) = v20;
    *((_QWORD *)StartContext + 135) = v21;
    v10 = ExCriticalWorkerThreads - 1;
  }
  else
  {
    v9 = NumberOfPhysicalPagesForPartitionObject >> 3;
    *((_QWORD *)StartContext + 137) = v9;
    *((_QWORD *)StartContext + 136) = v9;
    *((_QWORD *)StartContext + 135) = v9;
    v10 = 1;
  }
  *((_DWORD *)StartContext + 216) = v10;
  *((_DWORD *)StartContext + 282) = 10;
  *((_QWORD *)StartContext + 140) = 0LL;
  v11 = 10 * MmGetNumberOfPhysicalPagesForPartitionObject(a3);
  v12 = ExCriticalWorkerThreads - 1;
  *((_QWORD *)StartContext + 139) = v11;
  *((_DWORD *)StartContext + 210) = v12;
  *((_DWORD *)StartContext + 217) = CcMaxCachemapUninitWorkerThreads;
  v13 = (*((_QWORD *)StartContext + 135) >> 1) + (*((_QWORD *)StartContext + 135) >> 2);
  if ( CcAzure_LazyWriterPercentageOfNumProcs )
  {
    v22 = CcAzure_LazyWriterPercentageOfNumProcs * KeQueryActiveProcessorCountEx(0xFFFFu) / 0x64;
    if ( *((_DWORD *)StartContext + 210) < v22 )
      *((_DWORD *)StartContext + 210) = v22;
  }
  StartContext[1294] = 0;
  *((_DWORD *)StartContext + 194) = 0;
  StartContext[780] = 0;
  *((_QWORD *)StartContext + 152) = 0LL;
  if ( v13 > 0xFFFFFFFF )
    LODWORD(v13) = -1;
  *((_QWORD *)StartContext + 157) = 0LL;
  v14 = CcEnablePerVolumeLazyWriter == 0;
  *((_DWORD *)StartContext + 276) = v13;
  *((_QWORD *)StartContext + 147) = StartContext + 1168;
  *((_QWORD *)StartContext + 146) = StartContext + 1168;
  *((_QWORD *)StartContext + 155) = StartContext + 1232;
  *((_QWORD *)StartContext + 154) = StartContext + 1232;
  *((_QWORD *)StartContext + 158) = 0LL;
  *((_DWORD *)StartContext + 318) = 32;
  *((_DWORD *)StartContext + 319) = 5;
  *((_DWORD *)StartContext + 322) = -1;
  *((_QWORD *)StartContext + 160) = 0LL;
  if ( !v14 )
    goto LABEL_7;
  v23 = (void *)a3[15];
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         (PHANDLE)StartContext + 169,
         0x1FFFFFu,
         &ObjectAttributes,
         v23,
         0LL,
         CcQueueLazyWriteScanThread,
         StartContext) < 0 )
    return v5;
  v25 = 0;
  if ( CcNumberNumaNodes )
  {
    while ( (unsigned __int8)CcInitializeNumaNode(StartContext, a2 + 440LL * v25, v24, v25) )
    {
      if ( ++v25 >= CcNumberNumaNodes )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( (unsigned __int8)CcInitializePartitionVacbs(StartContext) )
    {
      PoolWithTag = ExAllocatePoolWithTag(
                      (POOL_TYPE)1536,
                      8LL * (unsigned int)(*((_DWORD *)StartContext + 216) + 1),
                      0x70546343u);
      if ( PoolWithTag )
      {
        v14 = CcEnablePerVolumeLazyWriter == 0;
        *((_QWORD *)StartContext + 142) = PoolWithTag;
        if ( !v14 )
          goto LABEL_10;
        *((_QWORD *)StartContext + 153) = 0LL;
        v27 = 1;
        CcForEachNumaNode(CcInitializeAsyncReadForNodeHelper, StartContext, 0LL, &v27);
        if ( !v27 )
          return v5;
        if ( CcEnablePerVolumeLazyWriter )
        {
LABEL_10:
          PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, 0x80000000, 0);
          if ( !PoolWithTagFromNode )
            return v5;
          *(_DWORD *)(PoolWithTagFromNode + 32) = 9;
          *(_DWORD *)(PoolWithTagFromNode + 36) = -1;
          *(_QWORD *)(PoolWithTagFromNode + 56) = StartContext;
          *(_QWORD *)(PoolWithTagFromNode + 64) = 0LL;
          *(_QWORD *)(PoolWithTagFromNode + 72) = 0LL;
          *(_DWORD *)(PoolWithTagFromNode + 40) = 0;
          *(_QWORD *)(PoolWithTagFromNode + 16) = CcReapPrivateVolumeCachemapWorkerThread;
          *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
          *(_QWORD *)PoolWithTagFromNode = 0LL;
          v17 = (__int64 *)*((_QWORD *)StartContext + 13);
          if ( (char *)*v17 != v7 )
            __fastfail(3u);
          *(_QWORD *)PoolWithTagFromNode = v7;
          *(_QWORD *)(PoolWithTagFromNode + 8) = v17;
          *v17 = PoolWithTagFromNode;
          *((_QWORD *)StartContext + 13) = PoolWithTagFromNode;
        }
        v5 = 1;
        StartContext[1364] = 1;
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitializePartition: Initialized Partition=%p, PartitionObject=%p \n",
          StartContext,
          a3);
      }
    }
  }
  return v5;
}
