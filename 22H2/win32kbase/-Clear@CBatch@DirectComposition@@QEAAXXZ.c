/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C005FAC8
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C005A810 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C005F1E4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C005F78C (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C005AD60 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C005FDA0 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C0060200 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00606D4 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0060A08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C009A3E4 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C009BF90 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00B60A0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CBatch *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  DirectComposition::CAnimationMarshaler **v4; // r14
  unsigned __int64 v5; // rbp
  DirectComposition::CApplicationChannel *v6; // r15
  __int64 v7; // rbx
  DirectComposition::CEvent *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rdi
  DirectComposition::CAnimationMarshaler *v11; // rbx
  DirectComposition::CAnimationMarshaler **v12; // rdi
  DirectComposition::CAnimationMarshaler *v13; // rcx
  DirectComposition::CEvent *v14; // rbx

  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(this);
    *((_QWORD *)this + 5) = 0LL;
  }
  v2 = *((_QWORD *)this + 17);
  v3 = *((_QWORD *)this + 19) + 40LL + *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = v3;
  if ( !*(_BYTE *)(v2 + 64) && *(_QWORD *)(v2 + 40) == v3 )
    DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v2);
  *((_BYTE *)this + 32) &= 0xF2u;
  v4 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 10);
  v5 = *((_QWORD *)this + 9);
  v6 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  if ( v4 )
  {
    do
    {
      v11 = *v4;
      v12 = (DirectComposition::CAnimationMarshaler **)v4[1];
      v13 = *v4;
      v4[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v13, v5);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v4);
      DirectComposition::CApplicationChannel::ReleaseResource(
        v6,
        (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v11 + 16) & -(__int64)(v11 != 0LL)));
      v4 = v12;
    }
    while ( v12 );
  }
  v7 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = 0LL;
  if ( v7 )
  {
    do
    {
      v10 = *(_QWORD *)v7;
      if ( *(_DWORD *)(v7 + 8) )
      {
        DirectComposition::CConnection::ReleaseSystemResource(
          *(_QWORD *)(*((_QWORD *)this + 1) + 40LL),
          *(unsigned int *)(v7 + 8));
        *(_DWORD *)(v7 + 8) = 0;
      }
      Win32FreePool(v7);
      *((_QWORD *)this + 11) = v10;
      v7 = v10;
    }
    while ( v10 );
  }
  v8 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
  if ( v8 )
  {
    do
    {
      v14 = *(DirectComposition::CEvent **)v8;
      DirectComposition::CEvent::`scalar deleting destructor'(v8);
      *((_QWORD *)this + 13) = v14;
      v8 = v14;
    }
    while ( v14 );
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
