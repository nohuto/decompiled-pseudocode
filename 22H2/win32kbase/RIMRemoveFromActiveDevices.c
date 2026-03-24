/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C015F42C
 * Callers:
 *     RIMFreePointerDevice @ 0x1C015D624 (RIMFreePointerDevice.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017889C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMUpdatePrimaryDevice @ 0x1C015FC9C (RIMUpdatePrimaryDevice.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C01CFFF4 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2, int a3, int *a4)
{
  _QWORD *v4; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  int v9; // r12d
  __int64 v10; // rdi
  _QWORD *v11; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax

  v4 = (_QWORD *)(a1 + 448);
  v6 = *(_QWORD **)(a1 + 448);
  v7 = a2;
  v9 = 0;
  if ( *(_QWORD *)(a1 + 480) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( v6 != v4 )
  {
    v10 = (__int64)(v6 - 1);
    v11 = v6;
    v6 = (_QWORD *)*v6;
    if ( *(_QWORD *)v10 == v7 )
    {
      v13 = *(_QWORD *)(v7 + 16);
      *(_DWORD *)(v13 + 188) &= ~2u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 37, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, v13);
      }
      if ( (*(_DWORD *)(v10 + 24) & 1) == 0 )
        ApiSetPostPointerDeviceOutOfRangeMessage(v7);
      if ( (*(_DWORD *)(a1 + 476) & 1) != 0 )
      {
        *(_DWORD *)(v10 + 24) |= 1u;
        *(_DWORD *)(a1 + 476) |= 2u;
        if ( a3 )
        {
          *(_DWORD *)(v10 + 24) |= 2u;
          *(_DWORD *)(a1 + 476) |= 4u;
        }
        v9 = 1;
      }
      else
      {
        v14 = *v11;
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v15 = (_QWORD *)v11[1], (_QWORD *)*v15 != v11) )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        Win32FreePool(v10);
        v16 = *(_DWORD *)(a1 + 464);
        if ( !v16 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2627);
          v16 = *(_DWORD *)(a1 + 464);
        }
        *(_DWORD *)(a1 + 464) = v16 - 1;
      }
      break;
    }
  }
  if ( a4 )
    *a4 = v9;
  return 1LL;
}
