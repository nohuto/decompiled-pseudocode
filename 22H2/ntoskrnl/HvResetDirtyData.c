/*
 * XREFs of HvResetDirtyData @ 0x140720CF4
 * Callers:
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x140720430 (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x140361940 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x1406BF1E4 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 88));
    result = (unsigned int)_InterlockedExchangeAdd(&CmpDirtySectorCount, -*(_DWORD *)(a1 + 104));
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
