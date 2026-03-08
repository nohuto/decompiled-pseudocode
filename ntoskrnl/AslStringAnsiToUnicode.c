/*
 * XREFs of AslStringAnsiToUnicode @ 0x140A51144
 * Callers:
 *     AslpFileGet16BitDescription @ 0x140A54EE4 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x140A54FC8 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x140A55514 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x140A558E0 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407A39B0 (RtlxOemStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const char *a2)
{
  ULONG v3; // eax
  __int64 v4; // rcx
  unsigned __int16 v5; // si
  NTSTATUS v6; // edi
  wchar_t *Buffer; // rbx
  UNICODE_STRING v9; // [rsp+30h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, a2);
  v3 = RtlxOemStringToUnicodeSize(&DestinationString);
  v5 = v3;
  *a1 = 0LL;
  v9 = 0LL;
  if ( v3 > 0xFFFF )
  {
    v6 = -1073741811;
LABEL_3:
    AslLogCallPrintf(1LL);
    Buffer = v9.Buffer;
    goto LABEL_8;
  }
  v9.Buffer = (wchar_t *)AslAlloc(v4, v3);
  Buffer = v9.Buffer;
  if ( v9.Buffer )
  {
    v9.MaximumLength = v5;
    v9.Length = 0;
    v6 = RtlAnsiStringToUnicodeString(&v9, &DestinationString, 0);
    if ( v6 < 0 )
      goto LABEL_3;
    Buffer = 0LL;
    *a1 = v9.Buffer;
    v6 = 0;
  }
  else
  {
    v6 = -1073741801;
    AslLogCallPrintf(1LL);
  }
LABEL_8:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)v6;
}
