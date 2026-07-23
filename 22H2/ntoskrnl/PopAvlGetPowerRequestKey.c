/*
 * XREFs of PopAvlGetPowerRequestKey @ 0x1406F5D74
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406F5C6C (PopAvlFindOrMakeStatsForPowerRequest.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7528 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     PopUnicodeStringDeepCopy @ 0x1406A44F0 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x1406F6220 (PopAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PopAvlGetPowerRequestKey(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rdx
  UNICODE_STRING *p_SourceString; // rdx
  const WCHAR *v8; // rdx
  const CHAR *p_ActiveProcessors; // rdx
  __int64 v10; // rdx
  STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  DestinationString = 0LL;
  v4 = *(_DWORD *)v2 == 0;
  SourceString = 0LL;
  if ( !v4 )
  {
    if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage() )
    {
      p_ActiveProcessors = (const CHAR *)&PsGetCurrentProcess()[1].ActiveProcessors;
    }
    else
    {
      v10 = *(_QWORD *)(v2 + 8);
      if ( !v10 )
      {
        v8 = UNIDENTIFIED_PROCESS;
        goto LABEL_12;
      }
      p_ActiveProcessors = (const CHAR *)(v10 + 1448);
    }
    RtlInitAnsiString(&DestinationString, p_ActiveProcessors);
    return PopAnsiStringToUnicodeString(a2, &DestinationString);
  }
  v5 = *(_QWORD *)(v2 + 8);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v8 = UNIDENTIFIED_DRIVER;
LABEL_12:
    RtlInitUnicodeString(&SourceString, v8);
    p_SourceString = &SourceString;
    return PopUnicodeStringDeepCopy(a2, p_SourceString, PagedPool, 0x54515750u);
  }
  p_SourceString = (UNICODE_STRING *)(v6 + 56);
  return PopUnicodeStringDeepCopy(a2, p_SourceString, PagedPool, 0x54515750u);
}
