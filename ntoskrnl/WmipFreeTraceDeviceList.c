/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140847BA8
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14039EBD0 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x1408479D8 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1409DEA4C (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x140208DE4 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
