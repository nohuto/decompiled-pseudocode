/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01CE1F4
 * Callers:
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00E82B6 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CDA24 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x1C01CE1D0 (-IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z.c)
 *     IsPointerInputMessage @ 0x1C01DA6A4 (IsPointerInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  CPointerInfoNode *v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  int v10; // r9d
  int v11; // r8d
  bool v12; // cf
  int v13; // edx
  int v14; // edx

  v5 = a2;
  if ( !(unsigned int)IsPointerInputMessage((unsigned int)a2, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  switch ( v5 )
  {
    case 585:
      v9 = -__CFSHR__(*(_DWORD *)this, 27);
      v10 = -__CFSHR__(*(_DWORD *)this, 26);
      v11 = -__CFSHR__(*(_DWORD *)this, 25);
      v12 = __CFSHR__(*(_DWORD *)this, 24);
      break;
    case 586:
      v9 = (2 * *(_DWORD *)this) >> 31;
      v10 = (4 * *(_DWORD *)this) >> 31;
      v11 = (8 * *(_DWORD *)this) >> 31;
      v12 = __CFSHR__(*(_DWORD *)this, 28);
      break;
    case 593:
      v9 = -__CFSHR__(*((_DWORD *)this + 1), 3);
      v10 = -__CFSHR__(*((_DWORD *)this + 1), 2);
      v11 = -(*((_DWORD *)this + 1) & 1);
      v13 = *(int *)this >> 31;
      return CPointerInfoNode::IsMessageDelegated(v7, v13, v11, v10, v9);
    case 594:
      v14 = *((_DWORD *)this + 1);
      v9 = -__CFSHR__(v14, 7);
      v10 = -__CFSHR__(v14, 6);
      v11 = -__CFSHR__(v14, 5);
      v12 = __CFSHR__(v14, 4);
      break;
    default:
      v13 = 1;
      v9 = -__CFSHR__(*(_DWORD *)this, 23);
      v10 = -__CFSHR__(*(_DWORD *)this, 22);
      v11 = -__CFSHR__(*(_DWORD *)this, 21);
      return CPointerInfoNode::IsMessageDelegated(v7, v13, v11, v10, v9);
  }
  v13 = -v12;
  return CPointerInfoNode::IsMessageDelegated(v7, v13, v11, v10, v9);
}
