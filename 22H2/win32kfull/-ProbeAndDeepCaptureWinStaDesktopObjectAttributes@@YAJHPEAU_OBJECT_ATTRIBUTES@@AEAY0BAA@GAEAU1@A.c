/*
 * XREFs of ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C013B3F8
 * Callers:
 *     _OpenDesktop @ 0x1C006737C (_OpenDesktop.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x1C013BF60 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0069710 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0141300 (memmove.c)
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
  __int128 v11; // xmm2
  ULONG64 ObjectName; // rdx
  int ProcessLuid; // edi
  WCHAR *v14; // rax
  __int64 Length; // rcx
  ULONG64 v16; // rdx
  USHORT v17; // ax
  unsigned __int16 *v18; // rax
  unsigned __int64 SecurityQualityOfService; // rcx
  __int64 v20; // xmm0_8
  int v21; // ecx
  PVOID SecurityDescriptor; // rcx
  __int64 v23; // rdx
  __int64 v25; // [rsp+38h] [rbp-20h] BYREF

  v25 = 0LL;
  if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
    a2 = (struct _OBJECT_ATTRIBUTES *)MmUserProbeAddress;
  v10 = *(_OWORD *)&a2->ObjectName;
  v11 = *(_OWORD *)&a2->SecurityDescriptor;
  *(_OWORD *)&a4->Length = *(_OWORD *)&a2->Length;
  *(_OWORD *)&a4->ObjectName = v10;
  *(_OWORD *)&a4->SecurityDescriptor = v11;
  a4->Attributes &= ~0x200u;
  if ( a1 && !a4->ObjectName && !a4->RootDirectory )
  {
    ProcessLuid = GetProcessLuid(0LL, &v25);
    if ( ProcessLuid >= 0 )
    {
      RtlStringCchPrintfW(
        (unsigned __int16 *)a3,
        0x100uLL,
        (size_t *)L"%ws\\Service-0x%x-%x$",
        szWindowStationDirectory,
        HIDWORD(v25),
        v25,
        ProcessLuid);
      RtlInitUnicodeString(DestinationString, (PCWSTR)a3);
      a4->ObjectName = DestinationString;
    }
    goto LABEL_31;
  }
  ObjectName = (ULONG64)a4->ObjectName;
  if ( !ObjectName )
  {
    ProcessLuid = -1073741811;
    goto LABEL_31;
  }
  if ( ObjectName >= MmUserProbeAddress )
    ObjectName = MmUserProbeAddress;
  *(_DWORD *)&DestinationString->Length = *(_DWORD *)ObjectName;
  v14 = *(WCHAR **)(ObjectName + 8);
  DestinationString->Buffer = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  Length = DestinationString->Length;
  v16 = (ULONG64)v14 + Length + 2;
  if ( v16 <= (unsigned __int64)v14 || v16 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  ObjectName = DestinationString->MaximumLength;
  if ( (unsigned __int16)Length > (unsigned __int16)ObjectName )
  {
    if ( (Length & 1) == 0 )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( (Length & 1) != 0 )
  {
LABEL_27:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1734LL);
LABEL_28:
    ExRaiseAccessViolation();
  }
  if ( !(_WORD)Length || (Length & 1) != 0 )
  {
    ProcessLuid = -1073741811;
  }
  else
  {
    v17 = 522;
    if ( (unsigned __int16)Length < 0x20Au )
      v17 = DestinationString->Length;
    DestinationString->Length = v17;
    v18 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit((unsigned int)ObjectName, 2037674837LL);
    *a8 = v18;
    if ( v18 )
    {
      memmove(v18, DestinationString->Buffer, DestinationString->Length);
      DestinationString->Buffer = *a8;
      a4->ObjectName = DestinationString;
      ProcessLuid = 0;
    }
    else
    {
      ProcessLuid = -1073741801;
    }
  }
LABEL_31:
  if ( ProcessLuid >= 0 )
  {
    SecurityQualityOfService = (unsigned __int64)a4->SecurityQualityOfService;
    if ( SecurityQualityOfService )
    {
      ObjectName = SecurityQualityOfService + 12;
      if ( SecurityQualityOfService + 12 < SecurityQualityOfService || ObjectName > MmUserProbeAddress )
        SecurityQualityOfService = MmUserProbeAddress;
      v20 = *(_QWORD *)SecurityQualityOfService;
      v21 = *(_DWORD *)(SecurityQualityOfService + 8);
      *(_QWORD *)&a5->Length = v20;
      *(_DWORD *)&a5->ContextTrackingMode = v21;
      a4->SecurityQualityOfService = a5;
    }
    SecurityDescriptor = a4->SecurityDescriptor;
    if ( SecurityDescriptor )
    {
      LOBYTE(ObjectName) = 1;
      ProcessLuid = SeCaptureSecurityDescriptor(SecurityDescriptor, ObjectName, 1LL, 0LL, a6);
      if ( ProcessLuid < 0 )
      {
        ProcessLuid = 0;
        if ( *a6 )
        {
          LOBYTE(v23) = 1;
          SeReleaseSecurityDescriptor(*a6, v23, 0LL);
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
