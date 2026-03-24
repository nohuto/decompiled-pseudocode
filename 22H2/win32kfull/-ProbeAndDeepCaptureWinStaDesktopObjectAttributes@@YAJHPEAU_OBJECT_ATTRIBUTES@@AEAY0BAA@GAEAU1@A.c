/*
 * XREFs of ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C01686D4
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C1A0 (EditionCreateWindowStationEntryPoint.c)
 *     _OpenDesktop @ 0x1C000F208 (_OpenDesktop.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0011430 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
        int a1,
        struct _OBJECT_ATTRIBUTES *a2,
        unsigned __int16 (*a3)[256],
        struct _OBJECT_ATTRIBUTES *a4,
        struct _SECURITY_QUALITY_OF_SERVICE *a5,
        void **a6,
        struct _UNICODE_STRING *DestinationString,
        unsigned __int16 **a8)
{
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  ULONG64 ObjectName; // rdx
  int ProcessLuid; // edi
  WCHAR *v14; // r8
  __int64 Length; // rcx
  USHORT v16; // ax
  unsigned __int16 *v17; // rax
  unsigned __int64 SecurityQualityOfService; // rcx
  __int64 v19; // xmm0_8
  int v20; // ecx
  PVOID SecurityDescriptor; // rcx
  __int64 v22; // rdx
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES v25; // [rsp+48h] [rbp-40h]

  v24 = 0LL;
  if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
    a2 = (struct _OBJECT_ATTRIBUTES *)MmUserProbeAddress;
  v25 = *a2;
  v10 = *(_OWORD *)&v25.ObjectName;
  v11 = *(_OWORD *)&v25.SecurityDescriptor;
  *(_OWORD *)&a4->Length = *(_OWORD *)&v25.Length;
  *(_OWORD *)&a4->ObjectName = v10;
  *(_OWORD *)&a4->SecurityDescriptor = v11;
  a4->Attributes &= ~0x200u;
  if ( a1 && !a4->ObjectName && !a4->RootDirectory )
  {
    ProcessLuid = GetProcessLuid(0LL, &v24);
    if ( ProcessLuid >= 0 )
    {
      RtlStringCchPrintfW(
        (unsigned __int16 *)a3,
        0x100uLL,
        (size_t *)L"%ws\\Service-0x%x-%x$",
        szWindowStationDirectory,
        HIDWORD(v24),
        v24,
        ProcessLuid);
      RtlInitUnicodeString(DestinationString, (PCWSTR)a3);
      a4->ObjectName = DestinationString;
    }
    goto LABEL_29;
  }
  ObjectName = (ULONG64)a4->ObjectName;
  if ( !ObjectName )
  {
LABEL_28:
    ProcessLuid = -1073741811;
    goto LABEL_29;
  }
  if ( ObjectName >= MmUserProbeAddress )
    ObjectName = MmUserProbeAddress;
  *(_DWORD *)&DestinationString->Length = *(_DWORD *)ObjectName;
  v14 = *(WCHAR **)(ObjectName + 8);
  DestinationString->Buffer = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  Length = DestinationString->Length;
  ObjectName = (ULONG64)v14 + Length + 2;
  if ( ObjectName >= MmUserProbeAddress || (unsigned __int16)Length > DestinationString->MaximumLength )
    goto LABEL_18;
  if ( (Length & 1) != 0 )
    goto LABEL_19;
  if ( ObjectName <= (unsigned __int64)v14 )
  {
LABEL_18:
    if ( (Length & 1) == 0 )
    {
LABEL_20:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_21;
    }
LABEL_19:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1734LL);
    goto LABEL_20;
  }
LABEL_21:
  v16 = DestinationString->Length;
  if ( !DestinationString->Length || (v16 & 1) != 0 )
    goto LABEL_28;
  if ( v16 >= 0x20Au )
    v16 = 522;
  DestinationString->Length = v16;
  v17 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit(DestinationString->MaximumLength, 2037674837LL);
  *a8 = v17;
  if ( v17 )
  {
    memmove(v17, DestinationString->Buffer, DestinationString->Length);
    DestinationString->Buffer = *a8;
    a4->ObjectName = DestinationString;
    ProcessLuid = 0;
  }
  else
  {
    ProcessLuid = -1073741801;
  }
LABEL_29:
  if ( ProcessLuid >= 0 )
  {
    SecurityQualityOfService = (unsigned __int64)a4->SecurityQualityOfService;
    if ( SecurityQualityOfService )
    {
      ObjectName = SecurityQualityOfService + 12;
      if ( SecurityQualityOfService + 12 < SecurityQualityOfService || ObjectName > MmUserProbeAddress )
        SecurityQualityOfService = MmUserProbeAddress;
      v19 = *(_QWORD *)SecurityQualityOfService;
      v20 = *(_DWORD *)(SecurityQualityOfService + 8);
      *(_QWORD *)&a5->Length = v19;
      *(_DWORD *)&a5->ContextTrackingMode = v20;
      a4->SecurityQualityOfService = a5;
    }
    SecurityDescriptor = a4->SecurityDescriptor;
    if ( SecurityDescriptor )
    {
      LOBYTE(ObjectName) = 1;
      ProcessLuid = SeCaptureSecurityDescriptor(SecurityDescriptor, ObjectName);
      if ( ProcessLuid < 0 )
      {
        ProcessLuid = 0;
        if ( *a6 )
        {
          LOBYTE(v22) = 1;
          SeReleaseSecurityDescriptor(*a6, v22, 0LL);
          *a6 = 0LL;
        }
      }
      a4->SecurityDescriptor = *a6;
    }
  }
  if ( ProcessLuid < 0 && *a8 )
  {
    Win32FreePool(*a8);
    *a8 = 0LL;
  }
  return (unsigned int)ProcessLuid;
}
