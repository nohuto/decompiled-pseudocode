/*
 * XREFs of PopCloneUnicodeString @ 0x14097D824
 * Callers:
 *     PopQueryMostRecentWakeSourceInfo @ 0x140984674 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x14099AFC8 (PopDirectedDripsDiagCreateDeviceDescription.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1402B3164 (RtlUnicodeStringCopy.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopCloneUnicodeString(PCUNICODE_STRING SourceString, PUNICODE_STRING DestinationString)
{
  unsigned int v2; // ebx
  wchar_t *Buffer; // r8
  unsigned int Length; // eax
  unsigned int v7; // eax
  unsigned int v8; // r14d
  wchar_t *Pool2; // rax
  wchar_t *v10; // rbp
  NTSTATUS v11; // edi

  v2 = 0;
  *DestinationString = 0LL;
  Buffer = SourceString->Buffer;
  if ( Buffer )
  {
    Length = SourceString->Length;
    if ( Length >= 2 )
    {
      v7 = Length >> 1;
      v8 = 2 * v7 + 2;
      if ( !Buffer[v7 - 1] )
        v8 = 2 * v7;
      if ( v8 < 0xFFFF )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, v8, 1734960208LL);
        v10 = Pool2;
        if ( Pool2 )
        {
          DestinationString->Buffer = Pool2;
          DestinationString->Length = 0;
          DestinationString->MaximumLength = v8;
          v11 = RtlUnicodeStringCopy(DestinationString, SourceString);
          if ( v11 < 0 )
          {
            ExFreePoolWithTag(v10, 0x67696450u);
            return (unsigned int)v11;
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-2147483643;
      }
    }
  }
  return v2;
}
