/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0013470
 * Callers:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0012B1C (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0013148 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0080410 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00135EC (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0013F54 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C0014608 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0081EE0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00B1AB0 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00B3AF0 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CBatch *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  DirectComposition::CAnimationMarshaler **v4; // r14
  DirectComposition::CApplicationChannel *v5; // rbp
  unsigned __int64 v6; // r15
  unsigned int *v7; // rbx
  DirectComposition::CEvent *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rdx
  unsigned int *v11; // rdi
  DirectComposition::CAnimationMarshaler *v12; // rbx
  DirectComposition::CAnimationMarshaler **v13; // rdi
  DirectComposition::CAnimationMarshaler *v14; // rcx
  DirectComposition::CEvent *v15; // rbx

  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(this);
    *((_QWORD *)this + 5) = 0LL;
  }
  v2 = *((_QWORD *)this + 17);
  v3 = *(_QWORD *)(v2 + 32) + *((_QWORD *)this + 19) + 40LL;
  *(_QWORD *)(v2 + 32) = v3;
  if ( !*(_BYTE *)(v2 + 64) && *(_QWORD *)(v2 + 40) == v3 )
  {
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    if ( *(_QWORD *)(v2 + 48) )
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView((DirectComposition::CBatchSharedMemoryPool *)v2);
  }
  *((_BYTE *)this + 32) &= 0xF2u;
  v4 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 10);
  v5 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 1);
  v6 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  if ( v4 )
  {
    do
    {
      v12 = *v4;
      v13 = (DirectComposition::CAnimationMarshaler **)v4[1];
      v14 = *v4;
      v4[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v14, v6);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v4);
      DirectComposition::CApplicationChannel::ReleaseResource(
        v5,
        (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v12 + 16) & -(__int64)(v12 != 0LL)));
      v4 = v13;
    }
    while ( v13 );
  }
  v7 = (unsigned int *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = 0LL;
  if ( v7 )
  {
    do
    {
      v10 = v7[2];
      v11 = *(unsigned int **)v7;
      if ( (_DWORD)v10 )
      {
        DirectComposition::CConnection::ReleaseSystemResource(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL), v10);
        v7[2] = 0;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v7);
      *((_QWORD *)this + 11) = v11;
      v7 = v11;
    }
    while ( v11 );
  }
  v8 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
  if ( v8 )
  {
    do
    {
      v15 = *(DirectComposition::CEvent **)v8;
      DirectComposition::CEvent::`scalar deleting destructor'(v8);
      *((_QWORD *)this + 13) = v15;
      v8 = v15;
    }
    while ( v15 );
  }
  v9 = *((_DWORD *)this + 28);
  if ( v9 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v9);
    *((_DWORD *)this + 28) = 0;
  }
}
