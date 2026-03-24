/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C009FC38
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C005F78C (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionWaitForChannel @ 0x1C009FBB0 (NtDCompositionWaitForChannel.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C005F1E4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAV23@@Z @ 0x1C009FD40 (-Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAV23@@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        union _SLIST_HEADER *this,
        char a2,
        char a3)
{
  char v5; // bp
  char v6; // r15
  char v7; // si
  char v8; // di
  DirectComposition::CApplicationChannel::WaitForCommitCompletionData *Alignment; // rcx

  v5 = 0;
  v6 = 0;
  v7 = 1;
  v8 = 1;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( *((int *)&this[14].HeaderX64 + 1) > 0 )
      {
        Alignment = (DirectComposition::CApplicationChannel::WaitForCommitCompletionData *)this[45].Alignment;
        if ( Alignment )
        {
          DirectComposition::CApplicationChannel::WaitForCommitCompletionData::Initialize(
            Alignment,
            (struct DirectComposition::CApplicationChannel *)this);
          BYTE1(this[15].Alignment) |= 4u;
        }
      }
    }
  }
  do
  {
    if ( *((int *)&this[14].HeaderX64 + 1) <= 0 )
      break;
    if ( v6 && KeWaitForSingleObject(*(PVOID *)(this[13].Region + 8), UserRequest, 0, 1u, 0LL) )
      v8 = 0;
    if ( DirectComposition::CApplicationChannel::ProcessReturnedBatches(this) )
      v5 = 1;
    if ( !a2 && v5 )
      v8 = 0;
    v6 = 1;
  }
  while ( v8 );
  BYTE1(this[15].Alignment) &= ~4u;
  if ( !v5 || a2 && *((_DWORD *)&this[14].HeaderX64 + 1) )
    return 0;
  return v7;
}
