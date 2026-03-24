/*
 * XREFs of ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C
 * Callers:
 *     fnHkINLPNOTIFYSTRUCT @ 0x1C0006930 (fnHkINLPNOTIFYSTRUCT.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C001E680 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C00209C0 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0020D98 (ClientLoadLibrary.c)
 *     xxxClientAddFontResourceW @ 0x1C0021BCC (xxxClientAddFontResourceW.c)
 *     SfnPOWERBROADCAST @ 0x1C0022080 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C0022900 (xxxClientLoadImage.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0022C30 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadMenu @ 0x1C00237E0 (xxxClientLoadMenu.c)
 *     xxxClientCopyImage @ 0x1C0023A6C (xxxClientCopyImage.c)
 *     SfnCOPYDATA @ 0x1C0023E20 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C00242FC (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C002525C (xxxClientExpandStringW.c)
 *     xxxClientWOWGetProcModule @ 0x1C004F8BC (xxxClientWOWGetProcModule.c)
 *     SfnEMPTY @ 0x1C004F9B0 (SfnEMPTY.c)
 *     SfnINSTRINGNULL @ 0x1C004FE90 (SfnINSTRINGNULL.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1C0050520 (SfnOUTLPCOMBOBOXINFO.c)
 *     xxxClientCallDitThread @ 0x1C0050CD8 (xxxClientCallDitThread.c)
 *     xxxClientCallWinEventProc @ 0x1C0051334 (xxxClientCallWinEventProc.c)
 *     fnHkINDWORD @ 0x1C005147C (fnHkINDWORD.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0051A24 (xxxClientFreeWindowClassExtraBytes.c)
 *     SfnNCDESTROY @ 0x1C0051B50 (SfnNCDESTROY.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C0051E4C (xxxClientAllocWindowClassExtraBytes.c)
 *     SfnINLPWINDOWPOS @ 0x1C0052000 (SfnINLPWINDOWPOS.c)
 *     SfnINOUTLPPOINT5 @ 0x1C0103DD0 (SfnINOUTLPPOINT5.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0105EA0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C0106290 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C0106570 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C0106850 (SfnINLPUAHDRAWMENUITEM.c)
 *     ClientImmProcessKey @ 0x1C0106F4C (ClientImmProcessKey.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1C010E380 (SfnINOUTLPSCROLLINFO.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C01157B0 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0118118 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     SfnINOUTLPRECT @ 0x1C0119C20 (SfnINOUTLPRECT.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C0119F60 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     xxxClientMonitorEnumProc @ 0x1C011B820 (xxxClientMonitorEnumProc.c)
 *     ClientFreeLibrary @ 0x1C011D824 (ClientFreeLibrary.c)
 *     SfnINSTRING @ 0x1C011EEF0 (SfnINSTRING.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x1C0123F90 (SfnOUTLPTITLEBARINFOEX.c)
 *     xxxClientBroadcastThemeChange @ 0x1C012C610 (xxxClientBroadcastThemeChange.c)
 *     xxxClientRimDevCallback @ 0x1C012D8B4 (xxxClientRimDevCallback.c)
 *     ClientImmLoadLayout @ 0x1C012F1E4 (ClientImmLoadLayout.c)
 *     xxxClientGetCharsetInfo @ 0x1C01301D8 (xxxClientGetCharsetInfo.c)
 *     SfnOUTLPRECT @ 0x1C0150560 (SfnOUTLPRECT.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0153BB0 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C01554D0 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C0158630 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C01594E8 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159810 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C015A484 (ClientGetListboxString.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C015C9DC (fnHkINLPCBTACTIVATESTRUCT.c)
 *     SfnINDESTROYCLIPBRD @ 0x1C015D290 (SfnINDESTROYCLIPBRD.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1C0160040 (SfnINWPARAMDBCSCHAR.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C02285A8 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C022871C (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 *     ClientEventCallback @ 0x1C02288A8 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0228CA0 (SfnCOPYGLOBALDATA.c)
 *     SfnGESTURE @ 0x1C02290E0 (SfnGESTURE.c)
 *     SfnGETWINDOWDATA @ 0x1C0229430 (SfnGETWINDOWDATA.c)
 *     SfnIMECONTROL @ 0x1C02295E0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C022A180 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022A7A0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x1C022AD50 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1C022B0C0 (SfnINLPDELETEITEMSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022B410 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022B880 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022BCE0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022C220 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C022C8A0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnINOUTDRAG @ 0x1C022CC60 (SfnINOUTDRAG.c)
 *     SfnINOUTLPSIZE @ 0x1C022D060 (SfnINOUTLPSIZE.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1C022D420 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1C022D860 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1C022DC50 (SfnINPAINTCLIPBRD.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022E050 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSIZECLIPBRD @ 0x1C022E4B0 (SfnINSIZECLIPBRD.c)
 *     SfnINWPARAMCHAR @ 0x1C022E840 (SfnINWPARAMCHAR.c)
 *     SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C022EBE0 (SfnKEYBOARDCORRECTIONCALLOUT.c)
 *     SfnOUTDWORDINDWORD @ 0x1C022EFC0 (SfnOUTDWORDINDWORD.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1C022F380 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnPOPTINLPUINT @ 0x1C022F7C0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C022FC80 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1C0230240 (SfnSENTDDEMSG.c)
 *     SfnTOUCH @ 0x1C0230620 (SfnTOUCH.c)
 *     SfnTOUCHHITTESTING @ 0x1C0230970 (SfnTOUCHHITTESTING.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0230E38 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0231018 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C0231190 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C023130C (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0231500 (fnHkOPTINLPEVENTMSG.c)
 *     xxxClientCallDefWindowProc @ 0x1C0231770 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C02318E0 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C0231A5C (xxxClientCallDelegateThread.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C0231DA4 (xxxClientCallLocalMouseHooks.c)
 *     xxxClientCharToWchar @ 0x1C0231F08 (xxxClientCharToWchar.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0232030 (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C02324F4 (xxxClientCopyDDEOut1.c)
 *     xxxClientFindMnemChar @ 0x1C02328B0 (xxxClientFindMnemChar.c)
 *     xxxClientFreeDDEHandle @ 0x1C0232B48 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEFlags @ 0x1C0232C70 (xxxClientGetDDEFlags.c)
 *     xxxClientGetDDEHookData @ 0x1C0232D98 (xxxClientGetDDEHookData.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232F9C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233404 (xxxClientPSMTextOut.c)
 *     xxxClientUpdateDpi @ 0x1C0233794 (xxxClientUpdateDpi.c)
 * Callees:
 *     <none>
 */

ReleaseAndReacquirePerObjectLocks *__fastcall ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
        ReleaseAndReacquirePerObjectLocks *this)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax

  *(_BYTE *)this = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(this)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v13),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *(_BYTE *)this = *(_BYTE *)(v3 + 1480);
  *(_BYTE *)(v3 + 1480) = 0;
  if ( (*(_BYTE *)this & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v3 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  return this;
}
