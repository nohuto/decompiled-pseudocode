/*
 * XREFs of KiOpFetchNextByte @ 0x14030E50C
 * Callers:
 *     KiOpDecodeModRM @ 0x14030CA24 (KiOpDecodeModRM.c)
 *     KiOpDecode @ 0x14030E3A4 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x14030E5D8 (KiOpLocateDecodeEntry.c)
 *     KiOpFetchBytes @ 0x1403B59A8 (KiOpFetchBytes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpFetchNextByte(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 16);
  if ( v2 == *(_BYTE **)(a1 + 8) )
    return 3221225473LL;
  *a2 = *v2;
  ++*(_QWORD *)(a1 + 16);
  return 0LL;
}
