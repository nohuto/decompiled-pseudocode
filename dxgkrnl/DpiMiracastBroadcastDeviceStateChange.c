/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x1C0399F0C
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060170 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0060710 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C039AACC (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x1C006294C (McTemplateK0xqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  _DWORD *v4; // rdi
  _DWORD *Pool2; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  int updated; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v3 = (_DWORD *)(a1 + 416);
  v4 = (_DWORD *)(a1 + 408);
  DestinationString = 0LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    McTemplateK0xqq_EtwWriteTransfer(a1, a2, a3, *(_QWORD *)(a1 + 96), *v4, *v3);
  if ( !*(_QWORD *)(a1 + 592) )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 532LL, 1953656900LL);
    *(_QWORD *)(a1 + 592) = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741801LL;
      v8 = 6LL;
LABEL_9:
      WdLogSingleEntry1(v8, v7);
      return (unsigned int)v7;
    }
    *Pool2 = 1;
    memset((void *)(*(_QWORD *)(a1 + 592) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 592) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 524LL) = *v4;
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 528LL) = *v3;
  updated = ZwUpdateWnfStateData(
              &WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
              *(_QWORD *)(a1 + 592),
              532LL,
              0LL,
              a1 + 420,
              0,
              0);
  v7 = updated;
  if ( updated < 0 )
  {
    v8 = 2LL;
    goto LABEL_9;
  }
  return (unsigned int)v7;
}
