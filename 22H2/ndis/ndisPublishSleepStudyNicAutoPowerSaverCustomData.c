/*
 * XREFs of ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C0115700
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C011584C (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C005AB20 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x1C01150D0 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverCustomData(
        __int64 a1,
        __int64 a2,
        const struct _GUID *a3,
        unsigned __int64 a4,
        ULONGLONG a5,
        ULONGLONG a6,
        unsigned int a7,
        ULONGLONG a8)
{
  __int64 v9; // r9
  ULONGLONG v10; // rdi
  ULONGLONG v13; // rbp
  unsigned __int64 v14; // rbx

  v9 = 100 * a6;
  v10 = 0LL;
  v13 = 0LL;
  v14 = (*(_QWORD *)(*(_QWORD *)(a1 + 4456) + 848LL) + 5000LL) / 0x2710uLL;
  if ( a4 )
    v13 = ComputeRoundedAverage(100 * a6, a4);
  if ( v14 )
    v10 = ComputeRoundedAverage(v9, v14);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Idle Count", a7);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Total Time in CS (ms)", a4);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Idle Time (ms)", a6);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: % of CS in Idle Dx", v13);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Total Nic Active + NonResiliency Time (ms)", v14);
  ndisPublishSleepStudyCustomData(
    a2,
    a3,
    L"Nic Auto Power Saver: % of (Nic Active + NonResiliency) Time in Idle Dx",
    v10);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Last Resume Latency (ms)", a5);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Avg Resume Latency (ms)", a8);
}
