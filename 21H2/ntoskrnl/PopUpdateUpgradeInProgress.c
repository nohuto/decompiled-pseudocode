/*
 * XREFs of PopUpdateUpgradeInProgress @ 0x1405CF3D0
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1403FC8C0 (ZwNotifyChangeKey.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14066ED6C (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x14077EDCC (PopLogSleepDisabled.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

int __fastcall PopUpdateUpgradeInProgress(HANDLE KeyHandle)
{
  HANDLE v2; // rdi
  int result; // eax
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  HANDLE KeyHandlea; // [rsp+50h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  int v12; // [rsp+B0h] [rbp+47h]

  ResultLength = 0;
  KeyHandlea = KeyHandle;
  v12 = 0;
  v2 = KeyHandle;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
    if ( result < 0 )
      goto LABEL_13;
    v2 = KeyHandlea;
  }
  RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
  result = ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation) )
  {
    if ( KeyHandle )
    {
      PopAcquirePolicyLock(v4);
      PopRemoveReasonRecordByReasonCode(15LL);
      result = PopReleasePolicyLock(v6, v5);
    }
    goto LABEL_13;
  }
  if ( !KeyHandle && (result = PopLogSleepDisabled(15LL, 8LL, 0LL, 0LL), result < 0)
    || (*(_QWORD *)PopSetupInProgressUpdateWorkItem = 0LL,
        qword_140C251F0 = (__int64)PopUpdateUpgradeInProgress,
        qword_140C251F8 = (__int64)KeyHandlea,
        result = ZwNotifyChangeKey(
                   KeyHandlea,
                   0LL,
                   PopSetupInProgressUpdateWorkItem,
                   (PVOID)1,
                   &PopSetupInProgressStatusBlock,
                   4u,
                   0,
                   0LL,
                   0,
                   1u),
        result < 0) )
  {
LABEL_13:
    if ( KeyHandlea )
      return ZwClose(KeyHandlea);
  }
  return result;
}
