/*
 * XREFs of ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C0092670
 * Callers:
 *     ?Release@CRegion@@UEBAJXZ @ 0x1C0085A90 (-Release@CRegion@@UEBAJXZ.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CRegion::SetEmpty(CRegion *this)
{
  REGION *v2; // rcx

  v2 = (REGION *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    REGION::vDeleteREGION(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
}
