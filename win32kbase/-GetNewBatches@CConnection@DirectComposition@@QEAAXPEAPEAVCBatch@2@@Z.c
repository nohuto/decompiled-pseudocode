/*
 * XREFs of ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C00998C8
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0098744 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C02498F4 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::GetNewBatches(
        union _SLIST_HEADER *this,
        struct DirectComposition::CBatch **a2)
{
  PSLIST_ENTRY v3; // rax
  struct DirectComposition::CBatch *v4; // r8
  struct DirectComposition::CBatch **v5; // rcx
  struct DirectComposition::CBatch *v6; // rax
  struct DirectComposition::CBatch *v7; // r9
  struct DirectComposition::CBatch **v8; // rdx
  struct DirectComposition::CBatch *v9; // rax

  v3 = ExpInterlockedFlushSList(this + 6);
  v4 = 0LL;
  v5 = (struct DirectComposition::CBatch **)v3;
  if ( v3 )
  {
    do
    {
      v6 = v5[3];
      v7 = *v5;
      if ( v6 )
      {
        v8 = (struct DirectComposition::CBatch **)*((_QWORD *)v6 + 3);
        *((_QWORD *)v6 + 3) = 0LL;
        v9 = v5[3];
        v5[3] = 0LL;
        *v5 = v9;
      }
      else
      {
        v8 = v5;
      }
      *v8 = v4;
      v4 = (struct DirectComposition::CBatch *)v5;
      v5 = (struct DirectComposition::CBatch **)v7;
    }
    while ( v7 );
  }
  *a2 = v4;
}
