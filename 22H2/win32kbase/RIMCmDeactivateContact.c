/*
 * XREFs of RIMCmDeactivateContact @ 0x1C01800E0
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C015D000 (RIMEndAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017889C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0179B00 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017C108 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C017C758 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180370 (RIMCmIsContactSuppressed.c)
 *     rimReleaseCursor @ 0x1C0180720 (rimReleaseCursor.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v5; // ebp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  int IsContactSuppressed; // eax
  unsigned int v11; // ecx
  _QWORD *result; // rax

  v2 = a1 + 230;
  v5 = -__CFSHR__(*(_DWORD *)(a2 + 32), 3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 318);
  v6 = (_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v7 + 8) != a2 + 16 )
    goto LABEL_21;
  v8 = *(_QWORD **)(a2 + 24);
  if ( (_QWORD *)*v8 != v6 )
    goto LABEL_21;
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  v9 = a1[238];
  if ( !v9 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 322);
    v9 = a1[238];
  }
  a1[238] = v9 - 1;
  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  v11 = a1[239];
  if ( !IsContactSuppressed )
  {
    if ( !v11 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 326);
      v11 = a1[239];
    }
    a1[239] = --v11;
  }
  if ( a1[238] < v11 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 329);
  if ( !v5 && (a1[180] > 1u || (a1[78] & 0x20) != 0) )
    rimReleaseCursor(a1, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xB18uLL);
  if ( !v5 )
  {
    result = *(_QWORD **)v2;
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) == v2 )
    {
      *v6 = result;
      *(_QWORD *)(a2 + 24) = v2;
      result[1] = v6;
      *(_QWORD *)v2 = v6;
      return result;
    }
LABEL_21:
    __fastfail(3u);
  }
  return result;
}
