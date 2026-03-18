/*
 * XREFs of EnableDisableRegions @ 0x1C008A58C
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0017400 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIDetectFilterDevices @ 0x1C001AA30 (ACPIDetectFilterDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028860 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0029008 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0081780 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C0081910 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C0086CB0 (ACPIFilterIrpStopDevice.c)
 *     EnableDisableRegions @ 0x1C008A58C (EnableDisableRegions.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B60 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047BBC (AMLIEvalNameSpaceObject.c)
 *     AMLIGetFirstChild @ 0x1C004830C (AMLIGetFirstChild.c)
 *     AMLIGetNSObjectType @ 0x1C00483C8 (AMLIGetNSObjectType.c)
 *     AMLIGetNamedChild @ 0x1C00486B8 (AMLIGetNamedChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C00488F8 (AMLIIterateSiblingsNext.c)
 *     EnableDisableRegions @ 0x1C008A58C (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C008A688 (IsNsobjPciBus.c)
 */

__int64 __fastcall EnableDisableRegions(_QWORD *a1, char a2, char a3)
{
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 i; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  volatile signed __int32 *v13; // rbx
  _QWORD v15[10]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v7 = AMLIGetNamedChild(a1, 1195725407);
  if ( v7 )
  {
    memset(v15, 0, sizeof(v15));
    WORD1(v15[0]) = 1;
    WORD1(v15[5]) = 1;
    v15[2] = 2LL;
    v15[7] = a2 != 0;
    v6 = AMLIEvalNameSpaceObject(v7, 0LL, 2u, v15);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v7, v8);
  }
  if ( (unsigned __int8)IsNsobjPciBus(a1) || a3 )
  {
    for ( i = (__int64)AMLIGetFirstChild(a1); ; i = AMLIIterateSiblingsNext(v13) )
    {
      v13 = (volatile signed __int32 *)i;
      if ( !i )
        break;
      if ( (unsigned int)AMLIGetNSObjectType(i) == 6 && !(unsigned __int8)IsNsobjPciBus(v10) )
      {
        LOBYTE(v11) = a2;
        v12 = EnableDisableRegions(v13, v11, 0LL);
        if ( v12 < 0 )
          v6 = v12;
      }
    }
  }
  return v6;
}
