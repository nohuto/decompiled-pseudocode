/*
 * XREFs of KiOpFetchNextByte @ 0x140361F68
 * Callers:
 *     KiOpDecodeModRM @ 0x140361D64 (KiOpDecodeModRM.c)
 *     KiOpDecode @ 0x140361E00 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x140362034 (KiOpLocateDecodeEntry.c)
 *     KiOpFetchBytes @ 0x1403B0D18 (KiOpFetchBytes.c)
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
