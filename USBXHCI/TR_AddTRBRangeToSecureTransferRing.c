/*
 * XREFs of TR_AddTRBRangeToSecureTransferRing @ 0x1C0007070
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Control_Transfer_MapIntoRing @ 0x1C00062A0 (Control_Transfer_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C0012A00 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     WPP_RECORDER_SF_DDd @ 0x1C001BCB0 (WPP_RECORDER_SF_DDd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_qiD @ 0x1C0042184 (WPP_RECORDER_SF_qiD.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall TR_AddTRBRangeToSecureTransferRing(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _OWORD *a6)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int v11; // edx
  __int64 v12; // r15
  _QWORD *v13; // r13
  _QWORD *i; // r12
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rdx
  char v23; // r8
  int v24; // [rsp+20h] [rbp-58h]
  int v25[14]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+8h]

  v6 = 0;
  v7 = a4;
  v25[0] = 0;
  if ( *(_BYTE *)(a1 + 280) )
  {
    v11 = 0;
    v12 = *(_QWORD *)(a1 + 304);
    v26 = 0;
    if ( !a2 || (v13 = (_QWORD *)*a2, (_QWORD *)*a2 == a2) )
      v13 = a3;
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(a1 + 288);
    *(_DWORD *)(v12 + 32) = 44;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 32) + 24LL))(a1, v12);
      v11 = 0;
    }
    *(_QWORD *)(v12 + 72) = v13[3];
    *(_DWORD *)(v12 + 80) = v7;
    *(_OWORD *)(v12 + 40) = *a6;
    *(_OWORD *)(v12 + 56) = a6[1];
    if ( a2 )
    {
      for ( i = (_QWORD *)*a2; a2 != i; v7 = 0 )
      {
        if ( v7 <= *(_DWORD *)(a1 + 196) )
        {
          do
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_qiD(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL), v11, (_DWORD)a3, 25, v24, i[2], i[3], v7);
              v11 = v26;
            }
            v15 = v7++;
            v16 = i[2] + 16 * v15;
            v17 = v11++;
            v26 = v11;
            *(_OWORD *)(v12 + 16 * v17 + 88) = *(_OWORD *)v16;
          }
          while ( v11 != *(_DWORD *)(a1 + 312)
               && (*(_DWORD *)(v16 + 12) & 0xFC00) != 0x1800
               && v7 <= *(_DWORD *)(a1 + 196) );
        }
        i = (_QWORD *)*i;
      }
    }
    if ( v7 == a5 )
    {
LABEL_26:
      *(_DWORD *)(v12 + 84) = v11;
      v21 = 16 * v11;
      if ( v21 + 88 >= v21 )
        v6 = v21 + 88;
      if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), v12, v6, v25, 4) >= 0
        && v25[0] < 0
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(_QWORD *)(a1 + 48);
        v23 = *(_BYTE *)(v22 + 135);
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_DDd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v22,
          14,
          27,
          (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
          v23,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v25[0]);
      }
    }
    else
    {
      while ( 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_qiD(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL), v11, (_DWORD)a3, 26, v24, a3[2], a3[3], v7);
          v11 = v26;
        }
        v18 = v7++;
        v19 = a3[2] + 16 * v18;
        v20 = v11++;
        v26 = v11;
        *(_OWORD *)(v12 + 16 * v20 + 88) = *(_OWORD *)v19;
        if ( v11 == *(_DWORD *)(a1 + 312) )
          break;
        if ( (*(_DWORD *)(v19 + 12) & 0xFC00) == 0x1800 )
        {
          if ( *(_QWORD *)v19 != a3[3] )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_sds(
                WPP_GLOBAL_Control->DeviceExtension,
                v11,
                (_DWORD)a3,
                a4,
                v24,
                (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
                228,
                (__int64)"BUGBUG: Link TRB in last segment does not point back to itself");
            goto LABEL_38;
          }
          v7 = 0;
        }
        if ( v7 == a5 )
          goto LABEL_26;
      }
      if ( v7 == a5 )
        goto LABEL_26;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          (_DWORD)a3,
          a4,
          v24,
          (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
          247,
          (__int64)"BUGBUG: Current TRB Index does not match expected value");
LABEL_38:
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
}
