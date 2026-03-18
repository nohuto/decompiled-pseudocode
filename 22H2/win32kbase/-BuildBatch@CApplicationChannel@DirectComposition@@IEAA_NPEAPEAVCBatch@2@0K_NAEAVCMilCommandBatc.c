/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00275C0
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1C0026EA4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     NtDCompositionCommitChannel @ 0x1C00271A0 (NtDCompositionCommitChannel.c)
 * Callees:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001F974 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0024F6C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00264AC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0027EBC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z @ 0x1C0027F84 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028270 (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0028CA8 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BC70 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0065128 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x1C00B0104 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1C00C13F0 (EtwTraceDCompCommitBatchEvent.c)
 *     strnlen @ 0x1C00CE670 (strnlen.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     McTemplateK0qpq_EtwWriteTransfer @ 0x1C00DFD10 (McTemplateK0qpq_EtwWriteTransfer.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C020C2A8 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C020C390 (-EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C020C628 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
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
  char *v36; // rax
  int v37; // esi
  unsigned int v38; // edi
  _DWORD *v39; // rax
  void *v40; // rdx
  __int64 v41; // rdi
  _DWORD *v42; // rsi
  const unsigned __int16 *v43; // rcx
  unsigned int v44; // edi
  _DWORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  char *v48; // rdi
  __int64 *v49; // rax
  __int64 v50; // rcx
  char *v51; // rdi
  __int64 *v52; // rax
  __int64 v53; // rdi
  char *v54; // rcx
  struct DirectComposition::CBatch **v55; // rcx
  char *v56; // rdx
  DirectComposition::CEvent *v57; // rcx
  char *v58; // rdi
  __int64 *v59; // rax
  __int64 v60; // rdi
  char *v61; // rax
  __int64 v62; // r9
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rdx
  unsigned int v65; // ecx
  size_t v66; // rdx
  unsigned int v67; // ecx
  size_t v68; // r8
  const void *v69; // rdx
  int v70; // ecx
  __int64 v71; // rcx
  __int64 *v72; // rax
  __int64 v73; // rcx
  unsigned int *m; // rdi
  char v75; // r8
  struct DirectComposition::CBatch *v76; // [rsp+30h] [rbp-38h] BYREF
  void *v77; // [rsp+38h] [rbp-30h] BYREF
  void *Src; // [rsp+40h] [rbp-28h]
  void *v79; // [rsp+48h] [rbp-20h] BYREF
  void *v80; // [rsp+50h] [rbp-18h] BYREF
  size_t Size; // [rsp+58h] [rbp-10h]
  void *v82; // [rsp+A0h] [rbp+38h] BYREF
  struct DirectComposition::CBatch **v83; // [rsp+A8h] [rbp+40h]
  unsigned int v84; // [rsp+B8h] [rbp+50h]

  v84 = a4;
  v83 = a2;
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
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, v84, 1, 1);
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
    v76 = BatchFragment;
    if ( !v26 )
    {
      v36 = *((_QWORD *)this + 2) ? (char *)PsGetProcessImageFileName() : "System";
      Src = v36;
      Size = strnlen(v36, 0x80uLL);
      v82 = 0LL;
      v37 = Size;
      v38 = (Size + 16) & 0xFFFFFFFC;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v76, v38, &v82) )
      {
        v39 = v82;
        v40 = Src;
        *(_DWORD *)v82 = v38;
        v41 = (unsigned int)Size;
        v39[2] = v37;
        v42 = v39 + 3;
        v39[1] = 51;
        memmove(v39 + 3, v40, (unsigned int)v41);
        *((_BYTE *)v42 + v41) = 0;
        *((_BYTE *)this + 240) &= ~0x40u;
      }
    }
    v27 = *((_BYTE *)this + 240);
    if ( (v27 & 0x40) != 0 )
      goto LABEL_95;
    if ( v27 < 0 )
    {
      v43 = (const unsigned __int16 *)*((_QWORD *)this + 335);
      v44 = 0;
      if ( v43 )
      {
        v82 = 0LL;
        if ( (int)StringCchLengthW(v43, 0x97uLL, (unsigned __int64 *)&v82) >= 0 )
          v44 = 2 * (_DWORD)v82 + 2;
      }
      v79 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v76, (v44 + 15) & 0xFFFFFFFC, &v79) )
      {
        v45 = v79;
        *(_DWORD *)v79 = (v44 + 15) & 0xFFFFFFFC;
        v45[1] = 49;
        v45[2] = v44;
        if ( v44 )
          memmove(v45 + 3, *((const void **)this + 335), v44);
        *((_BYTE *)this + 240) &= ~0x80u;
      }
    }
    if ( *((char *)this + 240) < 0 )
      goto LABEL_95;
    v15 = (char *)this + 241;
    if ( (*((_BYTE *)this + 241) & 1) != 0
      && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v76, 0) )
    {
      *v15 &= ~1u;
    }
    if ( (*v15 & 2) != 0 && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v76, 1) )
      *v15 &= ~2u;
    if ( (*v15 & 3) != 0 )
      goto LABEL_95;
    v26 = *((_QWORD *)this + 57) == 0LL;
    v82 = 0LL;
    if ( !v26 )
    {
      do
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v76, 0x14uLL, &v82) )
          break;
        v51 = (char *)v82;
        *(_DWORD *)v82 = 20;
        *(_OWORD *)(v51 + 4) = 0LL;
        *((_DWORD *)v51 + 1) = 20;
        *((_DWORD *)v51 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 57) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 57) + 24LL))
                                         + 32);
        *((_DWORD *)v51 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 57) + 16LL) + 32LL);
        *((_DWORD *)v51 + 4) = *(_DWORD *)(*((_QWORD *)this + 57) + 12LL);
        v52 = (__int64 *)*((_QWORD *)this + 57);
        v53 = *v52;
        *v52 = 0LL;
        DirectComposition::CAnimationBinding::DetachAndDelete(
          *((DirectComposition::CAnimationBinding **)this + 57),
          this);
        *((_QWORD *)this + 57) = v53;
      }
      while ( v53 );
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
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v35 + 32))(v28, &v76) )
          break;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28) )
          ++*((_DWORD *)v76 + 28);
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
                &v76) )
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
                &v76) )
          break;
        *(_DWORD *)(*((_QWORD *)this + 53) + 16LL) &= ~2u;
        v47 = *((_QWORD *)this + 53);
        k = *(_QWORD *)(v47 + 8);
        *(_QWORD *)(v47 + 8) = 0LL;
      }
      if ( *((_QWORD *)this + 53) || !DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v76) )
        goto LABEL_95;
      if ( *((_QWORD *)this + 343) )
      {
        v82 = 0LL;
        if ( DirectComposition::CBatch::EnsureBatchBuffer(&v76, 0x34uLL, &v82) )
        {
          v56 = (char *)v82;
          *(_DWORD *)v82 = 52;
          *((_DWORD *)v56 + 1) = 54;
          *((_DWORD *)v56 + 11) = *(_DWORD *)(*((_QWORD *)this + 343) + 32LL);
          *((_DWORD *)v56 + 2) = *((_DWORD *)this + 688);
          *((_DWORD *)v56 + 3) = *((_DWORD *)this + 689);
          *((_DWORD *)v56 + 4) = *((_DWORD *)this + 690);
          *((_DWORD *)v56 + 5) = *((_DWORD *)this + 691);
          *((_DWORD *)v56 + 6) = *((_DWORD *)this + 692);
          *(_QWORD *)(v56 + 28) = *((_QWORD *)this + 347);
          *(_QWORD *)(v56 + 36) = *((_QWORD *)this + 348);
          DirectComposition::CApplicationChannel::ReleaseResource(
            this,
            *((struct DirectComposition::CResourceMarshaler **)this + 343));
          v57 = (DirectComposition::CEvent *)*((_QWORD *)this + 342);
          *((_QWORD *)this + 343) = 0LL;
          if ( v57 )
            DirectComposition::CEvent::`scalar deleting destructor'(v57);
          *((_QWORD *)this + 342) = 0LL;
        }
        if ( *((_QWORD *)this + 343) )
          goto LABEL_95;
      }
      v26 = *((_QWORD *)this + 57) == 0LL;
      v82 = 0LL;
      if ( !v26 )
      {
        do
        {
          if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v76, 0x14uLL, &v82) )
            break;
          v58 = (char *)v82;
          *(_DWORD *)v82 = 20;
          *(_OWORD *)(v58 + 4) = 0LL;
          *((_DWORD *)v58 + 1) = 20;
          *((_DWORD *)v58 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 57) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 57) + 24LL))
                                           + 32);
          *((_DWORD *)v58 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 57) + 16LL) + 32LL);
          *((_DWORD *)v58 + 4) = *(_DWORD *)(*((_QWORD *)this + 57) + 12LL);
          v59 = (__int64 *)*((_QWORD *)this + 57);
          v60 = *v59;
          *v59 = 0LL;
          DirectComposition::CAnimationBinding::DetachAndDelete(
            *((DirectComposition::CAnimationBinding **)this + 57),
            this);
          *((_QWORD *)this + 57) = v60;
        }
        while ( v60 );
        if ( *((_QWORD *)this + 57) )
          goto LABEL_95;
      }
      v26 = *((_QWORD *)this + 56) == 0LL;
      v82 = 0LL;
      if ( !v26 )
      {
        do
        {
          if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v76, 0x14uLL, &v82) )
            break;
          v48 = (char *)v82;
          *(_DWORD *)v82 = 20;
          *(_OWORD *)(v48 + 4) = 0LL;
          *((_DWORD *)v48 + 1) = 19;
          *((_DWORD *)v48 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 56) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 56) + 24LL))
                                           + 32);
          *((_DWORD *)v48 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 56) + 16LL) + 32LL);
          *((_DWORD *)v48 + 4) = *(_DWORD *)(*((_QWORD *)this + 56) + 12LL);
          *(_DWORD *)(*((_QWORD *)this + 56) + 8LL) = *(_DWORD *)(*((_QWORD *)this + 56) + 8LL) & 0xFFFFFFFC | 1;
          v49 = (__int64 *)*((_QWORD *)this + 56);
          v50 = *v49;
          *v49 = 0LL;
          *((_QWORD *)this + 56) = v50;
        }
        while ( v50 );
        if ( *((_QWORD *)this + 56) )
          goto LABEL_95;
      }
      v28 = (_QWORD *)*((_QWORD *)this + 54);
      if ( !v28 )
      {
LABEL_51:
        if ( ((*((_DWORD *)this + 646) - 1) & 0xFFFFFFFD) == 0 )
        {
          v82 = 0LL;
          if ( DirectComposition::CBatch::EnsureBatchBuffer(&v76, 0xCuLL, &v82) )
          {
            v61 = (char *)v82;
            *(_DWORD *)v82 = 12;
            *(_QWORD *)(v61 + 4) = 0LL;
            *((_DWORD *)v61 + 1) = 47;
            if ( *((_DWORD *)this + 646) == 1 )
            {
              v61[8] = 1;
              *((_DWORD *)this + 646) = 2;
            }
            else
            {
              v61[8] = 0;
              *((_DWORD *)this + 646) = 0;
            }
          }
        }
        if ( (*((_DWORD *)this + 646) & 0xFFFFFFFD) != 0 )
          goto LABEL_95;
        if ( (*v15 & 4) != 0 )
        {
          v82 = 0LL;
          if ( DirectComposition::CBatch::EnsureBatchBuffer(&v76, 0xCuLL, &v82) )
          {
            v54 = (char *)v82;
            *(_DWORD *)v82 = 12;
            *(_QWORD *)(v54 + 4) = 0LL;
            *((_DWORD *)v54 + 1) = 52;
            v54[8] = (*v15 & 8) != 0;
            v54[9] = (*v15 & 0x10) != 0;
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
            if ( !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v76)
              || !DirectComposition::CApplicationChannel::EmitDeletionCommands(this, &v76) )
            {
              goto LABEL_159;
            }
            v11 = 1;
          }
LABEL_56:
          v14 = v76;
          goto LABEL_57;
        }
        while ( 1 )
        {
          v62 = *((_QWORD *)v9 + 6);
          v63 = 4096LL - *(_QWORD *)(*((_QWORD *)v76 + 17) + 40LL);
          if ( v62 || (v64 = *v31, v64 > v63) )
          {
            LODWORD(v82) = v31[1];
            v65 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::s_pCommandSplitDataGenerated[2 * (int)v82];
            v79 = (void *)(8LL * (int)v82);
            if ( (_DWORD)v82 == 2 )
            {
              v65 = 32;
            }
            else if ( !v65 )
            {
              if ( *v31 > (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**(_QWORD **)v9 + 64LL))(
                                              *(_QWORD *)v9,
                                              (int)v82,
                                              v63) )
                KeBugCheck(0xC0000099);
LABEL_142:
              if ( !DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch ***)&v76, 0LL) )
                goto LABEL_95;
              goto LABEL_143;
            }
            if ( v63 < (unsigned __int64)v65 + 16 )
              goto LABEL_142;
            if ( !v62 )
            {
              *((_QWORD *)v9 + 6) = v31 + 4;
              *((_DWORD *)v9 + 14) = v31[3] / v65;
            }
            v77 = 0LL;
            v66 = *((unsigned int *)v9 + 14);
            if ( v66 >= (v63 - 16) / v65 )
              v66 = (v63 - 16) / v65;
            v67 = v66 * v65;
            Size = v66;
            v31[3] = v67;
            *v31 = v67 + 16;
            DirectComposition::CBatch::EnsureBatchBuffer(&v76, v67 + 16, &v77);
            *(_OWORD *)v77 = *(_OWORD *)*((_QWORD *)v9 + 4);
            v68 = v31[3];
            v69 = (const void *)*((_QWORD *)v9 + 6);
            v77 = (char *)v77 + 16;
            memmove(v77, v69, v68);
            v70 = Size;
            if ( Size < *((unsigned int *)v9 + 14) )
            {
              if ( (_DWORD)v82 != 2 )
                v31[1] = *(_DWORD *)((char *)&DirectComposition::CApplicationChannel::CMilCommandBatchParser::s_pCommandSplitDataGenerated[1]
                                   + (_QWORD)v79);
              *((_QWORD *)v9 + 6) += v31[3];
              *((_DWORD *)v9 + 14) -= v70;
              goto LABEL_142;
            }
            *((_QWORD *)v9 + 6) = 0LL;
            *((_DWORD *)v9 + 14) = 0;
          }
          else
          {
            v80 = (void *)*((_QWORD *)v9 + 6);
            DirectComposition::CBatch::EnsureBatchBuffer(&v76, v64, &v80);
            memmove(v80, *((const void **)v9 + 4), *v31);
          }
          v71 = *((unsigned int *)v9 + 10);
          v26 = *((_DWORD *)v9 + 6) == (_DWORD)v71;
          *((_DWORD *)v9 + 6) -= v71;
          if ( v26 )
          {
            v72 = (__int64 *)*((_QWORD *)v9 + 2);
            v73 = *v72;
            *((_QWORD *)v9 + 2) = *v72;
            if ( v73 )
            {
              *((_DWORD *)v9 + 6) = *(_DWORD *)(v73 + 20);
              *((_QWORD *)v9 + 4) = v73 + 24;
              *((_DWORD *)v9 + 10) = *(_DWORD *)(v73 + 24);
            }
            else
            {
              *((_QWORD *)v9 + 4) = 0LL;
              *((_DWORD *)v9 + 10) = 0;
            }
          }
          else
          {
            *((_QWORD *)v9 + 4) += v71;
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
        v46 = *v28;
        v28[1] = 0LL;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v46 + 32))(v28, &v76) )
          break;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28) )
          ++*((_DWORD *)v76 + 28);
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
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, v84, 1, 1);
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
    v55 = v83;
    *a3 = 0LL;
    *v55 = 0LL;
    goto LABEL_23;
  }
LABEL_21:
  v18 = v83;
  *a3 = v14;
  *v18 = BatchFragment;
  if ( v11 )
  {
    if ( v14 )
    {
      v20 = *((_BYTE *)this + 240);
      if ( (v20 & 0x10) != 0 )
      {
        v75 = *((_BYTE *)v14 + 32) | 8;
        *((_BYTE *)v14 + 32) = v75;
        if ( (v20 & 0x20) != 0 )
          *((_BYTE *)v14 + 32) = v75 | 0x10;
        *((_BYTE *)this + 240) &= 0xCFu;
      }
    }
LABEL_23:
    *((_BYTE *)this + 240) &= ~1u;
    *v15 &= ~0x10u;
  }
  return v11;
}
