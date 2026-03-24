/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x140906A9C
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140906C3C (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     RtlCopyUnicodeString @ 0x1402D3C70 (RtlCopyUnicodeString.c)
 *     PsRemoveSiloContext @ 0x140905BC0 (PsRemoveSiloContext.c)
 */

__int64 __fastcall PspSiloInitializeSystemRootBuffer(__int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING *v3; // rax
  wchar_t *Buffer; // rdx
  const UNICODE_STRING *v5; // rdx
  PCUNICODE_STRING SourceString; // [rsp+38h] [rbp+10h] BYREF

  SourceString = 0LL;
  result = PsRemoveSiloContext(a1, (unsigned int)PsSystemRootSiloContextSlot, (__int64)&SourceString);
  if ( (int)result >= 0 )
  {
    v3 = *(UNICODE_STRING **)(a1 + 1272);
    Buffer = v3[70].Buffer;
    v3[67] = 0LL;
    v3[67].Buffer = Buffer + 15;
    v5 = SourceString;
    v3[67].MaximumLength = 520;
    RtlCopyUnicodeString(v3 + 67, v5);
    HalPutDmaAdapter((PADAPTER_OBJECT)SourceString);
    return 0LL;
  }
  return result;
}
