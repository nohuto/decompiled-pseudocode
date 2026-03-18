/*
 * XREFs of KdpSearchPhysicalPageRange @ 0x140AB5A68
 * Callers:
 *     KdpSendWaitContinue @ 0x140AB17C8 (KdpSendWaitContinue.c)
 *     KdpSysCheckLowMemory @ 0x140AB5C64 (KdpSysCheckLowMemory.c)
 * Callees:
 *     KdpSearchPhysicalPage @ 0x140AB5848 (KdpSearchPhysicalPage.c)
 */

__int64 __fastcall KdpSearchPhysicalPageRange(int a1)
{
  __int64 result; // rax
  char v2; // di
  unsigned __int64 i; // rbx

  result = (unsigned int)KdpSearchInProgress;
  v2 = 0;
  if ( KdpSearchInProgress )
  {
    if ( KdpSearchEndPageFrame == KdpSearchStartPageFrame )
    {
      v2 = 1;
      ++KdpSearchEndPageFrame;
    }
    for ( i = KdpSearchStartPageFrame; i < KdpSearchEndPageFrame; ++i )
      KdpSearchPhysicalPage(i, KdpSearchAddressRangeStart, KdpSearchAddressRangeEnd, v2, a1);
    return 1LL;
  }
  return result;
}
