/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00874F0
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0087240 (NtDCompositionGetConnectionBatch.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0213170 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000E5DC (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1C00879D0 (EtwTraceDCompGetBatchEvent.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C00879F0 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0087A54 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int UserModeViewAtOffset; // esi
  struct UCE_RDP_HEADER *v4; // r12
  struct UCE_RDP_HEADER *v5; // r14
  struct UCE_RDP_HEADER *v6; // rdi
  __int64 v8; // r8
  bool v9; // r15
  __int64 v10; // rcx
  char v12; // r14
  char v13; // r13
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rax
  struct UCE_RDP_HEADER *v18; // r12
  __int64 v19; // rax
  struct UCE_RDP_HEADER *v20; // rcx
  _QWORD *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rsi
  struct _ERESOURCE *v30; // r15
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  int ChannelRDPHeaders; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  struct UCE_RDP_HEADER *v39; // [rsp+58h] [rbp-59h] BYREF
  struct UCE_RDP_HEADER *v40; // [rsp+60h] [rbp-51h] BYREF
  struct UCE_RDP_HEADER *v41; // [rsp+68h] [rbp-49h]
  struct UCE_RDP_HEADER *v42; // [rsp+70h] [rbp-41h]
  __int64 v43; // [rsp+78h] [rbp-39h] BYREF
  __int64 v44; // [rsp+80h] [rbp-31h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v45; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-21h] BYREF
  __int64 v47; // [rsp+98h] [rbp-19h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+7h]
  __int64 v52; // [rsp+C0h] [rbp+Fh]
  __int64 v53; // [rsp+C8h] [rbp+17h]
  __int64 v54; // [rsp+D0h] [rbp+1Fh]
  bool v57; // [rsp+130h] [rbp+7Fh]

  UserModeViewAtOffset = 0;
  v4 = 0LL;
  v39 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v8 = 1LL;
  v9 = 0;
  if ( !a2 )
  {
    v36 = *((_QWORD *)this + 14);
    if ( v36 )
    {
      v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v36 + 8) + 8LL))(
              *(_QWORD *)(v36 + 8),
              0LL,
              1LL);
      v8 = 1LL;
      if ( v37 != 3 )
        v9 = 1;
    }
  }
  v57 = v9;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 14);
    if ( !v10 || v9 )
      break;
    v12 = 0;
    v13 = 0;
    v14 = (unsigned int)(*((_DWORD *)this + 37) - 1);
    if ( *((_DWORD *)this + 37) != 1 )
    {
      if ( *((_DWORD *)this + 37) != 2 )
        goto LABEL_18;
      if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
      {
        if ( *(_DWORD *)(v10 + 20) == 6 )
        {
          v13 = 1;
        }
        else
        {
          v12 = 1;
          ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                *(DirectComposition::CApplicationChannel **)(v10 + 8),
                                &v40,
                                &v39);
          v6 = v40;
          UserModeViewAtOffset = ChannelRDPHeaders;
          if ( ChannelRDPHeaders >= 0 )
          {
            *((_QWORD *)v40 + 1) = 0LL;
            *((_DWORD *)v6 + 1) = 40;
            *(_DWORD *)v6 = 5;
            *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            v14 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL);
            *((_DWORD *)v6 + 5) = *(_DWORD *)(v14 + 1720);
            *((_QWORD *)v6 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 1712LL);
          }
        }
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
        goto LABEL_18;
      }
      v12 = 1;
      v13 = 1;
      if ( *(_DWORD *)(v10 + 20) != 6 )
      {
        v15 = *(_QWORD **)(v10 + 136);
        UserModeViewAtOffset = 0;
        v16 = *(_QWORD *)(v10 + 144);
        v54 = *(_QWORD *)(v10 + 152);
        v52 = v15[7];
        v17 = v15[6];
        v51 = v16;
        if ( !v17 )
        {
          v34 = v15[2];
          v48 = 0LL;
          v47 = 0LL;
          v43 = 0LL;
          UserModeViewAtOffset = MmMapViewOfSection(
                                   v15[3],
                                   *(_QWORD *)(v34 + 16),
                                   &v43,
                                   0LL,
                                   4096LL,
                                   &v48,
                                   &v47,
                                   2,
                                   0x400000,
                                   2);
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v17 = v43;
          v15[6] = v43;
        }
        v18 = 0LL;
        v53 = v16 + 40 + v17;
        v19 = *((_QWORD *)this + 14);
        v20 = *(struct UCE_RDP_HEADER **)(v19 + 144);
        v21 = *(_QWORD **)(v19 + 136);
        v39 = v20;
        v22 = v21[6];
        v6 = (struct UCE_RDP_HEADER *)((char *)v20 + v21[7]);
        v40 = v6;
        if ( v22 )
        {
LABEL_14:
          v18 = (struct UCE_RDP_HEADER *)((char *)v20 + v22);
        }
        else
        {
          v38 = v21[2];
          v50 = 0LL;
          v49 = 0LL;
          v44 = 0LL;
          if ( (int)MmMapViewOfSection(v21[3], *(_QWORD *)(v38 + 16), &v44, 0LL, 4096LL, &v50, &v49, 2, 0x400000, 2) >= 0 )
          {
            v22 = v44;
            v20 = v39;
            v21[6] = v44;
            goto LABEL_14;
          }
        }
        v23 = *((_QWORD *)this + 14);
        v39 = v18;
        v24 = *(_DWORD *)(v23 + 20);
        *((_QWORD *)v6 + 1) = 0LL;
        *(_DWORD *)v6 = v24;
        *((_DWORD *)v6 + 1) = 40;
        v14 = *((_QWORD *)this + 14);
        if ( *(_DWORD *)(v14 + 20) == 7 )
        {
          *(_QWORD *)(v14 + 72) = *((_QWORD *)this + 21);
          *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
          *((_QWORD *)v6 + 3) = v53;
          *((_DWORD *)v6 + 8) = v54;
          EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14), v14, v8);
          v9 = v57;
        }
        else
        {
          v9 = v57;
          if ( *(_DWORD *)(v14 + 20) == 8 )
          {
            v25 = v51;
            *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(v14 + 8) + 28LL);
            *((_QWORD *)v6 + 3) = *(_QWORD *)(v52 + v25 + 40);
          }
        }
LABEL_18:
        v26 = UserModeViewAtOffset;
        if ( UserModeViewAtOffset < 0 )
          return (unsigned int)UserModeViewAtOffset;
        if ( v13 )
        {
LABEL_20:
          v27 = **((_QWORD **)this + 14);
          if ( !a2 && v27 )
          {
            if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v27 + 8) + 8LL))(
                   *(_QWORD *)(v27 + 8),
                   v14,
                   v8) != 3 )
              v9 = 1;
            v57 = v9;
          }
          v28 = *((_QWORD *)this + 14);
          *(_BYTE *)(v28 + 32) |= 4u;
          v29 = *(_QWORD *)(v28 + 8);
          if ( *(_DWORD *)(v28 + 20) != 6 )
          {
            v30 = *(struct _ERESOURCE **)(v29 + 368);
            if ( v30 )
            {
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite(v30, 1u);
              v33 = (*(_DWORD *)(v29 + 224))-- == 1;
              if ( v33 )
                KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v29 + 360) + 8LL), 1, 0);
              ExReleaseResourceLite(*(PERESOURCE *)(v29 + 368));
              KeLeaveCriticalRegion();
            }
          }
          v31 = (_QWORD *)*((_QWORD *)this + 16);
          v32 = (_QWORD *)*((_QWORD *)this + 14);
          if ( v31 )
          {
            *v31 = v32;
            v32 = (_QWORD *)*((_QWORD *)this + 14);
          }
          else
          {
            *((_QWORD *)this + 15) = v32;
          }
          *((_QWORD *)this + 16) = v32;
          UserModeViewAtOffset = v26;
          *v32 = 0LL;
          *((_QWORD *)this + 14) = v27;
        }
        v4 = v42;
        goto LABEL_27;
      }
      UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                               *(DirectComposition::CApplicationChannel **)(v10 + 8),
                               &v40,
                               &v39);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      v6 = v40;
      v26 = UserModeViewAtOffset;
      *((_QWORD *)v40 + 1) = 0LL;
      *((_DWORD *)v6 + 1) = 40;
      *(_DWORD *)v6 = 6;
      *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      goto LABEL_20;
    }
    v45 = 0LL;
    v46 = 0LL;
    v12 = 1;
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      (DirectComposition::CConnection *)((char *)this + 192),
      v14,
      &v45,
      &v46);
    v6 = (struct UCE_RDP_HEADER *)(v46 + *((_QWORD *)v45 + 7));
    v40 = v6;
    UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v45, v46, (void **)&v39);
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_DWORD *)v6 + 1) = 40;
    *(_DWORD *)v6 = 5;
    *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
    *((_DWORD *)v6 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 1720LL);
    *((_QWORD *)v6 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 1712LL);
    *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
    *((_DWORD *)this + 37) = 2;
LABEL_27:
    v9 = v57;
    v33 = v12 == 0;
    v5 = v41;
    v8 = 1LL;
    if ( !v33 )
    {
      if ( v4 )
      {
        *((_QWORD *)v4 + 1) = v39;
      }
      else
      {
        v5 = v39;
        v41 = v39;
      }
      v9 = v57;
      v4 = v6;
      v42 = v6;
    }
  }
  *a3 = v5;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)UserModeViewAtOffset;
}
