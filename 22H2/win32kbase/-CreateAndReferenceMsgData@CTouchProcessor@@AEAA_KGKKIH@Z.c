/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C018C32C
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019F35C (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C018828C (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E2A4 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AE48 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

_QWORD *__fastcall CTouchProcessor::CreateAndReferenceMsgData(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6)
{
  int v6; // edi
  struct CInputPointerNode *NodeById; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v6 = 0;
  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9365);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, a2, 0, 0);
  if ( !NodeById )
    return 0LL;
  v12 = Win32AllocPoolZInit(0x40uLL, 1685091157LL);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  *((_WORD *)v12 + 8) = a2;
  *((_DWORD *)v12 + 7) = a3;
  *((_DWORD *)v12 + 8) = a4;
  LOBYTE(v6) = (a5 & 0x40004) == 0;
  *((_DWORD *)v12 + 9) = *((_DWORD *)v12 + 9) & 0xFFFFFFE0 | (8 * (a6 & 1)) | v6 & 0xFFFFFFE1 | ((a5 & 0x2000 | ((a5 & 0x10000 | (a5 >> 1) & 0x20000) >> 6)) >> 9);
  CTouchProcessor::AssignPointerCaptureData(this, NodeById, (struct CPointerMsgData *)v12);
  v14 = (_QWORD *)((char *)NodeById + 240);
  v15 = *((_QWORD *)NodeById + 30);
  if ( *(struct CInputPointerNode **)(v15 + 8) != (struct CInputPointerNode *)((char *)NodeById + 240) )
    __fastfail(3u);
  *v13 = v15;
  v13[1] = v14;
  *(_QWORD *)(v15 + 8) = v13;
  *v14 = v13;
  CTouchProcessor::ReferenceMsgData(this, v13, 1LL);
  return v13;
}
