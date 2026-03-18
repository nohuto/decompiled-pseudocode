/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C00B3D84
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0013148 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionWaitForChannel @ 0x1C00B3D10 (NtDCompositionWaitForChannel.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0012B1C (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  char v2; // di
  char v3; // bl
  char v4; // bp
  char v5; // al

  v2 = 0;
  v3 = 1;
  v4 = 1;
  v5 = 0;
  do
  {
    if ( *((int *)this + 57) <= 0 )
      break;
    if ( v5 && KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)this + 27) + 8LL), UserRequest, 0, 1u, 0LL) )
      v4 = 0;
    if ( DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this) )
      v2 = 1;
    if ( !a2 && v2 )
      return v3;
    v5 = 1;
  }
  while ( v4 );
  if ( !v2 || a2 && *((_DWORD *)this + 57) )
    return 0;
  return v3;
}
