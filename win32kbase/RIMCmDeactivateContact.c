/*
 * XREFs of RIMCmDeactivateContact @ 0x1C01DE86C
 * Callers:
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01D5678 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01D6A24 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01D9470 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C01D9C8C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     RIMCmIsContactSuppressed @ 0x1C00F1A7A (RIMCmIsContactSuppressed.c)
 *     rimFindLastDeviceFrame @ 0x1C01D256C (rimFindLastDeviceFrame.c)
 *     rimReleaseCursor @ 0x1C01DEE8C (rimReleaseCursor.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 LastDeviceFrame; // rax
  __int64 v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // esi
  _QWORD *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    LastDeviceFrame = rimFindLastDeviceFrame(*(_QWORD *)(v3 + 336), v3);
    v6 = LastDeviceFrame;
    if ( LastDeviceFrame )
    {
      v7 = 0;
      if ( *(_DWORD *)(LastDeviceFrame + 24) )
      {
        do
        {
          v8 = *(_QWORD *)(v6 + 232);
          v9 = 192LL * v7;
          if ( *(unsigned __int16 *)(v9 + v8 + 8) == *(_DWORD *)(a2 + 4) && (*(_DWORD *)(v9 + v8 + 28) & 0x2000006) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 333);
          ++v7;
        }
        while ( v7 != *(_DWORD *)(v6 + 24) );
      }
    }
  }
  v10 = a1 + 976;
  v11 = -__CFSHR__(*(_DWORD *)(a2 + 32), 3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 342);
  v12 = (_QWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v13 + 8) != a2 + 16 )
    goto LABEL_28;
  v14 = *(_QWORD **)(a2 + 24);
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_28;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  if ( !*(_DWORD *)(a1 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 346);
  --*(_DWORD *)(a1 + 1008);
  if ( !(unsigned int)RIMCmIsContactSuppressed(a2) )
  {
    if ( !*(_DWORD *)(a1 + 1012) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 350);
    --*(_DWORD *)(a1 + 1012);
  }
  if ( *(_DWORD *)(a1 + 1008) < *(_DWORD *)(a1 + 1012) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 353);
  if ( !v11 && (*(_DWORD *)(a1 + 768) > 1u || (*(_DWORD *)(a1 + 360) & 0x20) != 0) )
    rimReleaseCursor(a1, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xB30uLL);
  if ( !v11 )
  {
    result = *(_QWORD **)v10;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
    {
      *v12 = result;
      *(_QWORD *)(a2 + 24) = v10;
      result[1] = v12;
      *(_QWORD *)v10 = v12;
      return result;
    }
LABEL_28:
    __fastfail(3u);
  }
  return result;
}
