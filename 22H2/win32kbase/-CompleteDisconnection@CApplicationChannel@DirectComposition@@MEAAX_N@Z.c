/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C0094650
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C005AD60 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C005BF08 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C005F1E4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C005FDC8 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0060A08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0060DE4 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C0086A98 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0094824 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0094958 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  int v2; // edi
  __int64 v5; // rcx
  void *v6; // rax
  DirectComposition::CAnimationBinding *v7; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // r14
  _DWORD *v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rbx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  DirectComposition::CEvent *v15; // rcx
  DirectComposition::CAnimationBinding *v16; // rbx
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 27) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v5 = *((_QWORD *)this + 92);
  if ( v5 )
  {
    KeSetEvent(*(PRKEVENT *)(v5 + 8), 1, 0);
    v15 = (DirectComposition::CEvent *)*((_QWORD *)this + 92);
    if ( v15 )
      DirectComposition::CEvent::`scalar deleting destructor'(v15);
    *((_QWORD *)this + 92) = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(
    this,
    *((struct DirectComposition::CResourceMarshaler **)this + 93));
  *((_QWORD *)this + 93) = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v6 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v17);
    if ( !v6 )
      break;
    (*(void (__fastcall **)(void *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v6 + 72LL))(v6, this);
  }
  if ( !a2 )
  {
    for ( i = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 75);
          i != (DirectComposition::CApplicationChannel *)((char *)this + 600);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CApplicationChannel *)((char *)this + 600),
      0LL);
    *((_BYTE *)this + 48) &= ~2u;
  }
  v7 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 56);
  *((_DWORD *)this + 164) = 0;
  if ( v7 )
  {
    do
    {
      v16 = *(DirectComposition::CAnimationBinding **)v7;
      *(_QWORD *)v7 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v7, this);
      v7 = v16;
    }
    while ( v16 );
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 53);
  if ( v8 )
  {
    do
    {
      v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v8 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference((DirectComposition::CConnection **)this, v8);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v8 + 80LL))(v8, 1LL);
      v8 = v13;
    }
    while ( v13 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v9 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v17);
    if ( !v9 )
      break;
    v9[4] &= 0xFFFFFFEE;
    *((_QWORD *)v9 + 1) = 0LL;
    v10 = *((_QWORD *)v9 + 4);
    if ( v10 )
    {
      do
      {
        v11 = *(_DWORD *)(v10 + 8);
        v12 = *(_QWORD *)(v10 + 32);
        if ( (v11 & 1) != 0 )
          *(_DWORD *)(v10 + 8) = v11 & 0xFFFFFFFC | 2;
        *(_QWORD *)v10 = 0LL;
        v10 = v12;
      }
      while ( v12 );
    }
  }
  LOBYTE(v2) = (unsigned int)(*((_DWORD *)this + 148) - 1) <= 1;
  *((_DWORD *)this + 148) = v2;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
