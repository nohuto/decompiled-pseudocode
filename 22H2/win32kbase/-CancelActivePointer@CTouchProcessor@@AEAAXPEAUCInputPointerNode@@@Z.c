/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0189420
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C007C980 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018F1D8 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019A5AC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019C468 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019F9D8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C01A1414 (WPP_RECORDER_SF_LHH.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        int a4)
{
  unsigned int v6; // edi
  int v7; // ecx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdx

  v6 = 0;
  v7 = *((_DWORD *)a2 + 13);
  if ( v7 == 1 )
  {
    v6 = 0x20000;
  }
  else if ( v7 == 2 )
  {
    v6 = 0x40000;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LHH(v7, v7 - 1, a3, a4);
  }
  CTouchProcessor::SetNewValidState(this, v6, a2);
  if ( *((_DWORD *)a2 + 16) )
  {
    CInputDest::SetEmpty((struct CInputPointerNode *)((char *)a2 + 64));
    *((_DWORD *)a2 + 70) &= ~0x10u;
  }
  if ( *((_DWORD *)a2 + 13) == 3
    && *((struct CInputPointerNode **)a2 + 30) == (struct CInputPointerNode *)((char *)a2 + 240) )
  {
    CTouchProcessor::ProcessRoutedAwayList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
    CTouchProcessor::FreeNode(this, a2);
  }
  else
  {
    v8 = (_QWORD *)((char *)a2 + 240);
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 15098);
      v9 = (_QWORD *)*v8;
    }
    CTouchProcessor::UnreferenceMsgData(this, v9, 1LL);
  }
}
