/*
 * XREFs of NdisWriteErrorLogEntry @ 0x1C006D1D0
 * Callers:
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C001E3DC (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020E08 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C0033B94 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     NdisMAllocateMapRegisters @ 0x1C0137120 (NdisMAllocateMapRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     McTemplateK0jqxzqqQR5_EtwWriteTransfer @ 0x1C006CFD0 (McTemplateK0jqxzqqQR5_EtwWriteTransfer.c)
 */

void NdisWriteErrorLogEntry(NDIS_HANDLE NdisAdapterHandle, ULONG ErrorCode, ULONG NumberOfErrorValues, ...)
{
  __int64 v5; // rax
  size_t v6; // rsi
  const void *v7; // r15
  size_t v8; // r14
  unsigned __int64 v9; // rax
  char *ErrorLogEntry; // rax
  void *v11; // rbx
  __int64 v12; // rdx
  unsigned int *v13; // r8
  __int64 v14; // rcx
  char v15[8]; // [rsp+30h] [rbp-78h]
  unsigned int v16; // [rsp+C0h] [rbp+18h] BYREF

  v16 = NumberOfErrorValues;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)NdisAdapterHandle,
      ErrorCode);
    NumberOfErrorValues = v16;
  }
  if ( NdisAdapterHandle )
  {
    v5 = *((_QWORD *)NdisAdapterHandle + 482);
    v6 = *(unsigned __int16 *)(v5 + 2);
    v7 = *(const void **)(v5 + 8);
    v8 = v6;
    v9 = v6 + 48 + 4LL * NumberOfErrorValues;
    if ( v9 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v9 <= 0xF0
        || (v6 = *((unsigned __int16 *)NdisAdapterHandle + 1905),
            v7 = (const void *)*((_QWORD *)NdisAdapterHandle + 477),
            v8 = v6,
            v9 = v6 + 48 + 4LL * NumberOfErrorValues,
            v9 <= 0xFFFFFFFF)
        && (unsigned int)v9 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*((PVOID *)NdisAdapterHandle + 478), v9);
        v11 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = ErrorCode;
          *(_WORD *)ErrorLogEntry = 0;
          v12 = 0LL;
          *((_QWORD *)ErrorLogEntry + 2) = 0LL;
          *((_QWORD *)ErrorLogEntry + 3) = 0LL;
          *((_WORD *)ErrorLogEntry + 1) = 4 * v16;
          if ( v16 )
          {
            v13 = &v16;
            do
            {
              v14 = (unsigned int)v12;
              v13 += 2;
              v12 = (unsigned int)(v12 + 1);
              *(_DWORD *)&ErrorLogEntry[4 * v14 + 40] = *v13;
            }
            while ( (unsigned int)v12 < v16 );
          }
          if ( (_DWORD)v6 )
          {
            *((_WORD *)ErrorLogEntry + 2) = 1;
            *((_WORD *)ErrorLogEntry + 3) = 4 * (v16 + 12);
            memmove(&ErrorLogEntry[4 * v16 + 48], v7, v8);
          }
          else
          {
            *((_WORD *)ErrorLogEntry + 2) = 0;
          }
          if ( (byte_1C00E71C4 & 0x20) != 0 )
            McTemplateK0jqxzqqQR5_EtwWriteTransfer(
              *((_QWORD *)NdisAdapterHandle + 482),
              v12,
              (const GUID *)((char *)NdisAdapterHandle + 4008),
              (__int64)NdisAdapterHandle + 4008,
              *((_DWORD *)NdisAdapterHandle + 1014),
              *((_QWORD *)NdisAdapterHandle + 503),
              *(const wchar_t **)(*((_QWORD *)NdisAdapterHandle + 482) + 8LL),
              ErrorCode,
              v16,
              (__int64)v11 + 40);
          IoWriteErrorLogEntry(v11);
        }
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = ErrorCode;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)NdisAdapterHandle,
      *(_QWORD *)v15);
  }
}
