/*
 * XREFs of PopUpdateUpgradeInProgress @ 0x14085E230
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x140414730 (ZwNotifyChangeKey.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14076091C (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x14087118C (PopLogSleepDisabled.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

int __fastcall PopUpdateUpgradeInProgress(HANDLE KeyHandle)
{
  HANDLE v2; // rdi
  int result; // eax
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  HANDLE KeyHandlea; // [rsp+50h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  int v13; // [rsp+B0h] [rbp+47h]

  ResultLength = 0;
  v13 = 0;
  v2 = KeyHandle;
  KeyHandlea = KeyHandle;
  memset(&ObjectAttributes, 0, 44);
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
      goto LABEL_8;
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
  if ( result < 0 || !HIDWORD(KeyValueInformation) || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
  {
    if ( KeyHandle )
    {
      PopAcquirePolicyLock(v4);
      PopRemoveReasonRecordByReasonCode();
      result = PopReleasePolicyLock(v6, v5, v7);
    }
    goto LABEL_8;
  }
  if ( !KeyHandle && (result = PopLogSleepDisabled(15LL, 8LL, 0LL, 0LL), result < 0)
    || (*(_QWORD *)PopSetupInProgressUpdateWorkItem = 0LL,
        qword_140C3F2F0 = (__int64)PopUpdateUpgradeInProgress,
        qword_140C3F2F8 = (__int64)KeyHandlea,
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
LABEL_8:
    if ( KeyHandlea )
      return ZwClose(KeyHandlea);
  }
  return result;
}
