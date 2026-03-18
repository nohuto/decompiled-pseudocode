/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001229C (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     NtDCompositionCommitChannel @ 0x1C0012460 (NtDCompositionCommitChannel.c)
 * Callees:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000B908 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0012B1C (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0012C14 (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0012CB4 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C0012DA0 (EtwTraceDCompCommitBatchEvent.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0013148 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001362C (-EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013714 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00137B0 (-EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013824 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00138E8 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013974 (-EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0013C68 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0091024 (-EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00910B8 (-EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00911C8 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0091288 (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        char a4)
{
  unsigned __int8 v8; // di
  char v9; // cl
  struct DirectComposition::CBatch *BatchFragment; // r14
  struct DirectComposition::CBatch *v11; // rdx
  struct _ERESOURCE *v12; // rsi
  char v14; // cl
  char v15; // al
  __int64 v16; // rdi
  char *v17; // rdx
  DirectComposition::CEvent *v18; // rcx
  char *v19; // rax
  char *v20; // rcx
  char v21; // r8
  struct DirectComposition::CBatch *v22; // [rsp+50h] [rbp+30h] BYREF
  void *v23; // [rsp+58h] [rbp+38h] BYREF

  v8 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v9 = *((_BYTE *)this + 240);
  if ( (v9 & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 240) &= ~2u;
    v9 = *((_BYTE *)this + 240);
  }
  BatchFragment = 0LL;
  v11 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 21)
    || (v9 & 0x40) != 0
    || v9 < 0
    || (*((_BYTE *)this + 241) & 3) != 0
    || *((_QWORD *)this + 53)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 50)
    || *((_QWORD *)this + 55)
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 52)
    || *((DirectComposition::CApplicationChannel **)this + 194) != (DirectComposition::CApplicationChannel *)((char *)this + 1552)
    || *((DirectComposition::CApplicationChannel **)this + 196) != (DirectComposition::CApplicationChannel *)((char *)this + 1568)
    || *((DirectComposition::CApplicationChannel **)this + 198) != (DirectComposition::CApplicationChannel *)((char *)this + 1584)
    || *((DirectComposition::CApplicationChannel **)this + 200) != (DirectComposition::CApplicationChannel *)((char *)this + 1600)
    || *((_QWORD *)this + 221)
    || ((*((_DWORD *)this + 404) - 1) & 0xFFFFFFFD) == 0 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    v15 = *((_BYTE *)this + 48);
    if ( (v15 & 2) == 0 )
    {
      *((_BYTE *)this + 240) |= 0x40u;
      *((_BYTE *)this + 48) = v15 | 2;
    }
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v16 = *((_QWORD *)this + 54);
    if ( v16 )
    {
      do
      {
        DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)v16 + 16LL));
        *(_DWORD *)(v16 + 24) |= 2u;
        v16 = *(_QWORD *)(v16 + 8);
      }
      while ( v16 );
      v16 = *((_QWORD *)this + 54);
    }
    *((_QWORD *)BatchFragment + 10) = v16;
    *((_QWORD *)this + 54) = 0LL;
    v22 = BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitDescriptionCommand(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v22)
      || !DirectComposition::CTelemetryInfo::EmitAnimationCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 1552),
            &v22)
      || !DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 1552),
            &v22)
      || !DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 1552),
            &v22)
      || !DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 1552),
            &v22)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v22) )
    {
      goto LABEL_74;
    }
    if ( *((_QWORD *)this + 221) )
    {
      v23 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)&v22, 0x34uLL, &v23) )
      {
        v17 = (char *)v23;
        *(_DWORD *)v23 = 52;
        *((_DWORD *)v17 + 1) = 53;
        *((_DWORD *)v17 + 11) = *(_DWORD *)(*((_QWORD *)this + 221) + 32LL);
        *((_DWORD *)v17 + 2) = *((_DWORD *)this + 444);
        *((_DWORD *)v17 + 3) = *((_DWORD *)this + 445);
        *((_DWORD *)v17 + 4) = *((_DWORD *)this + 446);
        *((_DWORD *)v17 + 5) = *((_DWORD *)this + 447);
        *((_DWORD *)v17 + 6) = *((_DWORD *)this + 448);
        *(_QWORD *)(v17 + 28) = *((_QWORD *)this + 225);
        *(_QWORD *)(v17 + 36) = *((_QWORD *)this + 226);
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          *((struct DirectComposition::CResourceMarshaler **)this + 221));
        v18 = (DirectComposition::CEvent *)*((_QWORD *)this + 220);
        *((_QWORD *)this + 221) = 0LL;
        if ( v18 )
          DirectComposition::CEvent::`scalar deleting destructor'(v18);
        *((_QWORD *)this + 220) = 0LL;
      }
      if ( *((_QWORD *)this + 221) )
        goto LABEL_74;
    }
    if ( !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitBindingAddCommands(this, &v22)
      || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v22) )
    {
      goto LABEL_74;
    }
    if ( ((*((_DWORD *)this + 404) - 1) & 0xFFFFFFFD) == 0 )
    {
      v23 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)&v22, 0xCuLL, &v23) )
      {
        v19 = (char *)v23;
        *(_DWORD *)v23 = 12;
        *(_QWORD *)(v19 + 4) = 0LL;
        *((_DWORD *)v19 + 1) = 47;
        if ( *((_DWORD *)this + 404) == 1 )
        {
          v19[8] = 1;
          *((_DWORD *)this + 404) = 2;
        }
        else
        {
          v19[8] = 0;
          *((_DWORD *)this + 404) = 0;
        }
      }
    }
    if ( (*((_DWORD *)this + 404) & 0xFFFFFFFD) != 0 )
      goto LABEL_74;
    if ( (*((_BYTE *)this + 241) & 2) == 0 )
      goto LABEL_51;
    v23 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)&v22, 0xCuLL, &v23) )
    {
      v20 = (char *)v23;
      *(_DWORD *)v23 = 12;
      *(_QWORD *)(v20 + 4) = 0LL;
      *((_DWORD *)v20 + 1) = 51;
      v20[8] = (*((_BYTE *)this + 241) & 4) != 0;
      v20[9] = (*((_BYTE *)this + 241) & 8) != 0;
      *((_BYTE *)this + 241) &= ~2u;
    }
    if ( (*((_BYTE *)this + 241) & 2) == 0 )
LABEL_51:
      v8 = 1;
    else
LABEL_74:
      v8 = 0;
    v11 = v22;
    goto LABEL_53;
  }
  if ( a4 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v11 = BatchFragment;
LABEL_53:
    *((_QWORD *)BatchFragment + 13) = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = 0LL;
    if ( v11 )
      *(_BYTE *)(*((_QWORD *)v11 + 17) + 64LL) = 0;
    goto LABEL_24;
  }
  v12 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v12 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    if ( !*((_DWORD *)this + 56) )
      KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL), 1, 0);
    ExReleaseResourceLite(*((PERESOURCE *)this + 46));
    KeLeaveCriticalRegion();
    *a2 = 0LL;
    *a3 = 0LL;
    goto LABEL_26;
  }
LABEL_24:
  *a2 = BatchFragment;
  *a3 = v11;
  if ( v8 )
  {
    if ( v11 )
    {
      v14 = *((_BYTE *)this + 240);
      if ( (v14 & 0x10) != 0 )
      {
        v21 = *((_BYTE *)v11 + 32) | 8;
        *((_BYTE *)v11 + 32) = v21;
        if ( (v14 & 0x20) != 0 )
          *((_BYTE *)v11 + 32) = v21 | 0x10;
        *((_BYTE *)this + 240) &= 0xCFu;
      }
    }
LABEL_26:
    *((_BYTE *)this + 240) &= ~1u;
    *((_BYTE *)this + 241) &= ~8u;
  }
  return v8;
}
