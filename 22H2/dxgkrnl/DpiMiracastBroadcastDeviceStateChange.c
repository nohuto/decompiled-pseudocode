/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x1C02CDE08
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00542F0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C00548C0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0054DA8 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00557C0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02CE9DC (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x1C0056B24 (McTemplateK0xqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  int updated; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-38h]
  int v18; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    v18 = *(_DWORD *)(a1 + 416);
    v17 = *(_DWORD *)(a1 + 408);
    McTemplateK0xqq_EtwWriteTransfer(a1, a2, a3, *(_QWORD *)(a1 + 96), v17, v18);
  }
  v4 = *(_QWORD *)(a1 + 592);
  if ( !v4 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x214uLL, 0x74727044u);
    *(_QWORD *)(a1 + 592) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
      LODWORD(v11) = -1073741801;
      *(_QWORD *)(v10 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v10);
      return (unsigned int)v11;
    }
    *PoolWithTag = 1;
    memset((void *)(*(_QWORD *)(a1 + 592) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 592) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
    v4 = *(_QWORD *)(a1 + 592);
  }
  *(_DWORD *)(v4 + 524) = *(_DWORD *)(a1 + 408);
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 528LL) = *(_DWORD *)(a1 + 416);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
              *(_QWORD *)(a1 + 592),
              532LL,
              0LL,
              a1 + 420,
              0,
              0);
  v11 = updated;
  if ( updated < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 24) = v11;
    WdLogEvent5_WdError(v15);
  }
  return (unsigned int)v11;
}
