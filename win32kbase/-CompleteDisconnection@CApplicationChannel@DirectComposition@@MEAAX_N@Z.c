/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C0098930
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C005CD4C (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00609AC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0098B54 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0098B84 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0099740 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C00997D0 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BB744 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  int v2; // esi
  __int64 v5; // rcx
  _QWORD *v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  DirectComposition::CAnimationBinding *v12; // rcx
  struct DirectComposition::CResourceMarshaler *v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  struct DirectComposition::CResourceMarshaler *v20; // rbx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  unsigned int v22; // edx
  DirectComposition::CEvent *v23; // rcx
  DirectComposition::CAnimationBinding *v24; // rbx
  int v25; // edx
  __int64 v26; // r8

  v2 = 0;
  if ( *((_QWORD *)this + 27) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v5 = *((_QWORD *)this + 342);
  if ( v5 )
  {
    KeSetEvent(*(PRKEVENT *)(v5 + 8), 1, 0);
    v23 = (DirectComposition::CEvent *)*((_QWORD *)this + 342);
    if ( v23 )
      DirectComposition::CEvent::`scalar deleting destructor'(v23, v22);
    *((_QWORD *)this + 342) = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(
    this,
    *((struct DirectComposition::CResourceMarshaler **)this + 343));
  *((_QWORD *)this + 343) = 0LL;
  v6 = (_QWORD *)((char *)this + 144);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *((_QWORD *)this + 17);
    v9 = v7;
    if ( v7 < v8 )
    {
      v10 = (_QWORD *)(*((_QWORD *)this + 14) + v7 * *((_QWORD *)this + 18));
      do
      {
        v6 = (_QWORD *)((char *)this + 144);
        if ( *v10 )
          break;
        ++v9;
        v10 = (_QWORD *)((char *)v10 + *((_QWORD *)this + 18));
      }
      while ( v9 < v8 );
    }
    if ( v9 >= v8 )
      break;
    _mm_lfence();
    v7 = v9 + 1;
    v11 = *(_QWORD *)(*v6 * v9 + *((_QWORD *)this + 14));
    if ( !v11 )
      break;
    (*(void (__fastcall **)(__int64, DirectComposition::CApplicationChannel *))(*(_QWORD *)v11 + 64LL))(v11, this);
  }
  if ( !a2 )
  {
    for ( i = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 324);
          i != (DirectComposition::CApplicationChannel *)((char *)this + 2592);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CApplicationChannel *)((char *)this + 2592),
      0LL);
    *((_BYTE *)this + 48) &= ~2u;
  }
  v12 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 57);
  *((_DWORD *)this + 662) = 0;
  if ( v12 )
  {
    do
    {
      v24 = *(DirectComposition::CAnimationBinding **)v12;
      *(_QWORD *)v12 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v12, this);
      v12 = v24;
    }
    while ( v24 );
  }
  v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 54);
  if ( v13 )
  {
    do
    {
      v20 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v13 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference(this, v13);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v13 + 72LL))(
        v13,
        1LL);
      v13 = v20;
    }
    while ( v20 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  v14 = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  while ( 1 )
  {
    v15 = *((_QWORD *)this + 17);
    if ( v14 >= v15 )
      break;
    v16 = (_QWORD *)(*((_QWORD *)this + 14) + v14 * *v6);
    while ( 1 )
    {
      v17 = v14++;
      if ( *v16 )
        break;
      v16 = (_QWORD *)((char *)v16 + *v6);
      if ( v14 >= v15 )
        goto LABEL_24;
    }
    _mm_lfence();
    v18 = *(_QWORD *)(*v6 * v17 + *((_QWORD *)this + 14));
    if ( !v18 )
      break;
    *(_DWORD *)(v18 + 16) &= 0xFFFFFFEE;
    *(_QWORD *)(v18 + 8) = 0LL;
    v19 = *(_QWORD *)(v18 + 40);
    if ( v19 )
    {
      do
      {
        v25 = *(_DWORD *)(v19 + 8);
        v26 = *(_QWORD *)(v19 + 32);
        if ( (v25 & 1) != 0 )
          *(_DWORD *)(v19 + 8) = v25 & 0xFFFFFFFC | 2;
        *(_QWORD *)v19 = 0LL;
        v19 = v26;
      }
      while ( v26 );
    }
  }
LABEL_24:
  LOBYTE(v2) = (unsigned int)(*((_DWORD *)this + 646) - 1) <= 1;
  *((_DWORD *)this + 646) = v2;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
