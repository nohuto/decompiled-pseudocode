/*
 * XREFs of ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0057DF0
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C00578CC (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     NtDCompositionConfirmFrame @ 0x1C0057920 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::NotifyBatchProcessed(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch *a2)
{
  struct _ERESOURCE *v3; // rdi

  if ( *((_DWORD *)a2 + 5) != 6 )
  {
    v3 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
    if ( v3 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v3, 1u);
      if ( (*((_DWORD *)this + 56))-- == 1 )
        KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL), 1, 0);
      ExReleaseResourceLite(*((PERESOURCE *)this + 46));
      KeLeaveCriticalRegion();
    }
  }
}
