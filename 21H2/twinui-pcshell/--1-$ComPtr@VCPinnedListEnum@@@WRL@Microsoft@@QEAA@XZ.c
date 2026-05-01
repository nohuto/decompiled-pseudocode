/*
 * XREFs of ??1?$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAA@XZ @ 0x180152C20
 * Callers:
 *     _CPinnedList::EnumAllObjects_::_1_::dtor$0 @ 0x180155039 (_CPinnedList--EnumAllObjects_--_1_--dtor$0.c)
 *     _CPinnedList::EnumObjects_::_1_::dtor$0 @ 0x18015514D (_CPinnedList--EnumObjects_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CPinnedListEnum@@UEAAKXZ @ 0x18015B020 (-Release@CPinnedListEnum@@UEAAKXZ.c)
 */

int __fastcall Microsoft::WRL::ComPtr<CPinnedListEnum>::~ComPtr<CPinnedListEnum>(CPinnedListEnum **a1)
{
  CPinnedListEnum *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = CPinnedListEnum::Release(v1);
  }
  return (int)v1;
}
