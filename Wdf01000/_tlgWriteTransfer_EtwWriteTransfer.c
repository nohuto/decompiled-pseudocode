NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        const _tlgProvider_t *hProvider,
        char *pEventMetadata,
        const _GUID *pActivityId,
        const _GUID *pRelatedActivityId,
        ULONG cData,
        _EVENT_DATA_DESCRIPTOR *pData)
{
  _EVENT_DESCRIPTOR desc; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&desc.Id = (unsigned __int8)*pEventMetadata << 24;
  *(_DWORD *)&desc.Level = *(unsigned __int16 *)(pEventMetadata + 1);
  desc.Keyword = *(_QWORD *)(pEventMetadata + 3);
  pData->Ptr = (unsigned __int64)hProvider->ProviderMetadataPtr;
  pData->Size = *hProvider->ProviderMetadataPtr;
  pData->Reserved = 2;
  pData[1].Ptr = (unsigned __int64)(pEventMetadata + 11);
  pData[1].Size = *(unsigned __int16 *)(pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(hProvider->RegHandle, &desc, pActivityId, pRelatedActivityId, cData, pData);
}
