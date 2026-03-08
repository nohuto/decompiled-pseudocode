/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01FBA30
 * Callers:
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00F295E (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01FB1D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IsPointerInputMessage @ 0x1C00F3132 (IsPointerInputMessage.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x1C01FBA0C (-IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z.c)
 */

_BOOL8 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, int a2)
{
  CPointerInfoNode *v4; // rcx
  int v5; // eax
  int v6; // r9d
  int v7; // r8d
  bool v8; // cf
  int v9; // edx
  int v10; // edx

  if ( !IsPointerInputMessage(a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 302);
  if ( !gbIgnoreStressedOutStuff && (*(_DWORD *)this & 0x80000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 303);
  switch ( a2 )
  {
    case 585:
      v5 = -__CFSHR__(*(_DWORD *)this, 27);
      v6 = -__CFSHR__(*(_DWORD *)this, 26);
      v7 = -__CFSHR__(*(_DWORD *)this, 25);
      v8 = __CFSHR__(*(_DWORD *)this, 24);
      break;
    case 586:
      v5 = (2 * *(_DWORD *)this) >> 31;
      v6 = (4 * *(_DWORD *)this) >> 31;
      v7 = (8 * *(_DWORD *)this) >> 31;
      v8 = __CFSHR__(*(_DWORD *)this, 28);
      break;
    case 593:
      v5 = -__CFSHR__(*((_DWORD *)this + 1), 3);
      v6 = -__CFSHR__(*((_DWORD *)this + 1), 2);
      v7 = -(*((_DWORD *)this + 1) & 1);
      v9 = *(int *)this >> 31;
      return CPointerInfoNode::IsMessageDelegated(v4, v9, v7, v6, v5);
    case 594:
      v10 = *((_DWORD *)this + 1);
      v5 = -__CFSHR__(v10, 7);
      v6 = -__CFSHR__(v10, 6);
      v7 = -__CFSHR__(v10, 5);
      v8 = __CFSHR__(v10, 4);
      break;
    default:
      v9 = 1;
      v5 = -__CFSHR__(*(_DWORD *)this, 23);
      v6 = -__CFSHR__(*(_DWORD *)this, 22);
      v7 = -__CFSHR__(*(_DWORD *)this, 21);
      return CPointerInfoNode::IsMessageDelegated(v4, v9, v7, v6, v5);
  }
  v9 = -v8;
  return CPointerInfoNode::IsMessageDelegated(v4, v9, v7, v6, v5);
}
