/*
 * XREFs of RtlUnicodeStringCopy @ 0x140208AD8
 * Callers:
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14036C2F0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x1405DFAC4 (SshpCopyDataEntry.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E9124 (CmpLogTransactionAbortedWithChildName.c)
 *     PopUnicodeStringDeepCopy @ 0x1407F1F60 (PopUnicodeStringDeepCopy.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140853DB0 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140917708 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1409709F4 (MiConstructNonRetpolineImageLoadRecord.c)
 *     PopCloneUnicodeString @ 0x140989650 (PopCloneUnicodeString.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A16F94 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x140208BA0 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x140208BE0 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  size_t *v2; // r9
  __int16 v4; // bx
  size_t v6; // rdx
  NTSTATUS v7; // r8d
  NTSTATUS v8; // eax
  wchar_t *Buffer; // rdx
  unsigned __int64 v10; // rcx
  size_t v11; // r9
  __int16 v12; // r10
  char *v13; // r11
  size_t v15; // [rsp+20h] [rbp-18h]
  ULONG v16; // [rsp+28h] [rbp-10h]
  size_t v17; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *v18; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v18 = 0LL;
  v17 = 0LL;
  v7 = RtlUnicodeStringValidateDestWorker(DestinationString, &v18, &v17, v2, v15, v16);
  if ( v7 >= 0 )
  {
    v8 = RtlUnicodeStringValidateWorker(SourceString, v6, v7);
    v7 = v8;
    if ( v8 >= 0 && SourceString )
    {
      Buffer = SourceString->Buffer;
      v10 = (unsigned __int64)SourceString->Length >> 1;
    }
    else
    {
      Buffer = 0LL;
      v10 = 0LL;
      if ( v8 < 0 )
      {
LABEL_12:
        DestinationString->Length = 2 * v4;
        return v7;
      }
    }
    v11 = v17;
    v7 = 0;
    v12 = 0;
    if ( v17 )
    {
      v13 = (char *)((char *)v18 - (char *)Buffer);
      while ( v10 )
      {
        --v10;
        *(wchar_t *)((char *)Buffer + (_QWORD)v13) = *Buffer;
        ++v12;
        ++Buffer;
        if ( !--v11 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( v10 )
        v7 = -2147483643;
    }
    v4 = v12;
    goto LABEL_12;
  }
  return v7;
}
