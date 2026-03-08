/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00600B0
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1C005F994 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     NtDCompositionCommitChannel @ 0x1C005FC90 (NtDCompositionCommitChannel.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C005D4C8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00609AC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z @ 0x1C0060A74 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0060D60 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C00617B8 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0098B84 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0099740 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BB744 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x1C00BF6E4 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C00D0D50 (EtwTraceDCompCommitBatchEvent.c)
 *     strnlen @ 0x1C00DAF20 (strnlen.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     McTemplateK0qpq_EtwWriteTransfer @ 0x1C00EE970 (McTemplateK0qpq_EtwWriteTransfer.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024ACAC (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024AD94 (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C024B060 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        unsigned int a4,
        bool a5,
        struct DirectComposition::CApplicationChannel::CMilCommandBatchParser *a6,
        unsigned int *a7,
        unsigned int a8)
{
  struct DirectComposition::CApplicationChannel::CMilCommandBatchParser *v9; // r12
  unsigned __int8 v11; // di
  char v12; // cl
  struct DirectComposition::CBatch *BatchFragment; // r15
  struct DirectComposition::CBatch *v14; // rdx
  _BYTE *v15; // rsi
  unsigned int *v16; // r14
  struct _ERESOURCE *v17; // r14
  struct DirectComposition::CBatch **v18; // rcx
  char v20; // cl
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  char v24; // al
  __int64 i; // rdi
  bool v26; // zf
  char v27; // al
  _QWORD *v28; // rdi
  __int64 j; // r9
  __int64 k; // rcx
  unsigned int *v31; // rdi
  __int64 v32; // r10
  unsigned __int8 IsDerivedResourceType; // al
  __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // rcx
  char *v37; // rax
  int v38; // esi
  unsigned int v39; // edi
  _DWORD *v40; // rax
  void *v41; // rdx
  __int64 v42; // rdi
  _DWORD *v43; // rsi
  const unsigned __int16 *v44; // rcx
  unsigned int v45; // edi
  _DWORD *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  char *v49; // rdi
  __int64 *v50; // rax
  __int64 v51; // rcx
  char *v52; // rdi
  __int64 *v53; // rax
  __int64 v54; // rdi
  char *v55; // rcx
  struct DirectComposition::CBatch **v56; // rcx
  char *v57; // rdx
  unsigned int v58; // edx
  DirectComposition::CEvent *v59; // rcx
  char *v60; // rdi
  __int64 *v61; // rax
  __int64 v62; // rdi
  char *v63; // rax
  __int64 v64; // r9
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rdx
  unsigned int v67; // ecx
  size_t v68; // rdx
  unsigned int v69; // ecx
  size_t v70; // r8
  const void *v71; // rdx
  int v72; // ecx
  __int64 v73; // rcx
  __int64 *v74; // rax
  __int64 v75; // rcx
  unsigned int *m; // rdi
  char v77; // r8
  struct DirectComposition::CBatch *v78; // [rsp+30h] [rbp-38h] BYREF
  void *v79; // [rsp+38h] [rbp-30h] BYREF
  void *Src; // [rsp+40h] [rbp-28h]
  void *v81; // [rsp+48h] [rbp-20h] BYREF
  void *v82; // [rsp+50h] [rbp-18h] BYREF
  size_t Size; // [rsp+58h] [rbp-10h]
  void *v84; // [rsp+A0h] [rbp+38h] BYREF
  struct DirectComposition::CBatch **v85; // [rsp+A8h] [rbp+40h]
  unsigned int v86; // [rsp+B8h] [rbp+50h]

  v86 = a4;
  v85 = a2;
  v9 = a6;
  v11 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v12 = *((_BYTE *)this + 240);
  if ( (v12 & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 240) &= ~2u;
    v12 = *((_BYTE *)this + 240);
  }
  BatchFragment = 0LL;
  v14 = 0LL;
  if ( (*((_BYTE *)this + 48) & 2) == 0
    || *((_QWORD *)this + 21)
    || (v12 & 0x40) != 0
    || (v15 = (char *)this + 241, (*((_BYTE *)this + 241) & 7) != 0)
    || *((_QWORD *)this + 54)
    || *((_QWORD *)this + 57)
    || *((_QWORD *)this + 51)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 52)
    || *((_QWORD *)this + 53)
    || *((_QWORD *)this + 343)
    || ((*((_DWORD *)this + 646) - 1) & 0xFFFFFFFD) == 0
    || *((_QWORD *)v9 + 1) )
  {
    v16 = a7;
LABEL_28:
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, v86, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    v24 = *((_BYTE *)this + 48);
    if ( (v24 & 2) == 0 )
    {
      *((_BYTE *)this + 240) |= 0x40u;
      *((_BYTE *)this + 48) = v24 | 2;
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
      McTemplateK0qpq_EtwWriteTransfer(
        v22,
        v21,
        v23,
        *((_DWORD *)this + 7),
        (char)BatchFragment,
        *((_DWORD *)BatchFragment + 4));
    for ( i = *((_QWORD *)this + 55); i; i = *(_QWORD *)(i + 8) )
    {
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)i + 16LL));
      *(_DWORD *)(i + 24) |= 2u;
    }
    *((_QWORD *)BatchFragment + 10) = *((_QWORD *)this + 55);
    v26 = (*((_BYTE *)this + 240) & 0x40) == 0;
    *((_QWORD *)this + 55) = 0LL;
    v78 = BatchFragment;
    if ( !v26 )
    {
      v36 = *((_QWORD *)this + 2);
      v37 = v36 ? (char *)PsGetProcessImageFileName(v36) : "System";
      Src = v37;
      Size = strnlen(v37, 0x80uLL);
      v84 = 0LL;
      v38 = Size;
      v39 = (Size + 16) & 0xFFFFFFFC;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v78, v39, &v84) )
      {
        v40 = v84;
        v41 = Src;
        *(_DWORD *)v84 = v39;
        v42 = (unsigned int)Size;
        v40[2] = v38;
        v43 = v40 + 3;
        v40[1] = 51;
        memmove(v40 + 3, v41, (unsigned int)v42);
        *((_BYTE *)v43 + v42) = 0;
        *((_BYTE *)this + 240) &= ~0x40u;
      }
    }
    v27 = *((_BYTE *)this + 240);
    if ( (v27 & 0x40) != 0 )
      goto LABEL_95;
    if ( v27 < 0 )
    {
      v44 = (const unsigned __int16 *)*((_QWORD *)this + 335);
      v45 = 0;
      if ( v44 )
      {
        v84 = 0LL;
        if ( (int)StringCchLengthW(v44, 0x97uLL, (unsigned __int64 *)&v84) >= 0 )
          v45 = 2 * (_DWORD)v84 + 2;
      }
      v81 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v78, (v45 + 15) & 0xFFFFFFFC, &v81) )
      {
        v46 = v81;
        *(_DWORD *)v81 = (v45 + 15) & 0xFFFFFFFC;
        v46[1] = 49;
        v46[2] = v45;
        if ( v45 )
          memmove(v46 + 3, *((const void **)this + 335), v45);
        *((_BYTE *)this + 240) &= ~0x80u;
      }
    }
    if ( *((char *)this + 240) < 0 )
      goto LABEL_95;
    v15 = (char *)this + 241;
    if ( (*((_BYTE *)this + 241) & 1) != 0
      && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v78, 0) )
    {
      *v15 &= ~1u;
    }
    if ( (*v15 & 2) != 0 && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v78, 1) )
      *v15 &= ~2u;
    if ( (*v15 & 3) != 0 )
      goto LABEL_95;
    v26 = *((_QWORD *)this + 57) == 0LL;
    v84 = 0LL;
    if ( !v26 )
    {
      do
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v78, 0x14uLL, &v84) )
          break;
        v52 = (char *)v84;
        *(_DWORD *)v84 = 20;
        *(_OWORD *)(v52 + 4) = 0LL;
        *((_DWORD *)v52 + 1) = 20;
        *((_DWORD *)v52 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 57) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 57) + 24LL))
                                         + 32);
        *((_DWORD *)v52 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 57) + 16LL) + 32LL);
        *((_DWORD *)v52 + 4) = *(_DWORD *)(*((_QWORD *)this + 57) + 12LL);
        v53 = (__int64 *)*((_QWORD *)this + 57);
        v54 = *v53;
        *v53 = 0LL;
        DirectComposition::CAnimationBinding::DetachAndDelete(
          *((DirectComposition::CAnimationBinding **)this + 57),
          this);
        *((_QWORD *)this + 57) = v54;
      }
      while ( v54 );
      if ( *((_QWORD *)this + 57) )
        goto LABEL_95;
    }
    v28 = (_QWORD *)*((_QWORD *)this + 54);
    if ( v28 )
    {
      while ( 1 )
      {
        *((_QWORD *)this + 54) = v28[1];
        v35 = *v28;
        v28[1] = 0LL;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v35 + 32))(v28, &v78) )
          break;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28) )
          ++*((_DWORD *)v78 + 28);
        (*(void (__fastcall **)(_QWORD *, __int64))(*v28 + 72LL))(v28, 1LL);
        v28 = (_QWORD *)*((_QWORD *)this + 54);
        if ( !v28 )
          goto LABEL_42;
      }
    }
    else
    {
LABEL_42:
      for ( j = *((_QWORD *)this + 51); j; *((_QWORD *)this + 51) = j )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)j + 24LL))(
                j,
                &v78) )
          break;
        *(_DWORD *)(*((_QWORD *)this + 51) + 16LL) |= 1u;
        v32 = *((_QWORD *)this + 51);
        j = *(_QWORD *)(v32 + 8);
        if ( (*(_DWORD *)(v32 + 16) & 2) != 0 )
        {
          IsDerivedResourceType = DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                    *(unsigned int *)(v32 + 36),
                                    170LL);
          *(_QWORD *)(v34 + 8) = *((_QWORD *)this + IsDerivedResourceType + 52);
          *((_QWORD *)this + IsDerivedResourceType + 52) = *((_QWORD *)this + 51);
        }
        else
        {
          *(_QWORD *)(v32 + 8) = 0LL;
        }
      }
      if ( *((_QWORD *)this + 51) )
        goto LABEL_95;
      for ( k = *((_QWORD *)this + 53); k; *((_QWORD *)this + 53) = k )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)k + 40LL))(
                k,
                &v78) )
          break;
        *(_DWORD *)(*((_QWORD *)this + 53) + 16LL) &= ~2u;
        v48 = *((_QWORD *)this + 53);
        k = *(_QWORD *)(v48 + 8);
        *(_QWORD *)(v48 + 8) = 0LL;
      }
      if ( *((_QWORD *)this + 53) || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v78) )
        goto LABEL_95;
      if ( *((_QWORD *)this + 343) )
      {
        v84 = 0LL;
        if ( DirectComposition::CBatch::EnsureBatchBuffer(&v78, 0x34uLL, &v84) )
        {
          v57 = (char *)v84;
          *(_DWORD *)v84 = 52;
          *((_DWORD *)v57 + 1) = 54;
          *((_DWORD *)v57 + 11) = *(_DWORD *)(*((_QWORD *)this + 343) + 32LL);
          *((_DWORD *)v57 + 2) = *((_DWORD *)this + 688);
          *((_DWORD *)v57 + 3) = *((_DWORD *)this + 689);
          *((_DWORD *)v57 + 4) = *((_DWORD *)this + 690);
          *((_DWORD *)v57 + 5) = *((_DWORD *)this + 691);
          *((_DWORD *)v57 + 6) = *((_DWORD *)this + 692);
          *(_QWORD *)(v57 + 28) = *((_QWORD *)this + 347);
          *(_QWORD *)(v57 + 36) = *((_QWORD *)this + 348);
          DirectComposition::CApplicationChannel::ReleaseResource(
            this,
            *((struct DirectComposition::CResourceMarshaler **)this + 343));
          v59 = (DirectComposition::CEvent *)*((_QWORD *)this + 342);
          *((_QWORD *)this + 343) = 0LL;
          if ( v59 )
            DirectComposition::CEvent::`scalar deleting destructor'(v59, v58);
          *((_QWORD *)this + 342) = 0LL;
        }
        if ( *((_QWORD *)this + 343) )
          goto LABEL_95;
      }
      v26 = *((_QWORD *)this + 57) == 0LL;
      v84 = 0LL;
      if ( !v26 )
      {
        do
        {
          if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v78, 0x14uLL, &v84) )
            break;
          v60 = (char *)v84;
          *(_DWORD *)v84 = 20;
          *(_OWORD *)(v60 + 4) = 0LL;
          *((_DWORD *)v60 + 1) = 20;
          *((_DWORD *)v60 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 57) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 57) + 24LL))
                                           + 32);
          *((_DWORD *)v60 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 57) + 16LL) + 32LL);
          *((_DWORD *)v60 + 4) = *(_DWORD *)(*((_QWORD *)this + 57) + 12LL);
          v61 = (__int64 *)*((_QWORD *)this + 57);
          v62 = *v61;
          *v61 = 0LL;
          DirectComposition::CAnimationBinding::DetachAndDelete(
            *((DirectComposition::CAnimationBinding **)this + 57),
            this);
          *((_QWORD *)this + 57) = v62;
        }
        while ( v62 );
        if ( *((_QWORD *)this + 57) )
          goto LABEL_95;
      }
      v26 = *((_QWORD *)this + 56) == 0LL;
      v84 = 0LL;
      if ( !v26 )
      {
        do
        {
          if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v78, 0x14uLL, &v84) )
            break;
          v49 = (char *)v84;
          *(_DWORD *)v84 = 20;
          *(_OWORD *)(v49 + 4) = 0LL;
          *((_DWORD *)v49 + 1) = 19;
          *((_DWORD *)v49 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 56) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 56) + 24LL))
                                           + 32);
          *((_DWORD *)v49 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 56) + 16LL) + 32LL);
          *((_DWORD *)v49 + 4) = *(_DWORD *)(*((_QWORD *)this + 56) + 12LL);
          *(_DWORD *)(*((_QWORD *)this + 56) + 8LL) = *(_DWORD *)(*((_QWORD *)this + 56) + 8LL) & 0xFFFFFFFC | 1;
          v50 = (__int64 *)*((_QWORD *)this + 56);
          v51 = *v50;
          *v50 = 0LL;
          *((_QWORD *)this + 56) = v51;
        }
        while ( v51 );
        if ( *((_QWORD *)this + 56) )
          goto LABEL_95;
      }
      v28 = (_QWORD *)*((_QWORD *)this + 54);
      if ( !v28 )
      {
LABEL_51:
        if ( ((*((_DWORD *)this + 646) - 1) & 0xFFFFFFFD) == 0 )
        {
          v84 = 0LL;
          if ( DirectComposition::CBatch::EnsureBatchBuffer(&v78, 0xCuLL, &v84) )
          {
            v63 = (char *)v84;
            *(_DWORD *)v84 = 12;
            *(_QWORD *)(v63 + 4) = 0LL;
            *((_DWORD *)v63 + 1) = 47;
            if ( *((_DWORD *)this + 646) == 1 )
            {
              v63[8] = 1;
              *((_DWORD *)this + 646) = 2;
            }
            else
            {
              v63[8] = 0;
              *((_DWORD *)this + 646) = 0;
            }
          }
        }
        if ( (*((_DWORD *)this + 646) & 0xFFFFFFFD) != 0 )
          goto LABEL_95;
        if ( (*v15 & 4) != 0 )
        {
          v84 = 0LL;
          if ( DirectComposition::CBatch::EnsureBatchBuffer(&v78, 0xCuLL, &v84) )
          {
            v55 = (char *)v84;
            *(_DWORD *)v84 = 12;
            *(_QWORD *)(v55 + 4) = 0LL;
            *((_DWORD *)v55 + 1) = 52;
            v55[8] = (*v15 & 8) != 0;
            v55[9] = (*v15 & 0x10) != 0;
            *v15 &= ~4u;
          }
          if ( (*v15 & 4) != 0 )
            goto LABEL_95;
        }
        v31 = (unsigned int *)*((_QWORD *)v9 + 4);
        if ( !v31 )
        {
LABEL_55:
          v11 = 1;
          if ( v16 )
          {
            for ( m = &v16[a8]; v16 < m; ++v16 )
              DirectComposition::CApplicationChannel::ReleaseResource(this, *v16);
            if ( !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v78)
              || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v78) )
            {
              goto LABEL_159;
            }
            v11 = 1;
          }
LABEL_56:
          v14 = v78;
          goto LABEL_57;
        }
        while ( 1 )
        {
          v64 = *((_QWORD *)v9 + 6);
          v65 = 4096LL - *(_QWORD *)(*((_QWORD *)v78 + 17) + 40LL);
          if ( v64 || (v66 = *v31, v66 > v65) )
          {
            LODWORD(v84) = v31[1];
            v67 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::s_pCommandSplitDataGenerated[2 * (int)v84];
            v81 = (void *)(8LL * (int)v84);
            if ( (_DWORD)v84 == 2 )
            {
              v67 = 32;
            }
            else if ( !v67 )
            {
              if ( *v31 > (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**(_QWORD **)v9 + 64LL))(
                                              *(_QWORD *)v9,
                                              (int)v84,
                                              v65) )
                KeBugCheck(0xC0000099);
LABEL_142:
              if ( !DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch ***)&v78, 0LL) )
                goto LABEL_95;
              goto LABEL_143;
            }
            if ( v65 < (unsigned __int64)v67 + 16 )
              goto LABEL_142;
            if ( !v64 )
            {
              *((_QWORD *)v9 + 6) = v31 + 4;
              *((_DWORD *)v9 + 14) = v31[3] / v67;
            }
            v79 = 0LL;
            v68 = *((unsigned int *)v9 + 14);
            if ( v68 >= (v65 - 16) / v67 )
              v68 = (v65 - 16) / v67;
            v69 = v68 * v67;
            Size = v68;
            v31[3] = v69;
            *v31 = v69 + 16;
            DirectComposition::CBatch::EnsureBatchBuffer(&v78, v69 + 16, &v79);
            *(_OWORD *)v79 = *(_OWORD *)*((_QWORD *)v9 + 4);
            v70 = v31[3];
            v71 = (const void *)*((_QWORD *)v9 + 6);
            v79 = (char *)v79 + 16;
            memmove(v79, v71, v70);
            v72 = Size;
            if ( Size < *((unsigned int *)v9 + 14) )
            {
              if ( (_DWORD)v84 != 2 )
                v31[1] = *(_DWORD *)((char *)&DirectComposition::CApplicationChannel::CMilCommandBatchParser::s_pCommandSplitDataGenerated[1]
                                   + (_QWORD)v81);
              *((_QWORD *)v9 + 6) += v31[3];
              *((_DWORD *)v9 + 14) -= v72;
              goto LABEL_142;
            }
            *((_QWORD *)v9 + 6) = 0LL;
            *((_DWORD *)v9 + 14) = 0;
          }
          else
          {
            v82 = (void *)*((_QWORD *)v9 + 6);
            DirectComposition::CBatch::EnsureBatchBuffer(&v78, v66, &v82);
            memmove(v82, *((const void **)v9 + 4), *v31);
          }
          v73 = *((unsigned int *)v9 + 10);
          v26 = *((_DWORD *)v9 + 6) == (_DWORD)v73;
          *((_DWORD *)v9 + 6) -= v73;
          if ( v26 )
          {
            v74 = (__int64 *)*((_QWORD *)v9 + 2);
            v75 = *v74;
            *((_QWORD *)v9 + 2) = *v74;
            if ( v75 )
            {
              *((_DWORD *)v9 + 6) = *(_DWORD *)(v75 + 20);
              *((_QWORD *)v9 + 4) = v75 + 24;
              *((_DWORD *)v9 + 10) = *(_DWORD *)(v75 + 24);
            }
            else
            {
              *((_QWORD *)v9 + 4) = 0LL;
              *((_DWORD *)v9 + 10) = 0;
            }
          }
          else
          {
            *((_QWORD *)v9 + 4) += v73;
            *((_DWORD *)v9 + 10) = **((_DWORD **)v9 + 4);
          }
LABEL_143:
          v31 = (unsigned int *)*((_QWORD *)v9 + 4);
          if ( !v31 )
            goto LABEL_55;
        }
      }
      while ( 1 )
      {
        *((_QWORD *)this + 54) = v28[1];
        v47 = *v28;
        v28[1] = 0LL;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v47 + 32))(v28, &v78) )
          break;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28) )
          ++*((_DWORD *)v78 + 28);
        (*(void (__fastcall **)(_QWORD *, __int64))(*v28 + 72LL))(v28, 1LL);
        v28 = (_QWORD *)*((_QWORD *)this + 54);
        if ( !v28 )
          goto LABEL_51;
      }
    }
    v28[1] = *((_QWORD *)this + 54);
    *((_QWORD *)this + 54) = v28;
LABEL_95:
    v15 = (char *)this + 241;
LABEL_159:
    v11 = 0;
    goto LABEL_56;
  }
  v16 = a7;
  if ( a7 )
    goto LABEL_28;
  if ( a5 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, v86, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((unsigned int *)this + 7), BatchFragment, *((unsigned int *)BatchFragment + 4));
    v14 = BatchFragment;
LABEL_57:
    *((_QWORD *)BatchFragment + 13) = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = 0LL;
    if ( v14 )
      *(_BYTE *)(*((_QWORD *)v14 + 17) + 64LL) = 0;
    goto LABEL_21;
  }
  v17 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v17 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v17, 1u);
    if ( !*((_DWORD *)this + 56) )
      KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL), 1, 0);
    ExReleaseResourceLite(*((PERESOURCE *)this + 46));
    KeLeaveCriticalRegion();
    v56 = v85;
    *a3 = 0LL;
    *v56 = 0LL;
    goto LABEL_23;
  }
LABEL_21:
  v18 = v85;
  *a3 = v14;
  *v18 = BatchFragment;
  if ( v11 )
  {
    if ( v14 )
    {
      v20 = *((_BYTE *)this + 240);
      if ( (v20 & 0x10) != 0 )
      {
        v77 = *((_BYTE *)v14 + 32) | 8;
        *((_BYTE *)v14 + 32) = v77;
        if ( (v20 & 0x20) != 0 )
          *((_BYTE *)v14 + 32) = v77 | 0x10;
        *((_BYTE *)this + 240) &= 0xCFu;
      }
    }
LABEL_23:
    *((_BYTE *)this + 240) &= ~1u;
    *v15 &= ~0x10u;
  }
  return v11;
}
