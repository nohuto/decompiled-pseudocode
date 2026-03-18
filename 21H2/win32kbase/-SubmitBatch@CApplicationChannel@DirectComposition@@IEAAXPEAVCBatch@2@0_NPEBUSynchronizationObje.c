/*
 * XREFs of ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C0013A44
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001229C (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     NtDCompositionCommitChannel @ 0x1C0012460 (NtDCompositionCommitChannel.c)
 * Callees:
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1C0013BAC (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0013C00 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0080AA4 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C0081EA0 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::SubmitBatch(
        DirectComposition::CApplicationChannel *this,
        LARGE_INTEGER *a2,
        struct DirectComposition::CBatch *a3,
        char a4,
        const struct DirectComposition::SynchronizationObject *a5)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _ERESOURCE *v9; // rbx
  struct _ERESOURCE *v10; // rbx
  struct _ERESOURCE *v11; // rcx
  struct DirectComposition::CBatch *QuadPart; // rbx

  if ( a4 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  a2[8] = PerformanceCounter;
  v9 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v9, 1u);
  if ( a5 && !*((_BYTE *)a5 + 33) )
    DirectComposition::CBatch::SetSynchronizationObject((DirectComposition::CBatch *)a2, a5);
  v10 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v10 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v10, 1u);
  }
  if ( *((int *)this + 6) <= 0
    && DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
  {
    DirectComposition::CConnection::PostBatch(
      *((DirectComposition::CConnection **)this + 5),
      (struct DirectComposition::CBatch *)a2,
      a3);
  }
  else
  {
    if ( (a2[4].LowPart & 1) != 0 )
      *((_BYTE *)this + 48) &= ~2u;
    do
    {
      QuadPart = (struct DirectComposition::CBatch *)a2->QuadPart;
      a2->QuadPart = 0LL;
      DirectComposition::CBatch::ReturnToApplication((DirectComposition::CBatch *)a2, 0);
      a2 = (LARGE_INTEGER *)QuadPart;
    }
    while ( QuadPart );
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 16LL))(this);
  }
  v11 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v11 )
  {
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
}
