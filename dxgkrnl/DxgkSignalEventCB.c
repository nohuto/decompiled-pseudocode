/*
 * XREFs of DxgkSignalEventCB @ 0x1C005CF90
 * Callers:
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C004C584 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0302CC0 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C005C3E0 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C036ED50 (-DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 */

__int64 __fastcall DxgkSignalEventCB(struct _DXGKARGCB_SIGNALEVENT *a1)
{
  struct _DXGKARGCB_SIGNALEVENT::$3484840290AF70A1F2DEBFE8F287B9A7::$345C9315266921A5615E194C0B7E8CDB Flags; // eax
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  const wchar_t *v8; // rax
  HANDLE hEvent; // rax
  DXG_VMBUS_CHANNEL_BASE *v10; // rcx
  void *v11; // rax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  const wchar_t *v16; // rax
  _QWORD *hDxgkProcess; // rdx
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v20; // r10
  unsigned __int64 v21; // rdx
  HANDLE v22; // rax
  int v23; // eax
  unsigned __int8 v24[16]; // [rsp+68h] [rbp+17h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp+27h]
  HANDLE v26; // [rsp+80h] [rbp+2Fh]
  __int128 v27; // [rsp+88h] [rbp+37h]

  Flags = (struct _DXGKARGCB_SIGNALEVENT::$3484840290AF70A1F2DEBFE8F287B9A7::$345C9315266921A5615E194C0B7E8CDB)a1->Flags;
  LODWORD(v3) = 0;
  if ( *(unsigned int *)&Flags >= 2 )
  {
    v4 = 16571LL;
    WdLogSingleEntry1(2LL, 16571LL);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return 3221225485LL;
    v8 = L"Reserved flags are set";
LABEL_25:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v6, v5, v7, 0LL, 0, -1, v8, v4, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Flags & 1) != 0 )
  {
    hEvent = a1->hEvent;
    v10 = *(DXG_VMBUS_CHANNEL_BASE **)hEvent;
    if ( !*(_QWORD *)hEvent )
    {
      KeSetEvent(*((PRKEVENT *)hEvent + 1), 0, 0);
      return (unsigned int)v3;
    }
    v11 = (void *)*((_QWORD *)hEvent + 1);
    *(_OWORD *)v24 = 0LL;
    v24[12] = 2;
    *(_DWORD *)&v24[12] = *(_WORD *)&v24[12] & 0x1FF;
    v25 = 0LL;
    v26 = v11;
    v27 = 0uLL;
    v12 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v10, v24, (struct DXGKVMB_COMMAND_BASE *)v24, 0x30u);
    v3 = v12;
    if ( v12 >= 0 )
      return (unsigned int)v3;
    WdLogSingleEntry1(2LL, v12);
    if ( !bTracingEnabled )
      return (unsigned int)v3;
    LOBYTE(v14) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return (unsigned int)v3;
    v16 = L"Failed to send SIGNALGUESTEVENT command: 0x%I64x";
LABEL_12:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v14, v13, v15, 0LL, 0, -1, v16, v3, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v3;
  }
  hDxgkProcess = a1->hDxgkProcess;
  if ( *((_BYTE *)a1->hDxgkProcess + 136) )
  {
    *(_QWORD *)v24 = a1->hEvent;
    *(_QWORD *)&v24[8] = hDxgkProcess[5];
    v25 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    return (*((__int64 (__fastcall **)(unsigned __int8 *))Global + 3))(v24);
  }
  v20 = (DXG_VMBUS_CHANNEL_BASE *)hDxgkProcess[16];
  if ( v20 )
  {
    v21 = hDxgkProcess[11];
    *(_OWORD *)v24 = 0LL;
    v24[12] = 2;
    *(_DWORD *)&v24[12] = *(_WORD *)&v24[12] & 0x1FF;
    v22 = a1->hEvent;
    v25 = v21 != 0 ? 3uLL : 0;
    v27 = v21;
    v26 = v22;
    v23 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v20, v24, (struct DXGKVMB_COMMAND_BASE *)v24, 0x30u);
    v3 = v23;
    if ( v23 >= 0 )
      return (unsigned int)v3;
    WdLogSingleEntry1(2LL, v23);
    if ( !bTracingEnabled )
      return (unsigned int)v3;
    LOBYTE(v14) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return (unsigned int)v3;
    v16 = L"Failed to send SIGNALGUESTEVENT  command: 0x%I64x";
    goto LABEL_12;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v4 = 16620LL;
    WdLogSingleEntry1(2LL, 16620LL);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return 3221225485LL;
    v8 = L"Invalid IRQL for DxgkCbSignalEvent";
    goto LABEL_25;
  }
  return DxgkSignalEventCBPaged(a1);
}
