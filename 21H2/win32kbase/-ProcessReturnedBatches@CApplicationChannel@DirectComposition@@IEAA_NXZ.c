/*
 * XREFs of ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0012B1C
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C000B750 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000C784 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0080410 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C008418C (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C00B3D84 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C0214A18 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 * Callees:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0013470 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::ProcessReturnedBatches(union _SLIST_HEADER *this)
{
  char v2; // si
  PSLIST_ENTRY v3; // rdi
  ULONGLONG v5; // rax
  union _SLIST_HEADER v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  KeResetEvent(*(PRKEVENT *)(this[13].Region + 8));
  v3 = ExpInterlockedPopEntrySList(this + 12);
  if ( v3 )
  {
    v2 = 1;
    do
    {
      --*((_DWORD *)&this[14].HeaderX64 + 1);
      v5 = *((_QWORD *)&v3[4].Next + 1);
      if ( v5 > this[14].Region )
      {
        LOBYTE(this[15].Alignment) |= 2u;
        this[14].Region = v5;
      }
      v6.Alignment = LODWORD(v3[1].Next);
      v6.Region = *((_QWORD *)&v3[3].Next + 1);
      this[((__int64)v3[1].Next & 0x3F) + 33] = v6;
      DirectComposition::CBatch::Clear((DirectComposition::CBatch *)v3);
      v3->Next = (struct _SLIST_ENTRY *)this[11].Region;
      this[11].Region = (ULONGLONG)v3;
      v3 = ExpInterlockedPopEntrySList(this + 12);
    }
    while ( v3 );
  }
  return v2;
}
