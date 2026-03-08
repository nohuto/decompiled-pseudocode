/*
 * XREFs of MmQueryMemoryListInformation @ 0x140236738
 * Callers:
 *     PfpMemoryListQuery @ 0x1403CF3B4 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x1405FBA14 (EtwpLogMemInfo.c)
 *     PfpPrefetchFilesTrickle @ 0x1406A2A70 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406A2DC0 (PfpUpdateRepurposedByPrefetch.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x1406AE8C4 (PfpPfnPrioRequest.c)
 *     PfpVolumePrefetchMetadata @ 0x1407667FC (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140766EA8 (PfpPrefetchDirectoryStream.c)
 *     PfSnCheckActionsNeeded @ 0x1407E3F78 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x14097B268 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140236884 (MiPartitionObjectToPartition.c)
 *     MiQueryMemoryListInformation @ 0x140236920 (MiQueryMemoryListInformation.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  _OWORD *v9; // r14
  _OWORD v11[11]; // [rsp+40h] [rbp-D8h] BYREF

  memset(v11, 0, sizeof(v11));
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  else
  {
    v8 = MiPartitionObjectToPartition(BugCheckParameter2);
    if ( v8 )
    {
      MiQueryMemoryListInformation(v8, v11);
      *a2 = v11[0];
      a2[1] = v11[1];
      a2[2] = v11[2];
      a2[3] = v11[3];
      a2[4] = v11[4];
      a2[5] = v11[5];
      a2[6] = v11[6];
      v9 = a2 + 8;
      *(v9 - 1) = v11[7];
      *v9 = v11[8];
      v9[1] = v11[9];
      v9[2] = v11[10];
      *a5 = 176;
      return 0LL;
    }
    else
    {
      return 3221226656LL;
    }
  }
}
