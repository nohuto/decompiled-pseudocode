/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C002BBFC
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C002F9F4 (RaidAdapterStartDevice.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001B144 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     RaInitializePower @ 0x1C002B29C (RaInitializePower.c)
 *     StorCreateScsiSymbolicLink @ 0x1C0045F60 (StorCreateScsiSymbolicLink.c)
 *     RaFreeRaidResources @ 0x1C004DF80 (RaFreeRaidResources.c)
 *     RaInitializeRaidResources @ 0x1C004E0D0 (RaInitializeRaidResources.c)
 *     RaidInitializeDma @ 0x1C0079F74 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C007A0FC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  int ScsiSymbolicLink; // edi
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  _WORD *v11; // rdx
  char v12; // cl
  _WORD *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // [rsp+30h] [rbp-49h] BYREF
  int v17; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-19h]
  int v20; // [rsp+68h] [rbp-11h]
  int v21; // [rsp+6Ch] [rbp-Dh]
  int *v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  _BYTE v25[16]; // [rsp+80h] [rbp+7h] BYREF
  char *v26; // [rsp+90h] [rbp+17h]
  int v27; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+9Ch] [rbp+23h]
  _BYTE v29[16]; // [rsp+A0h] [rbp+27h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 426) == 1 )
    v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 552) + 184LL) & 0x80u) != 0 ? 224 : 184;
  result = RaInitializeRaidResources((PSLIST_HEADER)(a1 + 896), *(_BYTE *)(a1 + 4514), v1);
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 968);
    *(_DWORD *)(a1 + 864) = v4;
    *(_DWORD *)(a1 + 860) = v4;
    if ( *(_BYTE *)(a1 + 4514) )
    {
      if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 728) )
      {
        ScsiSymbolicLink = RaidInitializeDma(v5, *(_QWORD *)(a1 + 32), a1 + 328);
        if ( ScsiSymbolicLink < 0 )
          goto LABEL_10;
      }
    }
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 376);
    if ( v8 > *(_DWORD *)(v7 + 152) )
      *(_DWORD *)(v7 + 152) = v8;
    ScsiSymbolicLink = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40));
    if ( ScsiSymbolicLink >= 0 )
    {
      if ( (unsigned int)dword_1C0069058 > 5 )
      {
        if ( tlgKeywordOn(v10, 0x400000000000LL) )
        {
          v11 = *(_WORD **)(a1 + 4864);
          v21 = 0;
          v24 = 0;
          v19 = a1 + 5192;
          v17 = *(_DWORD *)(a1 + 56);
          v22 = &v17;
          v20 = 16;
          v23 = 4;
          tlgCreate1Sz_wchar_t((__int64)v25, v11);
          v12 = *(_BYTE *)(a1 + 4420);
          v13 = *(_WORD **)(a1 + 4872);
          v28 = 0;
          v16 = v12;
          v26 = &v16;
          v27 = 1;
          tlgCreate1Sz_wchar_t((__int64)v29, v13);
          tlgWriteTransfer_EtwWriteTransfer((__int64)&v18, (unsigned __int8 *)dword_1C005D5F2, v14, v15, 7u, &v18);
        }
      }
      RaInitializePower(a1, v9);
      *(_DWORD *)(a1 + 296) = 0;
      *(_BYTE *)(a1 + 300) = 0;
      result = 0LL;
      *(_DWORD *)(a1 + 288) = 1;
      *(_DWORD *)(a1 + 292) = 1;
    }
    else
    {
LABEL_10:
      RaFreeRaidResources((PSLIST_HEADER)(a1 + 896));
      return (unsigned int)ScsiSymbolicLink;
    }
  }
  return result;
}
