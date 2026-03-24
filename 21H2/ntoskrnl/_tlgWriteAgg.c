/*
 * XREFs of _tlgWriteAgg @ 0x140375E94
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057F0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374AD0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1405CD900 (FsRtlCheckOplockForFsFilterCallback.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062A95C (EtwpWriteAppStateChangeSummary.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1406BA714 (CmLoadKey.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     CmpOKToFollowLink @ 0x1406FC010 (CmpOKToFollowLink.c)
 *     PnpTraceSetDevNodeProblem @ 0x1407395F4 (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceClearDevNodeProblem @ 0x140739828 (PnpTraceClearDevNodeProblem.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075FC2C (MiLogNonRetpolineImageLoadEvent.c)
 *     PnpTraceInterruptConnection @ 0x140762750 (PnpTraceInterruptConnection.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140771934 (PnpTraceDmaGuardDevicePolicy.c)
 *     MiLogPinDriverAddressesWorker @ 0x1407B4D80 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x1407B4E84 (MiLogPinDriverAddress.c)
 *     HvpIsReadErrorTransient @ 0x140881984 (HvpIsReadErrorTransient.c)
 * Callees:
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140375F60 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1403763E4 (ExtractAggregateFieldTypes.c)
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
