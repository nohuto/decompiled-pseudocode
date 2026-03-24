/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C018828C
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C018C32C (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::AssignPointerCaptureData(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        struct CPointerMsgData *a3)
{
  int v5; // ecx
  __int64 v6; // rbx
  _WORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9413);
  if ( *((_QWORD *)a3 + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9414);
  v5 = *((_DWORD *)a3 + 9);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 8) != 0 )
      goto LABEL_14;
    v6 = *((_QWORD *)a2 + 30);
    if ( (struct CInputPointerNode *)v6 == (struct CInputPointerNode *)((char *)a2 + 240) )
      v6 = 0LL;
    if ( (v5 & 2) != 0
      || !v6
      || (*(_DWORD *)(v6 + 36) & 1) != 0
      || (v7 = *(_WORD **)(v6 + 40)) == 0LL
      && (MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9439), (v7 = *(_WORD **)(v6 + 40)) == 0LL) )
    {
LABEL_14:
      v7 = Win32AllocPoolZInit(0x138uLL, 1131443029LL);
      if ( !v7 )
        return;
      v7[10] = *((_WORD *)a3 + 8);
      *((_DWORD *)v7 + 6) = *((_DWORD *)a3 + 7);
      v8 = (_QWORD *)((char *)a2 + 224);
      v9 = *((_QWORD *)a2 + 28);
      if ( *(struct CInputPointerNode **)(v9 + 8) != (struct CInputPointerNode *)((char *)a2 + 224) )
        __fastfail(3u);
      *(_QWORD *)v7 = v9;
      *((_QWORD *)v7 + 1) = v8;
      *(_QWORD *)(v9 + 8) = v7;
      *v8 = v7;
    }
    *((_QWORD *)a3 + 5) = v7;
    if ( (*((_DWORD *)v7 + 4))++ == -1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9462);
  }
}
