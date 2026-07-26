/*
 * XREFs of NdisGetProcessorInformation @ 0x1C003C2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisGetProcessorInformation(PNDIS_SYSTEM_PROCESSOR_INFO SystemProcessorInfo)
{
  NDIS_STATUS v1; // r8d
  void *v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r11d
  char *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned int v10; // r10d
  ULONG *p_SocketId; // r11
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = 0;
  if ( SystemProcessorInfo->Header.Size < 0x430u )
    return -1073676266;
  v3 = ndisSystemProcessorInfo;
  SystemProcessorInfo->Flags = *((_DWORD *)ndisSystemProcessorInfo + 1);
  SystemProcessorInfo->ProcessorVendor = *((_DWORD *)v3 + 2);
  SystemProcessorInfo->NumPhysicalPackages = *((_DWORD *)v3 + 3);
  SystemProcessorInfo->NumCores = *((_DWORD *)v3 + 4);
  SystemProcessorInfo->NumCoresPerPhysicalPackage = *((_DWORD *)v3 + 5);
  SystemProcessorInfo->MaxHyperThreadingCpusPerCore = *((_DWORD *)v3 + 6);
  SystemProcessorInfo->RssBaseCpu = ndisRssBaseCpu;
  v4 = ndisRssCpuCount;
  SystemProcessorInfo->RssCpuCount = ndisRssCpuCount;
  if ( SystemProcessorInfo->RssProcessors )
  {
    v5 = 0;
    if ( v4 )
    {
      v6 = (char *)ndisRssProcessors;
      v7 = v4;
      do
      {
        if ( *(_WORD *)v6 )
        {
          --SystemProcessorInfo->RssCpuCount;
        }
        else
        {
          v8 = v5++;
          SystemProcessorInfo->RssProcessors[v8] = v6[2];
        }
        v6 += 4;
        --v7;
      }
      while ( v7 );
    }
  }
  v9 = 0;
  v10 = 0;
  if ( !ndisNumberOfActiveProcessorsAtBoot )
    goto LABEL_14;
  v10 = ndisNumberOfActiveProcessorsAtBoot;
  p_SocketId = &ndisCpuInfo->SocketId;
  v12 = ndisNumberOfActiveProcessorsAtBoot;
  do
  {
    if ( !*((_WORD *)p_SocketId - 2) )
    {
      v13 = v9 + 3LL;
      v14 = v9++;
      *((_DWORD *)&SystemProcessorInfo->Header + 4 * v13) = *((unsigned __int8 *)p_SocketId - 2);
      SystemProcessorInfo->CpuInfo[v14].PhysicalPackageId = *p_SocketId;
      SystemProcessorInfo->CpuInfo[v14].CoreId = p_SocketId[1];
      SystemProcessorInfo->CpuInfo[v14].HyperThreadID = p_SocketId[2];
    }
    p_SocketId += 5;
    --v12;
  }
  while ( v12 );
  while ( v10 < 0x40 )
  {
LABEL_14:
    v15 = v10++ + 3LL;
    *((_OWORD *)&SystemProcessorInfo->Header.Type + v15) = 0LL;
  }
  return v1;
}
