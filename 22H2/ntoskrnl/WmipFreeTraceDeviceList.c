/*
 * XREFs of WmipFreeTraceDeviceList @ 0x14084A218
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1403A3190 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x14084A048 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1409E18EC (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14022AAD4 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
