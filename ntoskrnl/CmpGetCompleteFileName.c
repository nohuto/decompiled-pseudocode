/*
 * XREFs of CmpGetCompleteFileName @ 0x1406C0B40
 * Callers:
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     CmSiAllocateMemory @ 0x1402447A4 (CmSiAllocateMemory.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 */

__int64 __fastcall CmpGetCompleteFileName(UNICODE_STRING *Source, int a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned int v4; // edi
  const WCHAR *v8; // r14
  __int64 v10; // rbx
  unsigned __int16 v11; // bx
  __int64 Memory; // rax

  v4 = 0;
  v8 = (const WCHAR *)CmFileNameExtensions[a2];
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v8[v10] );
    v11 = Source->Length + 2 * (v10 + 1);
    Memory = CmSiAllocateMemory(v11, 0x62774D43u);
    a4->Buffer = (wchar_t *)Memory;
    if ( Memory )
    {
      a4->Length = 0;
      a4->MaximumLength = v11;
      RtlAppendUnicodeStringToString(a4, Source);
      RtlAppendUnicodeToString(a4, v8);
    }
    else
    {
      v4 = -1073741670;
      SetFailureLocation(a3, 0, 48, -1073741670, 16);
    }
  }
  else
  {
    *a4 = *Source;
  }
  return v4;
}
