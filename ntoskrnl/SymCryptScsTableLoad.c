/*
 * XREFs of SymCryptScsTableLoad @ 0x140409124
 * Callers:
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x14040914C (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x1404092E0 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}
