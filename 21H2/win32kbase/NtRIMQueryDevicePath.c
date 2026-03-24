/*
 * XREFs of NtRIMQueryDevicePath @ 0x1C0153E90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtRIMQueryDevicePath(ULONG64 a1, _QWORD *a2)
{
  ULONG64 v3; // rdx
  int v4; // ecx
  WCHAR *v5; // rdx
  ULONG64 v6; // r8
  NTSTATUS v7; // ebx
  __int64 i; // rsi
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-40h] BYREF
  int v12; // [rsp+B0h] [rbp+18h]
  void *Handle; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1;
  Handle = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v4 = *(_DWORD *)v3;
  v12 = *(_DWORD *)v3;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)v3;
  v5 = *(WCHAR **)(v3 + 8);
  SourceString.Buffer = v5;
  if ( ((unsigned __int8)v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (ULONG64)v5 + (unsigned __int16)v4 + 2;
  if ( v6 >= MmUserProbeAddress || (unsigned __int16)v4 > HIWORD(v12) )
    goto LABEL_9;
  if ( (v4 & 1) != 0 )
    goto LABEL_10;
  if ( v6 <= (unsigned __int64)v5 )
  {
LABEL_9:
    if ( (v4 & 1) == 0 )
    {
LABEL_11:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_12;
    }
LABEL_10:
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5752);
    goto LABEL_11;
  }
LABEL_12:
  if ( SourceString.Length >= 6u )
  {
    DestinationString.MaximumLength = SourceString.Length;
    DestinationString.Length = SourceString.Length;
    DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
    if ( DestinationString.Buffer )
    {
      RtlCopyUnicodeString(&DestinationString, &SourceString);
      v7 = 0;
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( *DestinationString.Buffer == 92 && DestinationString.Buffer[1] == 92 && DestinationString.Buffer[2] == 63 )
      DestinationString.Buffer[1] = 63;
    else
      v7 = -1073741811;
    if ( v7 >= 0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&gObListLock, 0LL);
      v7 = -1073741275;
      for ( i = gObRimDevList; (__int64 *)i != &gObRimDevList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 256) & 0x400) == 0
          && RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)(i + 280), 0) )
        {
          v7 = ObOpenObjectByPointer((PVOID)(i - 16), 0, 0LL, 1u, ExRawInputManagerObjectType, 0, &Handle);
          break;
        }
      }
      ExReleasePushLockSharedEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      if ( v7 >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  if ( DestinationString.Buffer )
    Win32FreePool((__int64)DestinationString.Buffer);
  return (unsigned int)v7;
}
