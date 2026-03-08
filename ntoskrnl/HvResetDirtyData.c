/*
 * XREFs of HvResetDirtyData @ 0x14072E110
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x14072D6A8 (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140765A30 (HvpResetPageProtection.c)
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
