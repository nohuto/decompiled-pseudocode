/*
 * XREFs of ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1C0159B20
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessage @ 0x1C004EBC0 (xxxSendTransformableMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C010C718 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxSendPosMessage(unsigned __int64 *BugCheckParameter2, __int64 a2, struct tagWINDOWPOS *a3)
{
  __int64 v4; // r8
  unsigned int v5; // r10d
  unsigned __int64 *v6; // rax
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x40000) == 0 || gptiCurrent == BugCheckParameter2[2] )
  {
    xxxSendTransformableMessage((ULONG_PTR)BugCheckParameter2, a2, 0LL, (__int64)a3, 0);
  }
  else if ( tagQ::IsSingleThreadAttached(*(tagQ **)(gptiCurrent + 432LL))
         && (v6 = *(unsigned __int64 **)(gptiCurrent + 1400LL)) != 0LL )
  {
    if ( v6[2] == gptiCurrent )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v6 = *(unsigned __int64 **)(gptiCurrent + 1400LL);
    }
    if ( v6 != BugCheckParameter2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  else
  {
    v7 = 0LL;
    xxxSendTransformableMessageTimeout(BugCheckParameter2, v5, 0LL, v4, 2u, 0x64u, (unsigned __int64 *)&v7, 1, 0);
  }
}
