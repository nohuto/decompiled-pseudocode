/*
 * XREFs of WmipFreeTraceDeviceList @ 0x1407C1DA0
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1403C5840 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x1407C1D04 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x140933598 (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14032E244 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *P, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = P;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(P, 0x70696D57u);
}
