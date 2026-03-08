/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C0009BA0
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0006D98 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAC4 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0017FB0 (WPP_RECORDER_SF_ddd.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C003C390 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     WPP_RECORDER_SF_ddi @ 0x1C003D6C4 (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C003D7C8 (WPP_RECORDER_SF_ddqL.c)
 *     TR_TransferEventHandler @ 0x1C0041CD4 (TR_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0042974 (Control_ProcessTransferEventWithED0.c)
 */

char __fastcall Endpoint_TransferEventHandler(__int64 a1, __m128i **a2, int a3)
{
  __m128i *v4; // rcx
  unsigned __int64 v6; // rax
  int v7; // r8d
  __m128i *v8; // rdx
  signed __int64 v9; // rcx
  __m128i *v10; // rbp
  __int64 v11; // rax
  signed __int64 v12; // rdx
  int v13; // esi
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __int32 v18; // edx
  const char *v19; // rax
  int v20; // ett
  int v21; // edx
  char v23; // [rsp+28h] [rbp-30h]
  char v24; // [rsp+68h] [rbp+10h] BYREF

  v24 = 0;
  v4 = *a2;
  if ( (_mm_srli_si128((*a2)[21], 8).m128i_u8[0] & 4) != 0
    && *(_BYTE *)(a1 + 11) == 2
    && (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    v6 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LOBYTE(v6) = WPP_RECORDER_SF_ddqL((unsigned int)a2[10], (_DWORD)a2, a3, 87);
    return v6;
  }
  v7 = *(unsigned __int8 *)(a1 + 11);
  if ( (!_bittest64(v4[21].m128i_i64, 0x3Eu) || (_BYTE)v7 != 0xC7)
    && ((_mm_srli_si128(v4[21], 8).m128i_u8[0] & 0x20) == 0 || (_BYTE)v7 != 0xC6)
    && ((_BYTE)v7 == 5 || (_BYTE)v7 == 33 || (unsigned __int8)(v7 + 64) <= 0x1Fu) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = a2[2][8].m128i_u8[7];
      v23 = v21;
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_ddd(
        v4[4].m128i_i64[1],
        v21,
        13,
        88,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        v23,
        *((_DWORD *)a2 + 36),
        v7);
    }
    Controller_HwVerifierBreakIfEnabled(
      (unsigned int)*a2,
      (unsigned int)a2[1],
      (unsigned int)a2[3],
      2048,
      (__int64)"Unrecognized completion code in Transfer Event TRB",
      0LL,
      (__int64)(a2 + 23));
    LOBYTE(v6) = Controller_ReportFatalErrorEx(
                   (unsigned int)*a2,
                   2,
                   4112,
                   *(unsigned __int8 *)(a1 + 11),
                   0LL,
                   (__int64)a2[2],
                   (__int64)a2,
                   0LL);
    return v6;
  }
  if ( !*((_BYTE *)a2 + 37) )
  {
    v8 = a2[11];
    if ( v8 )
    {
      LOBYTE(v6) = (*(__int64 (__fastcall **)(__int64))(v8[2].m128i_i64[0] + 88))(a1);
    }
    else if ( (*(_DWORD *)a1 & 3) != 0 )
    {
      LODWORD(v6) = (*(_DWORD *)a1 & 3) - 1;
      if ( (*(_DWORD *)a1 & 3) != 1LL )
      {
        v6 = (*(_DWORD *)a1 & 3) - 2LL;
        if ( v6 <= 1 )
        {
          if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
            LOBYTE(v6) = Bulk_ProcessTransferEventWithED1(a1, 0LL);
          else
            LOBYTE(v6) = Bulk_ProcessTransferEventWithED0(a1, 0LL);
        }
      }
    }
    else if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      LOBYTE(v6) = Control_ProcessTransferEventWithED1((__int64 *)a1, 0LL);
    }
    else
    {
      LOBYTE(v6) = Control_ProcessTransferEventWithED0(a1, 0LL);
    }
    return v6;
  }
  v9 = *(_QWORD *)a1;
  v10 = a2[17];
  if ( !*(_QWORD *)a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqL((unsigned int)a2[10], (_DWORD)a2, v7, 89);
LABEL_61:
    LOBYTE(v6) = Endpoint_HaltedCompletionCode(a2, *(unsigned __int8 *)(a1 + 11));
    if ( (_BYTE)v6 )
    {
      _m_prefetchw(a2 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x20u) & 0x20) == 0 )
      {
        a2[17][1].m128i_i32[2] = v18;
        _InterlockedOr((volatile signed __int32 *)a2 + 8, 4u);
        LOBYTE(v6) = ESM_AddEvent(a2 + 37);
        return v6;
      }
      v19 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_68:
      LOBYTE(v6) = Controller_HwVerifierBreakIfEnabled(
                     (unsigned int)*a2,
                     (unsigned int)a2[1],
                     (unsigned int)a2[3],
                     0x2000000,
                     (__int64)v19,
                     0LL,
                     0LL);
      return v6;
    }
    if ( (unsigned __int8)(v18 - 26) > 2u )
      return v6;
    _m_prefetchw(a2 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x10u) & 0x10) != 0 )
    {
      v19 = "Received duplicate Stopped Transfer Events";
      goto LABEL_68;
    }
    _m_prefetchw(a2 + 4);
    LODWORD(v6) = *((_DWORD *)a2 + 8);
    do
    {
      v20 = v6;
      LODWORD(v6) = _InterlockedCompareExchange((volatile signed __int32 *)a2 + 8, v6 ^ 8, v6);
    }
    while ( v20 != (_DWORD)v6 );
    if ( (v6 & 8) != 0 )
      LOBYTE(v6) = ESM_AddEvent(a2 + 37);
    return v6;
  }
  v11 = v10[2].m128i_i64[0];
  v12 = *(_QWORD *)(v11 + 24);
  if ( v9 >= v12 && v9 < v12 + *(unsigned int *)(v11 + 44) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqL((unsigned int)a2[10], v12, v7, 90);
    goto LABEL_61;
  }
  v13 = 1;
  if ( v10->m128i_i32[2] )
  {
    while ( !(unsigned __int8)TR_TransferEventHandler(a1, a2[17][3].m128i_i64[13 * (unsigned int)(v13 - 1)]) )
    {
      if ( (unsigned int)++v13 > v10->m128i_i32[2] )
        goto LABEL_35;
    }
    v6 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = (_BYTE)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = a2[2][8].m128i_u8[7];
        LOBYTE(v14) = 5;
        LOBYTE(v6) = WPP_RECORDER_SF_ddd(
                       (unsigned int)a2[10],
                       v14,
                       13,
                       91,
                       (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
                       a2[2][8].m128i_i8[7],
                       *((_DWORD *)a2 + 36),
                       (unsigned __int8)v13 + 1);
      }
    }
    return v6;
  }
LABEL_35:
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_ddi((unsigned int)a2[10], v12, v7, 92);
    }
    LOBYTE(v6) = Controller_ReportFatalErrorEx((unsigned int)*a2, 2, 4126, 0, 0LL, (__int64)a2[2], (__int64)a2, 0LL);
    return v6;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_dd(
        (unsigned int)a2[10],
        v12,
        13,
        93,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        a2[2][8].m128i_i8[7],
        *((_DWORD *)a2 + 36));
    }
    goto LABEL_61;
  }
  if ( (unsigned __int8)Endpoint_Stream_IsTransferEventLikelyDuplicate(a1, a2, &v24) )
  {
    if ( _bittest64((*a2)[21].m128i_i64, 0x26u) )
    {
      v6 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      v17 = 94;
    }
    else
    {
      if ( !v24 || (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_ddi((unsigned int)a2[10], v15, v16, 96);
        }
        LOBYTE(v6) = Controller_ReportFatalErrorEx((unsigned int)*a2, 2, 4128, 0, 0LL, (__int64)a2[2], (__int64)a2, 0LL);
        return v6;
      }
      v6 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      v17 = 95;
    }
    LOBYTE(v15) = 3;
    LOBYTE(v6) = WPP_RECORDER_SF_ddi((unsigned int)a2[10], v15, v16, v17);
    return v6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_ddi((unsigned int)a2[10], v15, v16, 97);
  }
  LOBYTE(v6) = Controller_ReportFatalErrorEx((unsigned int)*a2, 2, 4127, 0, 0LL, (__int64)a2[2], (__int64)a2, 0LL);
  return v6;
}
