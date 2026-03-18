/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C01BE43C
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01C35F4 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AssignPointerCaptureData(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        struct CPointerMsgData *a3)
{
  __int64 v3; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax

  v3 = 0LL;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)a3 + 5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = (__int64 *)*((unsigned int *)a3 + 9);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( ((unsigned __int8)v6 & 8) != 0 )
      goto LABEL_15;
    v7 = *((_QWORD *)a2 + 32);
    if ( (struct CInputPointerNode *)v7 != (struct CInputPointerNode *)((char *)a2 + 256) )
    {
      v3 = *((_QWORD *)a2 + 32);
      if ( (*(_DWORD *)(v7 + 36) & 0x80u) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v7, a3);
        v6 = (__int64 *)*((unsigned int *)a3 + 9);
      }
    }
    if ( ((unsigned __int8)v6 & 2) != 0
      || !v3
      || (*(_DWORD *)(v3 + 36) & 1) != 0
      || (v8 = *(_QWORD *)(v3 + 40)) == 0
      && (MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v7, a3), (v8 = *(_QWORD *)(v3 + 40)) == 0) )
    {
LABEL_15:
      v8 = Win32AllocPoolZInit(0x138uLL, 1131443029);
      if ( !v8 )
        return;
      *(_WORD *)(v8 + 20) = *((_WORD *)a3 + 8);
      *(_DWORD *)(v8 + 24) = *((_DWORD *)a3 + 7);
      v6 = (__int64 *)((char *)a2 + 240);
      v7 = *((_QWORD *)a2 + 30);
      if ( *(struct CInputPointerNode **)(v7 + 8) != (struct CInputPointerNode *)((char *)a2 + 240) )
        __fastfail(3u);
      *(_QWORD *)v8 = v7;
      *(_QWORD *)(v8 + 8) = v6;
      *(_QWORD *)(v7 + 8) = v8;
      *v6 = v8;
    }
    *((_QWORD *)a3 + 5) = v8;
    if ( (*(_DWORD *)(v8 + 16))++ == -1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v7, a3);
  }
}
