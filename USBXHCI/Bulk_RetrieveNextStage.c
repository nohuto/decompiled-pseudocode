/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C0011FDC
 * Callers:
 *     Bulk_MappingLoop @ 0x1C0011F10 (Bulk_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDq @ 0x1C000DE84 (WPP_RECORDER_SF_DDDq.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_Transfer_Complete @ 0x1C000E8D8 (Bulk_Transfer_Complete.c)
 *     Bulk_Stage_Acquire @ 0x1C001224C (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C0012328 (Bulk_TransferData_ConfigureBuffer.c)
 *     TR_ValidateSecureTransferType @ 0x1C0012478 (TR_ValidateSecureTransferType.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C00126B0 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C00127F0 (WPP_RECORDER_SF_DDDqq.c)
 *     Bulk_TransferData_Initialize @ 0x1C00128DC (Bulk_TransferData_Initialize.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0012F30 (Bulk_Transfer_CompleteCancelable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0041F60 (WPP_RECORDER_SF_DDDd.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0047C80 (WPP_RECORDER_SF_DDDqd.c)
 */

bool __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // bp
  KSPIN_LOCK *v2; // r15
  int v4; // edi
  KIRQL v5; // al
  __int64 v6; // r9
  int v7; // r8d
  _QWORD *v8; // r13
  int v9; // r8d
  _DWORD *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rsi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // edx
  __int64 *v21; // rax
  int v22; // edx
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rdx
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rcx
  int v34; // edx
  int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 360) = 0LL;
  v36 = 0LL;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 344);
  *(_BYTE *)(a1 + 104) = v5;
  if ( *(_DWORD *)(a1 + 348) == v7 )
  {
    v4 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v22 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v22) = 5;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v22,
        14,
        20,
        (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v7);
    }
    goto LABEL_21;
  }
  v8 = (_QWORD *)(a1 + 368);
  if ( (_QWORD *)*v8 == v8 )
    goto LABEL_3;
  v11 = *(_DWORD **)(a1 + 376);
  v12 = v11[26];
  if ( v11[28] >= v12 )
    goto LABEL_3;
  if ( *(_DWORD *)(a1 + 332) != 3 )
  {
    v23 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 376));
    *(_QWORD *)(a1 + 360) = v23;
    if ( v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = *(_QWORD *)(a1 + 48);
        v26 = *(unsigned __int8 *)(v25 + 135);
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v25, v26, 21);
      }
    }
    else
    {
      v4 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v27 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v27) = 5;
        WPP_RECORDER_SF_DDDq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v27, v24, 22);
      }
    }
    goto LABEL_21;
  }
  if ( v11[30] == v11[29] )
  {
    LOBYTE(v6) = 1;
    Bulk_Transfer_CompleteCancelable(a1, *(_QWORD *)(a1 + 376), 3221229568LL, v6);
LABEL_3:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    while ( 1 )
    {
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 72),
             &v36);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v34 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v34) = 5;
          WPP_RECORDER_SF_DDDd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v34,
            v9,
            23,
            (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_DWORD *)(a1 + 64),
            v4);
        }
        return v4 >= 0;
      }
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              v36,
              off_1C0063090);
      Bulk_TransferData_Initialize(a1, v13, v36);
      v14 = TR_ValidateSecureTransferType(a1, *(_QWORD *)(v13 + 48));
      if ( v14 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = *(_QWORD *)(a1 + 48);
          v29 = *(unsigned __int8 *)(v28 + 135);
          LOBYTE(v28) = 2;
          WPP_RECORDER_SF_DDDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v28,
            v29,
            24,
            v35,
            v29,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_DWORD *)(a1 + 64),
            v36,
            v14);
        }
      }
      else
      {
        Bulk_TransferData_DetermineTransferMechanism(v13);
        v15 = Bulk_TransferData_ConfigureBuffer(v13);
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v30 = *(_QWORD *)(a1 + 48);
            v31 = *(unsigned __int8 *)(v30 + 135);
            LOBYTE(v30) = 3;
            WPP_RECORDER_SF_DDDqd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v30,
              v31,
              25,
              v35,
              v31,
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_DWORD *)(a1 + 64),
              v36,
              v15);
          }
        }
        else
        {
          v16 = *(_QWORD *)(v13 + 24);
          *(_DWORD *)(v13 + 64) = 1;
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void (__fastcall *)(__int64)))(WdfFunctions_01023 + 3144))(
                 WdfDriverGlobals,
                 v16,
                 Bulk_WdfEvtRequestCancel);
          if ( v4 >= 0 )
          {
            v18 = Bulk_Stage_Acquire(v13);
            *(_QWORD *)(a1 + 360) = v18;
            if ( !*(_DWORD *)(a1 + 348) )
            {
              v19 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
              if ( *(_DWORD *)(v19 + 24) > 1u )
              {
                v33 = *(unsigned int *)(*(_QWORD *)(v13 + 48) + 64LL);
                if ( (unsigned int)v33 < *(_DWORD *)(v19 + 48) )
                  v1 = *(_WORD *)(*(_QWORD *)(v19 + 56) + 2 * v33);
              }
              *(_WORD *)(a1 + 112) = v1;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v20) = 4;
              WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v20, v18, 27);
            }
            *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
            v21 = *(__int64 **)(a1 + 376);
            if ( (_QWORD *)*v21 != v8 )
              __fastfail(3u);
            *(_QWORD *)v13 = v8;
            *(_QWORD *)(v13 + 8) = v21;
            *v21 = v13;
            *(_QWORD *)(a1 + 376) = v13;
            goto LABEL_21;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v32 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v32) = 3;
            WPP_RECORDER_SF_DDDqd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v32,
              v17,
              26,
              v35,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_DWORD *)(a1 + 64),
              *(_QWORD *)(v13 + 24),
              v4);
          }
          *(_DWORD *)(v13 + 64) = 3;
        }
      }
      Bulk_Transfer_Complete(a1, v13);
    }
  }
  v11[28] = v12;
LABEL_21:
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  return v4 >= 0;
}
