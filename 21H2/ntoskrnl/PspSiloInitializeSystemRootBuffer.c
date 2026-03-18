/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x1409AC7F8
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1409AC998 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140251C40 (HalPutDmaAdapter.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     PsRemoveSiloContext @ 0x1409AB7E0 (PsRemoveSiloContext.c)
 */

__int64 __fastcall PspSiloInitializeSystemRootBuffer(__int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING *v3; // rax
  wchar_t *Buffer; // rdx
  const UNICODE_STRING *v5; // rdx
  PCUNICODE_STRING SourceString; // [rsp+38h] [rbp+10h] BYREF

  SourceString = 0LL;
  result = PsRemoveSiloContext(a1, (unsigned int)PsSystemRootSiloContextSlot, &SourceString);
  if ( (int)result >= 0 )
  {
    v3 = *(UNICODE_STRING **)(a1 + 1464);
    Buffer = v3[82].Buffer;
    v3[79] = 0LL;
    v3[79].Buffer = Buffer + 15;
    v5 = SourceString;
    v3[79].MaximumLength = 520;
    RtlCopyUnicodeString(v3 + 79, v5);
    HalPutDmaAdapter((PADAPTER_OBJECT)SourceString);
    return 0LL;
  }
  return result;
}
