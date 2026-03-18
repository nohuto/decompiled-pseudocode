/*
 * XREFs of PnpAllocatePWSTR @ 0x1406CCCEC
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x1406CCDA0 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpPropertySet @ 0x14079CC08 (PiSwIrpPropertySet.c)
 *     PiDqActionDataCreate @ 0x1407F9F04 (PiDqActionDataCreate.c)
 *     PiSwPdoPnPDispatch @ 0x14081B050 (PiSwPdoPnPDispatch.c)
 *     PiSwInstanceInfoInit @ 0x14081B9A0 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x14081BB50 (PiSwPnPInfoInit.c)
 *     PiSwCompleteCreate @ 0x14081BD64 (PiSwCompleteCreate.c)
 *     PnpCopyDevProperty @ 0x14081C1B0 (PnpCopyDevProperty.c)
 *     PiSwBusRelationAdd @ 0x14081C248 (PiSwBusRelationAdd.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14081C690 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwInterfaceCreate @ 0x14081D8E8 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x14081DAC4 (PiSwDeviceInterfaceSetState.c)
 *     PiDmObjectCreate @ 0x14086BC2C (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967AB0 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B024 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x14022C660 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14022CE4C (RtlULongLongMult.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  wchar_t *Pool2; // rax
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  pcchLength = 0LL;
  pullResult = 0LL;
  *a4 = 0LL;
  if ( pszSrc )
  {
    v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
    if ( v4 >= 0 )
    {
      if ( !pcchLength )
        return (unsigned int)v4;
      v4 = RtlULongLongMult(pcchLength + 1, 2uLL, &pullResult);
      if ( v4 >= 0 )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, pullResult, a3);
        *a4 = Pool2;
        if ( Pool2 )
        {
          v4 = RtlStringCbCopyW(Pool2, pullResult, pszSrc);
          if ( v4 >= 0 )
            return (unsigned int)v4;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
    if ( *a4 )
    {
      ExFreePoolWithTag(*a4, a3);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v4;
}
