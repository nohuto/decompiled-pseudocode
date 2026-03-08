/*
 * XREFs of Controller_D0ExitSaveState @ 0x1C0032A8C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C00138F8 (WPP_RECORDER_SF_I.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0036BDC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0036E80 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_D0ExitSaveState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // edx
  int v6; // r9d
  __int64 v7; // rcx
  unsigned int *v8; // rsi
  unsigned int *v9; // r14
  __int16 Ulong; // ax
  ULONGLONG v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  ULONGLONG UnbiasedInterruptTime; // rbp
  int v15; // eax
  int i; // esi
  __int16 v17; // ax
  ULONGLONG v18; // rax
  unsigned __int64 v19; // rdx
  ULONGLONG v20; // rax
  unsigned __int64 v21; // rdx
  ULONGLONG v22; // rax
  int v23; // r8d
  unsigned __int64 v24; // rdx
  int v26; // [rsp+20h] [rbp-48h]
  const char *v27; // [rsp+28h] [rbp-40h]
  int v28; // [rsp+30h] [rbp-38h]
  const char *v29; // [rsp+38h] [rbp-30h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = "Code Path Requires Passive Level";
      v28 = 4300;
      v27 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, a3, v6);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 125, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v7 = *(_QWORD *)(a1 + 88);
  v8 = *(unsigned int **)(v7 + 32);
  v9 = v8 + 1;
  Ulong = XilRegister_ReadUlong(v7, v8 + 1);
  if ( (Ulong & 1) != 0 )
  {
    if ( (Ulong & 0x100) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v13 = 127;
      goto LABEL_14;
    }
    if ( (Ulong & 0x200) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v13 = 128;
      goto LABEL_14;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 129, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v15 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v8);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v8, v15 | 0x100);
    for ( i = 20; ; --i )
    {
      v17 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v9);
      if ( (v17 & 0x400) != 0 )
        break;
      if ( (v17 & 0x100) == 0 )
      {
        v20 = KeQueryUnbiasedInterruptTime();
        v11 = v20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = (v20 - UnbiasedInterruptTime) / 0xA;
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v12, 131, v26, (v20 - UnbiasedInterruptTime) / 0xA);
        }
        goto LABEL_36;
      }
      if ( !i )
      {
        v18 = KeQueryUnbiasedInterruptTime();
        v11 = v18;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = (v18 - UnbiasedInterruptTime) / 0x2710;
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v19, v12, 132, v26, (v18 - UnbiasedInterruptTime) / 0x2710);
        }
        goto LABEL_35;
      }
      Interval.QuadPart = -2000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v22 = KeQueryUnbiasedInterruptTime();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = (v22 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v24, v23, 130, v26, (v22 - UnbiasedInterruptTime) / 0x2710);
    }
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v9, 1024);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 126;
LABEL_14:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v13, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  }
LABEL_35:
  v3 = -1073741630;
LABEL_36:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v11,
      &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE,
      v12,
      *(_QWORD *)(a1 + 8),
      v3,
      v27,
      v28,
      v29);
  return v3;
}
