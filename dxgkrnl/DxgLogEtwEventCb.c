/*
 * XREFs of DxgLogEtwEventCb @ 0x1C004D550
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0juhbr2_EtwWriteTransfer @ 0x1C004D804 (McTemplateK0juhbr2_EtwWriteTransfer.c)
 */

char __fastcall DxgLogEtwEventCb(_QWORD *a1, int a2, unsigned __int16 a3, __int64 a4)
{
  __int64 DxgAdapter; // rax
  __int64 v6; // rsi
  const wchar_t *v7; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  const wchar_t *v14; // rsi
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // r11d
  int v24; // edi

  DxgAdapter = *a1 - *(_QWORD *)&GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data1;
  v6 = a3;
  if ( *a1 == *(_QWORD *)&GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data1 )
    DxgAdapter = a1[1] - *(_QWORD *)GUID_DXGKDDI_AZURE_TRIAGE_EVENT.Data4;
  v7 = 0LL;
  if ( DxgAdapter )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      LOBYTE(DxgAdapter) = McTemplateK0juhbr2_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)a1, a2, a3, a4);
  }
  else if ( a3 == 568 )
  {
    v14 = (const wchar_t *)(a4 + 16);
    if ( a4 != -16 && wcsnlen((const wchar_t *)(a4 + 16), 0xFFuLL) >= 0xFF )
    {
      WdLogSingleEntry1(1LL, 289LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            v15,
            v17,
            0LL,
            2,
            -1,
            L"wcsnlen_s(eventNotification->EventDescription, DXGKDDI_PARTITION_EVENT_DESCRIPTION_MAX) < DXGKDDI_PARTITION_"
             "EVENT_DESCRIPTION_MAX",
            289LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a4);
    v18 = *(_QWORD *)(a4 + 560);
    v19 = *(_QWORD *)(a4 + 552);
    v20 = *(_QWORD *)(a4 + 544);
    v21 = *(_QWORD *)(a4 + 536);
    v22 = *(_QWORD *)(a4 + 528);
    v23 = *(_DWORD *)(a4 + 12);
    v24 = *(_DWORD *)(a4 + 8);
    if ( bTracingEnabled )
    {
      if ( DxgAdapter )
        v7 = (const wchar_t *)(DxgAdapter + 324);
      LOBYTE(DxgAdapter) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(DxgAdapter) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                               v18,
                               v19,
                               v20,
                               v7,
                               v24,
                               v23,
                               v14,
                               v22,
                               v21,
                               v20,
                               v19,
                               v18);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 279LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v9,
        v8,
        v10,
        0LL,
        2,
        -1,
        L"EventBufferSize == sizeof(DXGKDDICB_PARTITIONING_EVENT_NOTIFICATION)",
        279LL,
        0LL,
        0LL,
        0LL,
        0LL);
    LOBYTE(DxgAdapter) = WdLogSingleEntry1(2LL, v6);
    if ( bTracingEnabled )
    {
      LOBYTE(DxgAdapter) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(DxgAdapter) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                               v12,
                               v11,
                               v13,
                               0LL,
                               0,
                               -1,
                               L"Driver requested partitioning event with wrong event size: %d",
                               v6,
                               0LL,
                               0LL,
                               0LL,
                               0LL);
    }
  }
  return DxgAdapter;
}
