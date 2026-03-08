/*
 * XREFs of RtlUnicodeStringCopy @ 0x1402B3164
 * Callers:
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1402B37A0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     KiAllocatePrcbThread @ 0x140371F98 (KiAllocatePrcbThread.c)
 *     SshpCopyDataEntry @ 0x1405A0820 (SshpCopyDataEntry.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140735A88 (VrpHandleIoctlInitializeJobForVreg.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x1407B6860 (CmpDoWritethroughReparse.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140842BD0 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     PopUnicodeStringDeepCopy @ 0x140856290 (PopUnicodeStringDeepCopy.c)
 *     PopCloneUnicodeString @ 0x14097D824 (PopCloneUnicodeString.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A17764 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x140A31548 (MiConstructNonRetpolineImageLoadRecord.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A539A4 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1402B3244 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  NTSTATUS v5; // eax
  size_t v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r8d
  NTSTATUS v9; // r11d
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  NTSTATUS v12; // eax
  unsigned __int64 v13; // r10
  wchar_t *Buffer; // r8
  unsigned __int64 v15; // rcx
  __int16 v16; // dx
  __int64 v17; // r14

  v5 = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)SourceString, v2);
  v9 = v5;
  if ( v5 >= 0 && v7 )
  {
    v10 = *(_QWORD *)(v7 + 8);
    v11 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( v5 < 0 )
      return v9;
  }
  v12 = RtlUnicodeStringValidateWorker(SourceString, v6, v8);
  v9 = v12;
  if ( v12 >= 0 && SourceString )
  {
    Buffer = SourceString->Buffer;
    v15 = (unsigned __int64)SourceString->Length >> 1;
LABEL_7:
    v9 = v13;
    v16 = v13;
    if ( v11 )
    {
      v17 = v10 - (_QWORD)Buffer;
      while ( v15 )
      {
        --v15;
        *(wchar_t *)((char *)Buffer + v17) = *Buffer;
        ++v16;
        ++Buffer;
        if ( !--v11 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( v15 )
        v9 = -2147483643;
    }
    LOWORD(v13) = v16;
    goto LABEL_14;
  }
  Buffer = (wchar_t *)v13;
  v15 = v13;
  if ( v12 >= 0 )
    goto LABEL_7;
LABEL_14:
  DestinationString->Length = 2 * v13;
  return v9;
}
