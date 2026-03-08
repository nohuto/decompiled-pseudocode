/*
 * XREFs of MiAllocateSecureImageActivePatch @ 0x140A31B5C
 * Callers:
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140B7092C (MmRegisterHotPatches.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 */

UNICODE_STRING *__fastcall MiAllocateSecureImageActivePatch(PCUNICODE_STRING SourceString)
{
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v3; // rbx

  Pool = (UNICODE_STRING *)MiAllocatePool(256, SourceString->Length + 64LL, 0x73486D4Du);
  v3 = Pool;
  if ( Pool )
  {
    Pool[3].Buffer = &Pool[4].Length;
    Pool[3].MaximumLength = SourceString->Length;
    RtlCopyUnicodeString(Pool + 3, SourceString);
  }
  return v3;
}
