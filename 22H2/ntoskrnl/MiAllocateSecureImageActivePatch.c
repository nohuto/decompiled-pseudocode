/*
 * XREFs of MiAllocateSecureImageActivePatch @ 0x140A3488C
 * Callers:
 *     MiLoadHotPatch @ 0x140A37FD0 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140B74A30 (MmRegisterHotPatches.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402AEFA0 (RtlCopyUnicodeString.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
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
