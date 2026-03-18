/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0028840
 * Callers:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0027EBC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z @ 0x1C0027F84 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0028310 (NtDCompositionSubmitDWMBatch.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00652C0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C0026840 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0028D68 (-Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0087120 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00A7F10 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00AAA58 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 */

void __fastcall DirectComposition::CBatch::Clear(struct DirectComposition::CApplicationChannel **this)
{
  struct DirectComposition::CApplicationChannel *v2; // rbx
  __int64 v3; // rdx
  DirectComposition::CAnimationMarshaler **v4; // r14
  DirectComposition::CApplicationChannel *v5; // rbp
  unsigned __int64 v6; // r15
  DirectComposition::CBatch::CSystemResourceReference *v7; // rcx
  DirectComposition::CEvent *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DirectComposition::CApplicationChannel *v12; // rbx
  DirectComposition::CAnimationMarshaler *v13; // rbx
  DirectComposition::CAnimationMarshaler **v14; // rdi
  DirectComposition::CAnimationMarshaler *v15; // rcx
  struct DirectComposition::CApplicationChannel *v16; // rbx

  if ( this[5] )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable((struct DirectComposition::CBatch *)this);
    this[5] = 0LL;
  }
  v2 = this[17];
  v3 = (__int64)this[19] + *((_QWORD *)v2 + 4) + 40;
  *((_QWORD *)v2 + 4) = v3;
  if ( !*((_BYTE *)v2 + 64) && *((_QWORD *)v2 + 5) == v3 )
  {
    v10 = *((_QWORD *)v2 + 6);
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    if ( v10 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)v2 + 2) + 16LL);
      if ( v11 )
        MmUnmapViewOfSection(v11);
      *((_QWORD *)v2 + 6) = 0LL;
    }
  }
  *((_BYTE *)this + 32) &= 0xF2u;
  v4 = (DirectComposition::CAnimationMarshaler **)this[10];
  v5 = this[1];
  v6 = (unsigned __int64)this[9];
  this[17] = 0LL;
  this[18] = 0LL;
  *((_DWORD *)this + 12) = 0;
  this[7] = 0LL;
  this[19] = 0LL;
  if ( v4 )
  {
    do
    {
      v13 = *v4;
      v14 = (DirectComposition::CAnimationMarshaler **)v4[1];
      v15 = *v4;
      v4[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v15, v6);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v4);
      DirectComposition::CApplicationChannel::ReleaseResource(
        v5,
        (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v13 + 16) & -(__int64)(v13 != 0LL)));
      v4 = v14;
    }
    while ( v14 );
  }
  v7 = this[11];
  this[10] = 0LL;
  if ( v7 )
  {
    do
    {
      v12 = *(struct DirectComposition::CApplicationChannel **)v7;
      DirectComposition::CBatch::CSystemResourceReference::Delete(v7, this[1]);
      this[11] = v12;
      v7 = v12;
    }
    while ( v12 );
  }
  v8 = this[13];
  if ( v8 )
  {
    do
    {
      v16 = *(struct DirectComposition::CApplicationChannel **)v8;
      DirectComposition::CEvent::`scalar deleting destructor'(v8);
      this[13] = v16;
      v8 = v16;
    }
    while ( v16 );
  }
  v9 = *((_DWORD *)this + 28);
  if ( v9 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(*((DirectComposition::CConnection **)this[1] + 5), v9);
    *((_DWORD *)this + 28) = 0;
  }
}
