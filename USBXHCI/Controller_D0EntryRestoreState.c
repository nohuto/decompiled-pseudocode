/*
 * XREFs of Controller_D0EntryRestoreState @ 0x1C0032754
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C00138F8 (WPP_RECORDER_SF_I.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0036BDC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0036E80 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  int v5; // r9d
  __int64 v6; // rcx
  unsigned int *v7; // r14
  unsigned int *v8; // rbp
  __int16 Ulong; // ax
  ULONGLONG v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  int v13; // ebx
  ULONGLONG UnbiasedInterruptTime; // rsi
  int v15; // eax
  __int16 v16; // ax
  ULONGLONG v17; // rax
  unsigned __int64 v18; // rdx
  ULONGLONG v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // ebx
  ULONGLONG v22; // rax
  int v23; // r8d
  unsigned __int64 v24; // rdx
  int v26; // [rsp+20h] [rbp-48h]
  const char *v27; // [rsp+28h] [rbp-40h]
  int v28; // [rsp+30h] [rbp-38h]
  const char *v29; // [rsp+38h] [rbp-30h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = "Code Path Requires Passive Level";
      v28 = 3823;
      v27 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, a3, v5);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 109, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v6 = *(_QWORD *)(a1 + 88);
  v7 = *(unsigned int **)(v6 + 32);
  v8 = v7 + 1;
  Ulong = XilRegister_ReadUlong(v6, v7 + 1);
  if ( (Ulong & 1) != 0 )
  {
    if ( (Ulong & 0x100) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v12 = 111;
      goto LABEL_14;
    }
    if ( (Ulong & 0x200) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v12 = 112;
      goto LABEL_14;
    }
    v13 = 20;
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL), 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 113, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v15 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, v15 | 0x200);
    while ( 1 )
    {
      v16 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v8);
      if ( (v16 & 0x400) != 0 )
        break;
      if ( (v16 & 0x200) == 0 )
      {
        v19 = KeQueryUnbiasedInterruptTime();
        v10 = v19;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = (v19 - UnbiasedInterruptTime) / 0xA;
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v20, v11, 115, v26, (v19 - UnbiasedInterruptTime) / 0xA);
        }
        v21 = 0;
        goto LABEL_37;
      }
      if ( !v13 )
      {
        v17 = KeQueryUnbiasedInterruptTime();
        v10 = v17;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = (v17 - UnbiasedInterruptTime) / 0x2710;
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v18, v11, 116, v26, (v17 - UnbiasedInterruptTime) / 0x2710);
        }
        goto LABEL_36;
      }
      Interval.QuadPart = -2000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v13;
    }
    v22 = KeQueryUnbiasedInterruptTime();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = (v22 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v24, v23, 114, v26, (v22 - UnbiasedInterruptTime) / 0x2710);
    }
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v8, 1024);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 110;
LABEL_14:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v12, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  }
LABEL_36:
  v21 = -1073741630;
LABEL_37:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE,
      v11,
      *(_QWORD *)(a1 + 8),
      v21,
      v27,
      v28,
      v29);
  if ( v21 < 0 )
  {
    ++*(_DWORD *)(a1 + 480);
    ++*(_DWORD *)(a1 + 524);
    *(_BYTE *)(a1 + 472) = 1;
  }
  return (unsigned int)v21;
}
