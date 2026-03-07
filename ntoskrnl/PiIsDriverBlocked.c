__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  unsigned int DatabaseMatch; // eax
  __int64 v8; // r8
  unsigned int v9; // r13d
  unsigned int v10; // ebx
  char v12; // di
  char IsHVCIEnabled; // al
  wchar_t *v14; // rax
  const WCHAR *v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // [rsp+40h] [rbp-51h] BYREF
  int v18; // [rsp+44h] [rbp-4Dh] BYREF
  int v19; // [rsp+48h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  __int64 v21; // [rsp+60h] [rbp-31h]
  __int128 v22[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v23; // [rsp+88h] [rbp-9h]

  v17 = 0;
  v23 = 0LL;
  v21 = a3;
  memset(v22, 0, sizeof(v22));
  DatabaseMatch = SdbGetDatabaseMatch(a1, a4);
  v9 = DatabaseMatch;
  if ( !DatabaseMatch )
  {
    v10 = 0;
LABEL_3:
    PiUpdateDriverDBCache(a2, v21, v8, v10, v22);
    if ( v10 + 1073740949 <= 1 )
    {
      if ( a5 )
      {
        v16 = v17;
        *a5 = v22[0];
        if ( (v16 & 0x30) != 0 )
          PiNotifyCiDriverBlocked(a5, v16, a2);
      }
    }
    return v10;
  }
  v18 = 4;
  v19 = 4;
  if ( (unsigned int)SdbQueryDataEx(a1, DatabaseMatch, v8, &v19, &v17, &v18) )
    goto LABEL_26;
  v12 = v17;
  v10 = 0;
  if ( (v17 & 0x20) != 0 )
  {
    v10 = KeIsKernelCetEnabled() ? 0xC000036B : 0;
  }
  else if ( (v17 & 0x10) != 0 )
  {
    IsHVCIEnabled = PiIsHVCIEnabled();
    v12 = v17;
    if ( IsHVCIEnabled )
      v10 = -1073740949;
  }
  else if ( (v17 & 4) == 0 || RtlIsProcessorFeaturePresent(9u) )
  {
    v10 = ((v12 & 1) != 0) - 1073740949;
  }
  if ( (v12 & 8) != 0
    && (PnpSetupInProgress || PnpSetupOOBEInProgress || PnpSetupUpgradeInProgress || PnpSetupRollbackActiveInProgress) )
  {
LABEL_26:
    v10 = -1073740949;
  }
  if ( !(unsigned int)SdbReadEntryInformation(a1, v9, v22) && (PiLoggedErrorEventsMask & 0x100) == 0 )
  {
    PiLoggedErrorEventsMask |= 0x100u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
  if ( v10 == -1073740949 || v10 == -1073740948 )
  {
    v14 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    v15 = v14 ? v14 + 1 : *(const WCHAR **)(a2 + 8);
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v15);
    PnpLogEvent(&DestinationString, 0LL, v10, v22, 16);
    PnpTraceDriverBlocked(v15, v22, v17, v10);
    if ( v10 == -1073740949 )
      goto LABEL_3;
  }
  if ( v10 == -1073740948 || !v10 )
    goto LABEL_3;
  return v10;
}
