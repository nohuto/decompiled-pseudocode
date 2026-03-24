/*
 * XREFs of ?GetSpriteFillColor@@YAKXZ @ 0x1C00C7470
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00B8BC4 (xxxInitProcessInfo.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0010F04 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00C2E14 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 GetSpriteFillColor(void)
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  ULONG64 v4; // r8
  int v5; // r14d
  ULONG64 v6; // r15
  ULONG64 v7; // rcx
  _BYTE **v8; // rax
  int v9; // eax
  size_t *v10; // r8
  size_t *v11; // rcx
  int v13; // [rsp+30h] [rbp-2B8h]
  ULONG ResultLength; // [rsp+3Ch] [rbp-2ACh] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-2A8h] BYREF
  size_t *v16; // [rsp+48h] [rbp-2A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-298h] BYREF
  __int128 v18; // [rsp+60h] [rbp-288h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-278h] BYREF
  char KeyValueInformation[4]; // [rsp+A8h] [rbp-240h] BYREF
  int v21; // [rsp+ACh] [rbp-23Ch]
  int v22; // [rsp+B0h] [rbp-238h]
  unsigned int v23; // [rsp+B4h] [rbp-234h]
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-228h] BYREF

  v0 = 0;
  RtlStringCchCopyW(
    SourceString,
    0x104uLL,
    (size_t *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  v18 = 0LL;
  v16 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2, v1);
  v4 = *(_QWORD *)(PsGetProcessPeb(CurrentProcess) + 32) + 96LL;
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v5 = *(_DWORD *)v4;
  v13 = *(_DWORD *)v4;
  LODWORD(v18) = *(_DWORD *)v4;
  v6 = *(_QWORD *)(v4 + 8);
  *((_QWORD *)&v18 + 1) = v6;
  if ( (v6 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = v6 + (unsigned __int16)v5 + 2LL;
  v8 = (_BYTE **)MmUserProbeAddress;
  if ( v7 >= MmUserProbeAddress || (unsigned __int16)v5 > HIWORD(v13) )
    goto LABEL_9;
  if ( (v5 & 1) != 0 )
    goto LABEL_10;
  if ( v7 <= v6 )
  {
LABEL_9:
    if ( (v5 & 1) == 0 )
    {
LABEL_11:
      **v8 = 0;
      goto LABEL_12;
    }
LABEL_10:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 645LL);
    v8 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_11;
  }
LABEL_12:
  v9 = (unsigned __int16)v5;
  v10 = (size_t *)(v6 + (unsigned __int16)v5);
  v16 = v10;
  while ( v9 )
  {
    v11 = (size_t *)((char *)v10 - 2);
    if ( *((_WORD *)v10 - 1) == 92 )
      break;
    v10 = (size_t *)((char *)v10 - 2);
    v16 = v11;
    v9 -= 2;
  }
  if ( (int)RtlStringCchCatW(SourceString, 260LL, v10) >= 0 )
  {
    DestinationString = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength = 0;
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && v21 == 4
        && v22 == 4 )
      {
        v0 = v23;
      }
      ZwClose(KeyHandle);
    }
  }
  return v0;
}
