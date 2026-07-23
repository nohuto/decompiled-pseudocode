/*
 * XREFs of PopInitializePowerButtonHold @ 0x140A3FAB4
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1406B87A0 (RtlGetPersistedStateLocation.c)
 *     PopInitializeWorkItem @ 0x140791618 (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140791A98 (PopPowerButtonBugcheckConfigure.c)
 */

void __fastcall PopInitializePowerButtonHold(int a1)
{
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG BufferLengthOut; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[264]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( a1 )
  {
    if ( a1 == 1
      && RtlGetPersistedStateLocation(
           L"PowerButtonBugcheckSettings",
           0LL,
           L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
           LocationTypeRegistry,
           SourceString,
           0x208u,
           &BufferLengthOut) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x11u, &ObjectAttributes) >= 0 )
      {
        *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
        qword_140C207F0 = (__int64)PopPowerButtonBugcheckWatchCallback;
        qword_140C207F8 = (__int64)KeyHandle;
        PopPowerButtonBugcheckConfigure(KeyHandle);
      }
    }
  }
  else
  {
    PopAcpiPdttSupportEnabled = 0;
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset(&unk_140C20808, 0, 0xC8uLL);
    memset(&PopPowerButtonTriageBlock, 0, 0x70uLL);
    dword_140C20950 = 0;
    dword_140C20954 = 0;
    PopPowerButtonHold = 0LL;
    qword_140C20960 = (__int64)&PopBlackBoxEntries;
    LODWORD(PopPowerButtonTriageBlock) = 2;
    dword_140C20968 = 22;
    PopInitializeWorkItem((__int64)&unk_140C20890, (__int64)PopPowerButtonWorkCallback, 0LL);
  }
}
