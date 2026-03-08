/*
 * XREFs of VfSuspectDriversIsLoaded @ 0x140B93B54
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x140AC7934 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140AD7CE0 (ViSuspectDriversLookupEntry.c)
 */

__int64 __fastcall VfSuspectDriversIsLoaded(const UNICODE_STRING *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  result = ViSuspectDriversLookupEntry(a1);
  v2 = 0;
  if ( result )
  {
    LOBYTE(v2) = *(_DWORD *)(result + 16) > *(_DWORD *)(result + 20);
    return v2;
  }
  return result;
}
