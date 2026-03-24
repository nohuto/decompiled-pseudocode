/*
 * XREFs of PnpAllocatePWSTR @ 0x1406B0F08
 * Callers:
 *     PiDqActionDataCreate @ 0x1406A878C (PiDqActionDataCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x1406B0D74 (PiDqPnPGetObjectProperty.c)
 *     PiDmObjectCreate @ 0x1407461B0 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407464B0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwInstanceInfoInit @ 0x14074CE80 (PiSwInstanceInfoInit.c)
 *     PiSwBusRelationAdd @ 0x14074D19C (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x14074D3C4 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x14074D45C (PiSwPnPInfoInit.c)
 *     PiSwCompleteCreate @ 0x14074DC58 (PiSwCompleteCreate.c)
 *     PiSwPdoPnPDispatch @ 0x14074E8B0 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceInterfaceSetState @ 0x14076E65C (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14076E730 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140773010 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwIrpPropertySet @ 0x14078A4A4 (PiSwIrpPropertySet.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408AEB84 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024E708 (RtlULongLongMult.c)
 *     RtlStringCchLengthW @ 0x14032DFD4 (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x14032E038 (RtlStringCbCopyW.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  wchar_t *PoolWithTag; // rax
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  pcchLength = 0LL;
  pullResult = 0LL;
  *a4 = 0LL;
  if ( !pszSrc )
    return (unsigned int)v4;
  v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
  if ( v4 >= 0 )
  {
    if ( !pcchLength )
      goto LABEL_8;
    v4 = RtlULongLongMult(pcchLength + 1, 2uLL, &pullResult);
    if ( v4 >= 0 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pullResult, a3);
      *a4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = RtlStringCbCopyW(PoolWithTag, pullResult, pszSrc);
LABEL_8:
        if ( v4 >= 0 )
          return (unsigned int)v4;
        goto LABEL_11;
      }
      v4 = -1073741670;
    }
  }
LABEL_11:
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, a3);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}
