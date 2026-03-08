/*
 * XREFs of CmVirtualKCBToRealPath @ 0x140A15B68
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1407B6770 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A17764 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A18D84 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmVirtualKCBToRealPath(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  NTSTATUS appended; // ebx
  UNICODE_STRING *v6; // rdi
  unsigned int v7; // ebp
  int v8; // edx
  unsigned __int64 v9; // rcx
  unsigned __int16 v10; // r14
  __int64 Pool2; // rax
  UNICODE_STRING Source; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING *v13; // [rsp+60h] [rbp+18h] BYREF

  appended = -1073741670;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v13 = 0LL;
  CmpConstructNameWithStatus(a1, &v13, a3);
  v6 = v13;
  if ( v13 )
  {
    v7 = 0;
    v8 = 5;
    v9 = 0LL;
    while ( v13->Buffer[v9 / 2] != 92 || --v8 )
    {
      v9 = 2LL * ++v7;
      if ( v9 >= v13->Length )
      {
        appended = -1073741811;
        goto LABEL_14;
      }
    }
    v10 = v13->Length + 2 * (9 - v7);
    Pool2 = ExAllocatePool2(256LL, v13->Length + 2 * (9 - v7), 1649298755LL);
    a2->Buffer = (wchar_t *)Pool2;
    if ( Pool2 )
    {
      a2->MaximumLength = v10;
      a2->Length = 0;
      Source = *v6;
      Source.Length = 18;
      appended = RtlAppendUnicodeStringToString(a2, &Source);
      if ( appended < 0
        || (Source.Length = v6->Length - 2 * v7,
            Source.Buffer += v7,
            appended = RtlAppendUnicodeStringToString(a2, &Source),
            appended < 0) )
      {
        RtlFreeUnicodeString(a2);
      }
    }
LABEL_14:
    CmpFreeTransientPoolWithTag(v6, 0x624E4D43u);
  }
  return (unsigned int)appended;
}
