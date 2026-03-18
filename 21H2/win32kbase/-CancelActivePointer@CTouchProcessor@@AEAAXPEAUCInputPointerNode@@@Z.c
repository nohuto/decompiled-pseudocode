/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01BF98C
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C0088B10 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01C6170 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01D2B28 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01D50CC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHH @ 0x1C01DA898 (WPP_RECORDER_AND_TRACE_SF_LHH.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(CTouchProcessor *this, struct CInputPointerNode *a2)
{
  int v2; // r8d
  unsigned int v4; // edi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // r8
  CInputDest *v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rbx

  v2 = *((_DWORD *)a2 + 14);
  v4 = 0;
  v6 = v2 - 1;
  if ( v2 == 1 )
  {
    v4 = 0x20000;
  }
  else if ( v2 == 2 )
  {
    v4 = 0x40000;
  }
  else
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_LHH(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED);
    }
  }
  CTouchProcessor::SetNewValidState(this, v4, a2);
  v9 = (struct CInputPointerNode *)((char *)a2 + 72);
  if ( *((_DWORD *)a2 + 18) )
  {
    CInputDest::SetEmpty(v9);
    *((_DWORD *)a2 + 75) &= 0xFFFFBFCF;
  }
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v7, v8);
  if ( *((_DWORD *)a2 + 14) == 3
    && *((struct CInputPointerNode **)a2 + 32) == (struct CInputPointerNode *)((char *)a2 + 256) )
  {
    CTouchProcessor::ProcessRoutedAwayList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
    CTouchProcessor::FreeNode(this, a2);
  }
  else
  {
    v10 = (__int64 *)((char *)a2 + 256);
    v11 = *((_QWORD *)a2 + 32);
    if ( (__int64 *)v11 == v10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v7, v8);
      v11 = *v10;
    }
    if ( (*(_DWORD *)(v11 + 36) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v7, v8);
    CTouchProcessor::UnreferenceMsgData(this, v11, 1LL);
  }
}
