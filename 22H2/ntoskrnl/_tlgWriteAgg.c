/*
 * XREFs of _tlgWriteAgg @ 0x14036D53C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057B0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403752B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1405CD900 (FsRtlCheckOplockForFsFilterCallback.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062AD7C (EtwpWriteAppStateChangeSummary.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     CmpOKToFollowLink @ 0x140649730 (CmpOKToFollowLink.c)
 *     CmLoadKey @ 0x14069DA54 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     PnpTraceClearDevNodeProblem @ 0x140735CD0 (PnpTraceClearDevNodeProblem.c)
 *     PnpTraceSetDevNodeProblem @ 0x14074C294 (PnpTraceSetDevNodeProblem.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075F41C (MiLogNonRetpolineImageLoadEvent.c)
 *     PnpTraceInterruptConnection @ 0x140761D70 (PnpTraceInterruptConnection.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x1407715F4 (PnpTraceDmaGuardDevicePolicy.c)
 *     MiLogPinDriverAddressesWorker @ 0x1407B6940 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x1407B6A44 (MiLogPinDriverAddress.c)
 *     HvpIsReadErrorTransient @ 0x1408819D4 (HvpIsReadErrorTransient.c)
 * Callees:
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     InsertEventEntryInLookUpTable @ 0x14036D608 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x14036DA8C (ExtractAggregateFieldTypes.c)
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
