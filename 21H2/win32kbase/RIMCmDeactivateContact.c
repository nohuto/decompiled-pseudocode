/*
 * XREFs of RIMCmDeactivateContact @ 0x1C01B6684
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01B198C (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C01B2140 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimFindLastDeviceFrame @ 0x1C01A921C (rimFindLastDeviceFrame.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     rimReleaseCursor @ 0x1C01B6B9C (rimReleaseCursor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 LastDeviceFrame; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  _DWORD *v9; // rsi
  int v10; // ebp
  _QWORD *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // eax
  _QWORD *result; // rax

  v4 = (_DWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    LastDeviceFrame = rimFindLastDeviceFrame(*(_QWORD *)(v5 + 336), v5);
    v7 = LastDeviceFrame;
    if ( LastDeviceFrame )
    {
      v8 = 0LL;
      if ( *(_DWORD *)(LastDeviceFrame + 24) )
      {
        do
        {
          a1 = *(_QWORD *)(v7 + 232);
          v5 = 192 * v8;
          if ( *(unsigned __int16 *)(192 * v8 + a1 + 8) == *(_DWORD *)(a2 + 4)
            && (*(_DWORD *)(v5 + a1 + 28) & 0x2000006) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3);
          }
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (_DWORD)v8 != *(_DWORD *)(v7 + 24) );
      }
    }
  }
  v9 = v4 + 244;
  v10 = -__CFSHR__(*(_DWORD *)(a2 + 32), 3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3);
  v11 = (_QWORD *)(a2 + 16);
  v12 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v12 + 8) != a2 + 16 )
    goto LABEL_28;
  v13 = *(_QWORD **)(a2 + 24);
  if ( (_QWORD *)*v13 != v11 )
    goto LABEL_28;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  v14 = v4[252];
  if ( !v14 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v5, a3);
    v14 = v4[252];
  }
  v4[252] = v14 - 1;
  v15 = (unsigned int)RIMCmIsContactSuppressed(a2) == 0;
  v19 = v4[253];
  if ( v15 )
  {
    if ( !v19 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      v19 = v4[253];
    }
    v4[253] = --v19;
  }
  if ( v4[252] < v19 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  if ( !v10 && (v4[192] > 1u || (v4[90] & 0x20) != 0) )
    rimReleaseCursor(v4, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xB18uLL);
  if ( !v10 )
  {
    result = *(_QWORD **)v9;
    if ( *(_DWORD **)(*(_QWORD *)v9 + 8LL) == v9 )
    {
      *v11 = result;
      *(_QWORD *)(a2 + 24) = v9;
      result[1] = v11;
      *(_QWORD *)v9 = v11;
      return result;
    }
LABEL_28:
    __fastfail(3u);
  }
  return result;
}
