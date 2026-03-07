__int64 __fastcall DXGCONTEXT::SubmitCommand(
        PLOOKASIDE_LIST_EX *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct _VIDMM_MULTI_ALLOC **a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 Flags; // rdx
  int v11; // r15d
  __int64 BroadcastContextCount; // r13
  __int64 v13; // rcx
  __int64 v14; // r14
  struct _LOOKASIDE_LIST_EX *v15; // r12
  PVOID *v16; // rbx
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  bool v23; // al
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // eax
  _DWORD *v27; // rdx
  _DWORD *v28; // rax
  int v29; // ecx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  void *v32; // rcx
  UINT v33; // r14d
  ADAPTER_RENDER *v34; // r15
  __int64 v35; // r12
  __int64 v36; // r14
  PVOID *v37; // rax
  volatile signed __int32 *v38; // rax
  int v39; // eax
  bool v40; // sf
  PVOID v41; // rax
  __int64 i; // rcx
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ebx
  int v47; // ecx
  __int64 v48; // r14
  __int64 v49; // r12
  __int64 v50; // r8
  int v51; // eax
  void *v52; // [rsp+A0h] [rbp-718h]
  PVOID *v53; // [rsp+A0h] [rbp-718h]
  PLOOKASIDE_LIST_EX Lookaside; // [rsp+A8h] [rbp-710h]
  UINT v55; // [rsp+B0h] [rbp-708h]
  __int64 v56; // [rsp+C0h] [rbp-6F8h]
  PVOID Entry[2]; // [rsp+C8h] [rbp-6F0h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v58; // [rsp+D8h] [rbp-6E0h]
  struct COREDEVICEACCESS *v59; // [rsp+E0h] [rbp-6D8h]
  size_t v60; // [rsp+E8h] [rbp-6D0h]
  char *v61; // [rsp+F0h] [rbp-6C8h]
  void *v62; // [rsp+F8h] [rbp-6C0h]
  _DXGKARG_VALIDATESUBMITCOMMAND v63; // [rsp+100h] [rbp-6B8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v64; // [rsp+330h] [rbp-488h] BYREF

  v58 = a4;
  v59 = a3;
  Flags = (unsigned int)a2->Flags;
  v11 = (Flags & 1 | 0x1000) << 15;
  LODWORD(v52) = v11;
  HIDWORD(v52) = (32 * (_BYTE)Flags) & 0x80;
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  v55 = a2->BroadcastContextCount;
  v13 = *((unsigned int *)this + 52);
  if ( a2->PrivateDriverDataSize > (unsigned int)v13 )
  {
    WdLogSingleEntry2(3LL, a2->PrivateDriverDataSize, v13);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v52) = v11;
    v45 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1u, a3);
    v46 = v45;
    if ( v45 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v45);
      return v46;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(v13, Flags, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventRender, (__int64)a3, 0LL);
    }
  }
  v14 = *(_QWORD *)&this[2]->L.Depth;
  Entry[1] = (PVOID)v14;
  v15 = (struct _LOOKASIDE_LIST_EX *)(v14 + 1424);
  Lookaside = (PLOOKASIDE_LIST_EX)(v14 + 1424);
  v16 = (PVOID *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v14 + 1424));
  Entry[0] = v16;
  if ( v16 )
  {
    v17 = *(_QWORD *)(v14 + 16);
    v18 = *(int *)(v17 + 2552) < 0x2000 ? 1 : *(_DWORD *)(v17 + 288);
    v19 = *(int *)(v17 + 2552) >= 0x2000 || *(_BYTE *)(v17 + 2852)
        ? 8 * v18 + *(_DWORD *)(v17 + 2760) * ((v18 << 6) + ((8 * v18 + 231) & 0xFFFFFFF8)) + 616
        : 1304;
    memset(v16, 0, v19);
    v20 = *(_QWORD *)(v14 + 16);
    v21 = *(int *)(v20 + 2552) < 0x2000 ? 1 : *(_DWORD *)(v20 + 288);
    v22 = *(_DWORD *)(v20 + 2760);
    v23 = *(int *)(v20 + 2552) >= 0x2000 || *(_BYTE *)(v20 + 2852);
    *((_BYTE *)v16 + 356) = v23;
    if ( v23 )
    {
      *((_DWORD *)v16 + 151) = v22;
      *((_DWORD *)v16 + 152) = v21;
      v24 = 8 * v21;
      v25 = v21 << 6;
      *((_DWORD *)v16 + 153) = v22 * (v25 + ((v24 + 231) & 0xFFFFFFF8)) + 16;
      v26 = v22 * (v25 + ((v24 + 231) & 0xFFFFFFF8)) + 616;
      *((_DWORD *)v16 + 138) = v26;
      *((_DWORD *)v16 + 139) = v24 + v26;
    }
  }
  if ( !v16 )
  {
    WdLogSingleEntry1(6LL, 2160LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      2160LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_95;
  }
  *v16 = v52;
  if ( (v11 & 0x20) != 0 )
  {
    v47 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v47 = 3072;
    *(_DWORD *)v16 = *(_DWORD *)v16 & 0xFFFFFBFF | v47;
    if ( this[2][19].L.FreeEx != *(PFREE_FUNCTION_EX *)(*(_QWORD *)&this[2]->L.Depth + 16LL) )
      *((_DWORD *)v16 + 29) = 0;
  }
  if ( *((_DWORD *)this + 52) )
  {
    v27 = *(_DWORD **)(*(_QWORD *)&this[2]->L.Depth + 16LL);
    if ( !a2->PrivateDriverDataSize && v27[524] < 0x8000u && (v27[103] == 4318 || (v27[109] & 0x10) != 0) )
    {
      WdLogSingleEntry1(3LL, 2194LL);
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)Entry);
      return 3221225485LL;
    }
    v28 = ExAllocateFromLookasideListEx(this[62]);
    if ( v28 )
    {
      v16[2] = v28;
      v29 = *((_DWORD *)this + 52);
      *(_QWORD *)v28 = this[62];
      v28[2] = v29;
      v28[3] = 1;
      if ( a8 )
      {
        PrivateDriverDataSize = a2->PrivateDriverDataSize;
        v60 = PrivateDriverDataSize;
        pPrivateDriverData = (char *)a2->pPrivateDriverData;
        v61 = pPrivateDriverData;
        v32 = (char *)v16[2] + 16;
        v62 = v32;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v32, pPrivateDriverData, PrivateDriverDataSize);
      }
      else
      {
        memmove((char *)v16[2] + 16, a2->pPrivateDriverData, a2->PrivateDriverDataSize);
      }
      goto LABEL_28;
    }
LABEL_95:
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)Entry);
    return 3221225495LL;
  }
LABEL_28:
  v16[5] = (PVOID)a2->Commands;
  *((_DWORD *)v16 + 13) = a2->CommandLength;
  *((_DWORD *)v16 + 19) = *((_DWORD *)this + 52);
  *((_DWORD *)v16 + 20) = a2->PrivateDriverDataSize;
  v56 = BroadcastContextCount;
  if ( (*(_DWORD *)&a2->Flags & 4) != 0 )
  {
    LODWORD(v34) = CheckNoKmdAccessPrivateData(a2->PrivateDriverDataSize, (char *)v16[2] + 16, 0xFF000002);
    if ( (int)v34 < 0 )
      goto LABEL_42;
LABEL_31:
    LODWORD(v34) = (*(__int64 (__fastcall **)(_QWORD, PLOOKASIDE_LIST_EX, _QWORD, D3DKMT_HANDLE *, UINT, PVOID *, _QWORD, struct DXGCONTEXT **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2]->L.Depth + 760LL) + 8LL) + 856LL))(
                     *(_QWORD *)(*(_QWORD *)&this[2]->L.Depth + 768LL),
                     this[2],
                     a2->NumPrimaries,
                     a2->WrittenPrimaries,
                     v55,
                     v16 + 25,
                     0LL,
                     a5);
    if ( (int)v34 < 0 )
    {
      WdLogSingleEntry1(3LL, 2282LL);
    }
    else
    {
      v16[43] = a6;
      *((_DWORD *)v16 + 88) = a7;
      LODWORD(v35) = 0;
      if ( BroadcastContextCount <= 0 )
      {
LABEL_40:
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          memset(&v64, 0, sizeof(v64));
          v64.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
          v64.Token.Flip.FenceValue = a2->PresentHistoryToken;
          v51 = SubmitPresentHistoryToken(&v64, v59, v58, 0LL, 0, 0LL, 0LL, 0LL, (struct DXGCONTEXT *)this, 0LL, 0LL);
          LODWORD(v34) = v51;
          if ( (int)(v51 + 0x80000000) >= 0 && v51 != -1073741130 )
          {
            WdLogSingleEntry2(3LL, this, v51);
            LODWORD(v34) = 0;
          }
        }
      }
      else
      {
        v36 = 0LL;
        v37 = v16 + 2;
        v53 = v16 + 2;
        while ( 1 )
        {
          v38 = (volatile signed __int32 *)*v37;
          if ( v38 )
            _InterlockedIncrement(v38 + 3);
          if ( *((struct _KTHREAD **)a5[v36] + 57) != KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 2306LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
              2306LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v16 = (PVOID *)Entry[0];
          v39 = (*(__int64 (__fastcall **)(_QWORD, PVOID))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2]->L.Depth + 736LL)
                                                                     + 8LL)
                                                         + 424LL))(
                  *((_QWORD *)a5[v36] + 32),
                  Entry[0]);
          v34 = (ADAPTER_RENDER *)v39;
          v40 = v39 < 0;
          v37 = v53;
          if ( v40 )
            break;
          *(_DWORD *)Entry[0] &= ~0x800u;
          LODWORD(v35) = v35 + 1;
          if ( ++v36 >= BroadcastContextCount )
            goto LABEL_40;
        }
        if ( *v53 )
          CRefCountedBuffer::RefCountedBufferRelease(*v53);
        v35 = (int)v35;
        v48 = v35;
        while ( v35 >= 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2]->L.Depth + 736LL) + 8LL)
                                                 + 440LL))(
            *((_QWORD *)a5[v35--] + 32),
            0LL);
        for ( ; v48 < BroadcastContextCount; ++v48 )
        {
          v49 = 0LL;
          if ( a2->NumPrimaries )
          {
            do
            {
              v50 = *((_QWORD *)Entry[0] + v49 + 26);
              if ( v50 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2]->L.Depth
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 424LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5[v48] + 2) + 16LL) + 768LL),
                  0LL,
                  v50,
                  0LL);
              v49 = (unsigned int)(v49 + 1);
            }
            while ( (unsigned int)v49 < a2->NumPrimaries );
            BroadcastContextCount = v56;
          }
        }
        WdLogSingleEntry2(3LL, this, v34);
      }
      v15 = Lookaside;
    }
    goto LABEL_42;
  }
  v33 = *((_DWORD *)this + 52);
  if ( !v33 )
    goto LABEL_31;
  v34 = *(ADAPTER_RENDER **)&this[2]->L.Depth;
  if ( !*(_QWORD *)(*((_QWORD *)v34 + 2) + 1352LL) )
    goto LABEL_31;
  v63.Flags.Value = 0;
  memset(&v63.ContextCount + 1, 0, 0x21CuLL);
  v63.Commands = a2->Commands;
  v63.CommandLength = a2->CommandLength;
  v63.ContextCount = v55;
  if ( BroadcastContextCount > 0 )
  {
    for ( i = 0LL; i < BroadcastContextCount; ++i )
      v63.Context[i] = (HANDLE)*((_QWORD *)a5[i] + 23);
    v15 = Lookaside;
  }
  v63.pPrivateDriverData = (char *)v16[2] + 16;
  v63.PrivateDriverDataSize = v33;
  v63.UmdPrivateDataSize = a2->PrivateDriverDataSize;
  v44 = ADAPTER_RENDER::DdiValidateSubmitCommand(v34, &v63);
  LODWORD(v34) = v44;
  if ( v44 >= 0 )
    goto LABEL_31;
  WdLogSingleEntry2(3LL, v44, 2265LL);
LABEL_42:
  v41 = v16[2];
  if ( v41 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v41 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( *(_QWORD *)v41 )
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v41, v41);
      else
        ExFreePoolWithTag(v41, 0);
    }
    v16 = (PVOID *)Entry[0];
  }
  ExFreeToLookasideListEx(v15, v16);
  return (unsigned int)v34;
}
