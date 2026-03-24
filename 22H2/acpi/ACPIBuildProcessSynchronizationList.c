/*
 * XREFs of ACPIBuildProcessSynchronizationList @ 0x1C0019B44
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C001CDD0 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C001D510 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C002C784 (WPP_RECORDER_SF_sqss.c)
 */

__int64 ACPIBuildProcessSynchronizationList()
{
  PSLIST_ENTRY v0; // rbx
  char v1; // di
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rcx
  PSLIST_ENTRY v5; // rsi

  v0 = AcpiBuildSynchronizationList;
  v1 = 1;
  while ( v0 != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
  {
    v5 = v0;
    v0 = v0->Next;
    if ( v5[5].Next->Next == v5[5].Next )
    {
      v2 = *((_QWORD *)&v5[2].Next + 1);
      v3 = &unk_1C00701BA;
      if ( v2 )
      {
        v4 = *(_QWORD *)(v2 + 8);
        if ( (v4 & 0x200000000000LL) != 0 && (v4 & 0x400000000000LL) != 0 )
          v3 = *(void **)(v2 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v3, 6, 71);
      }
      ACPIBuildProcessGenericComplete(v5);
    }
    else
    {
      v1 = 0;
    }
  }
  return v1 == 0 ? 0x103 : 0;
}
