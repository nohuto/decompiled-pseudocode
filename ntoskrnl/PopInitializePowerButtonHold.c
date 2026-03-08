/*
 * XREFs of PopInitializePowerButtonHold @ 0x140B47194
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 *     RtlIsStateSeparationEnabled @ 0x140792EC0 (RtlIsStateSeparationEnabled.c)
 *     PopInitializeWorkItem @ 0x14080FA3C (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140857318 (PopPowerButtonBugcheckConfigure.c)
 */

char __fastcall PopInitializePowerButtonHold(int a1)
{
  _UNKNOWN **v1; // rax
  char v2; // bl
  __int64 v4; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v7; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+A8h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+2D0h] [rbp+1C8h] BYREF

  v1 = &retaddr;
  memset(DestinationString, 0, sizeof(DestinationString));
  v2 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LOBYTE(v4) = 0;
  if ( !a1 )
  {
    PopAcpiPdttSupportEnabled = 0;
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonLiveDumpConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset(&unk_140C39CE8, 0, 0xE8uLL);
    memset(&PopPowerButtonTriageBlock, 0, 0xA0uLL);
    LODWORD(PopPowerButtonTriageBlock) = 2;
    qword_140C39CB0 = (__int64)&PopBlackBoxEntries;
    qword_140C39C90 = 0LL;
    word_140C39C98 = 0;
    dword_140C39C9C = 0;
    byte_140C39CA0 = 0;
    qword_140C39CA4 = 0LL;
    dword_140C39CB8 = 22;
    PopPowerButtonHold = 0LL;
    LOBYTE(v1) = PopInitializeWorkItem((__int64)&unk_140C39D70, (__int64)PopPowerButtonWorkCallback, 0LL);
    return (char)v1;
  }
  if ( a1 != 1 )
    return (char)v1;
  if ( RtlIsStateSeparationEnabled() )
  {
    if ( (int)RtlGetPersistedStateLocation(L"PowerButton", 0LL, 0LL, 0, SourceString, 0x208u, (unsigned int *)&v7) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(DestinationString, 0x11u, &ObjectAttributes) >= 0 )
      {
        qword_140C39DF8 = (__int64)DestinationString[0];
        qword_140C39DF0 = (__int64)PopPowerButtonBugcheckWatchCallback;
        *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
        LOBYTE(v1) = PopPowerButtonBugcheckConfigure(DestinationString[0], 1, &v4);
        if ( (_BYTE)v4 )
          return (char)v1;
      }
    }
  }
  else
  {
    v2 = 1;
  }
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v1) = ZwOpenKey(DestinationString, 0x11u, &ObjectAttributes);
  if ( (int)v1 >= 0 )
  {
    if ( v2 )
    {
      qword_140C39DF0 = (__int64)PopPowerButtonBugcheckWatchCallback;
      qword_140C39DF8 = (__int64)DestinationString[0];
      *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
    }
    LOBYTE(v1) = PopPowerButtonBugcheckConfigure(DestinationString[0], v2, &v4);
  }
  return (char)v1;
}
