/*
 * XREFs of RtlUnicodeStringCat @ 0x1402AB490
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406212B4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpDoWritethroughReparse @ 0x140649EA0 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407BE5E8 (PopGenerateDeviceFriendlyName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140870D88 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F4300 (PopIdleWakeGenerateDescriptionString.c)
 *     SshpGenerateDeviceFriendlyName @ 0x1408FB280 (SshpGenerateDeviceFriendlyName.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1402AB5B0 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  NTSTATUS v3; // edi
  __int64 v5; // r14
  NTSTATUS result; // eax
  unsigned __int16 *v8; // rcx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int64 Length; // rcx
  wchar_t *Buffer; // rax
  unsigned __int64 v13; // rdx
  NTSTATUS v14; // ebp
  unsigned __int16 MaximumLength; // r8
  __int16 v16; // r8
  unsigned __int64 v17; // r10
  __int64 v18; // r9

  v3 = 0;
  v5 = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)SourceString, v2);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      v5 = *((_QWORD *)v8 + 1);
      v9 = (unsigned __int64)v8[1] >> 1;
      v10 = (unsigned __int64)*v8 >> 1;
    }
    Length = SourceString->Length;
    Buffer = 0LL;
    v13 = 0LL;
    v14 = 0;
    if ( (Length & 1) != 0
      || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
      || (unsigned __int16)Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !SourceString->Buffer && ((_WORD)Length || MaximumLength) )
    {
      v14 = -1073741811;
    }
    else
    {
      Buffer = SourceString->Buffer;
      v13 = Length >> 1;
    }
    if ( v14 < 0 )
    {
      return v14;
    }
    else
    {
      v16 = 0;
      v17 = v9 - v10;
      if ( v17 )
      {
        v18 = v5 + 2 * v10 - (_QWORD)Buffer;
        while ( v13 )
        {
          --v13;
          *(wchar_t *)((char *)Buffer + v18) = *Buffer;
          ++v16;
          ++Buffer;
          if ( !--v17 )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        if ( v13 )
          v3 = -2147483643;
      }
      result = v3;
      DestinationString->Length = 2 * (v16 + v10);
    }
  }
  return result;
}
