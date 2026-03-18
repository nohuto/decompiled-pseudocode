/*
 * XREFs of SymCryptScsTableLoad @ 0x140416650
 * Callers:
 *     SymCryptModExpWindowed @ 0x140410D50 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x140416678 (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x140416814 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}
