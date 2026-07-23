/*
 * XREFs of _tlgWriteAgg @ 0x1403759E4
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1405CD900 (FsRtlCheckOplockForFsFilterCallback.c)
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406A42DC (EtwpWriteAppStateChangeSummary.c)
 *     CmpBounceContextStart @ 0x1406E3F10 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     CmpOKToFollowLink @ 0x1407133F0 (CmpOKToFollowLink.c)
 *     PnpTraceSetDevNodeProblem @ 0x1407397B4 (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceClearDevNodeProblem @ 0x1407399E8 (PnpTraceClearDevNodeProblem.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075FDEC (MiLogNonRetpolineImageLoadEvent.c)
 *     PnpTraceInterruptConnection @ 0x140762910 (PnpTraceInterruptConnection.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140771AF4 (PnpTraceDmaGuardDevicePolicy.c)
 *     MiLogPinDriverAddressesWorker @ 0x1407B66A0 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x1407B67A4 (MiLogPinDriverAddress.c)
 *     HvpIsReadErrorTransient @ 0x140881AE4 (HvpIsReadErrorTransient.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140375AB0 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x140375F34 (ExtractAggregateFieldTypes.c)
 */

NTSTATUS __fastcall tlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  NTSTATUS result; // eax
  char AggregateFieldTypes; // al
  int v11; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v7;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v8;
  UserData[1].Size = *v8;
  UserData[1].Reserved = 1;
  result = -1073741811;
  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, UserData);
    if ( AggregateFieldTypes )
    {
      LOBYTE(v11) = a4;
      return InsertEventEntryInLookUpTable(
               a1,
               (unsigned int)&EventDescriptor,
               v11,
               (_DWORD)UserData,
               AggregateFieldTypes);
    }
    else
    {
      return EtwWriteEx(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, a4, UserData);
    }
  }
  return result;
}
