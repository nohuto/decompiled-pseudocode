/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140A1DE3C
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x1402D7420 (RtlMergeBitMaps.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     HvFreeUnreconciledData @ 0x14078B7A4 (HvFreeUnreconciledData.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1736));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1732) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 195) = 1;
  HvFreeUnreconciledData(a1);
}
