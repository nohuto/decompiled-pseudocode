/*
 * XREFs of KiOpFetchNextByte @ 0x14033D078
 * Callers:
 *     KiOpDecode @ 0x14033CEF0 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x14033D144 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x1403CEE5C (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x14052462C (KiOpFetchBytes.c)
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
