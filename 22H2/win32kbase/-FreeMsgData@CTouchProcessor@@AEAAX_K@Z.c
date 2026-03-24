/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C018F038
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019F9D8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018F1D8 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C018F2E4 (-FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C019B1E8 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(struct _KTHREAD **this, __int64 a2)
{
  _QWORD *v4; // rdi
  __int16 v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // rax
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10842);
  if ( *(_DWORD *)(a2 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10844);
  v4 = *(_QWORD **)a2;
  v5 = *(_WORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v7 = *(_QWORD **)(a2 + 8), *v7 != a2) )
    __fastfail(3u);
  *v7 = v4;
  v4[1] = v7;
  Win32FreePool(a2);
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 16);
    if ( v8 == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v6 + 32));
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v6 + 168));
      v8 = *(_DWORD *)(v6 + 16);
    }
    v9 = v8 - 1;
    *(_DWORD *)(v6 + 16) = v9;
    if ( !v9 )
      CTouchProcessor::FreePointerCaptureData((CTouchProcessor *)this, (struct CPointerCaptureData *)v6);
  }
  v10 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 == v4 )
  {
    v11 = v4 - 30;
    if ( *((_WORD *)v4 - 104) != v5 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10887);
      v10 = (_QWORD *)*v4;
    }
    if ( v10 != v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10888);
    if ( (_QWORD *)v11[28] != v11 + 28 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10889);
    if ( *((_DWORD *)v11 + 13) == 3 )
      CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)(v4 - 30));
  }
}
