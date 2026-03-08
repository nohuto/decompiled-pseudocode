/*
 * XREFs of PnpAllocatePWSTR @ 0x1406CD7F4
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PiDqPnPGetObjectProperty @ 0x1406CD8A8 (PiDqPnPGetObjectProperty.c)
 *     PiDqActionDataCreate @ 0x140746614 (PiDqActionDataCreate.c)
 *     PiSwIrpPropertySet @ 0x1407857F8 (PiSwIrpPropertySet.c)
 *     PiSwPdoPnPDispatch @ 0x1408064B0 (PiSwPdoPnPDispatch.c)
 *     PiSwInstanceInfoInit @ 0x140806E00 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x140806FB0 (PiSwPnPInfoInit.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PnpCopyDevProperty @ 0x140807610 (PnpCopyDevProperty.c)
 *     PiSwBusRelationAdd @ 0x1408076A8 (PiSwBusRelationAdd.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140807AF0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwInterfaceCreate @ 0x140808CA8 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x140808E84 (PiSwDeviceInterfaceSetState.c)
 *     PiDmObjectCreate @ 0x140868FFC (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140964A90 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
