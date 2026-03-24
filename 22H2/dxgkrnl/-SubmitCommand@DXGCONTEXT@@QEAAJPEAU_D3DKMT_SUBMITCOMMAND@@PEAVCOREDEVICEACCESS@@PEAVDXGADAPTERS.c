/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00FC710
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00FB130 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DF24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039FEC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C0048520 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C00DC7D0 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C010EC30 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0159A00 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C015CBF8 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        struct _SLIST_ENTRY *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct _VIDMM_MULTI_ALLOC **a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  struct DXGCONTEXT **v10; // r12
  __int64 Flags; // rdx
  int v12; // esi
  __int64 v13; // rcx
  __int64 BroadcastContextCount; // r13
  __int64 v15; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PSLIST_ENTRY v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  struct _SLIST_ENTRY *v25; // rcx
  int v26; // edx
  unsigned int v28; // edx
  struct _SLIST_ENTRY *v29; // rcx
  int v30; // edx
  bool v31; // al
  __int64 v32; // r8
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  __int64 v36; // rax
  int v37; // ecx
  struct _SLIST_ENTRY *v38; // rcx
  struct _SLIST_ENTRY *v39; // rdx
  __int64 v40; // rax
  struct _SLIST_ENTRY *v41; // rbx
  PSLIST_ENTRY v42; // rdx
  int v43; // ecx
  size_t PrivateDriverDataSize; // r9
  char *pPrivateDriverData; // rdx
  struct _SLIST_ENTRY *v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  UINT v52; // ebx
  struct _SLIST_ENTRY *v53; // rsi
  __int64 j; // r8
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rsi
  struct _SLIST_ENTRY *v61; // rax
  struct DXGCONTEXT *v62; // rcx
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // r8
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rax
  struct _SLIST_ENTRY *v70; // rsi
  struct _SLIST_ENTRY *v71; // rbx
  struct _SLIST_ENTRY *v72; // rcx
  __int64 i; // rbx
  __int64 v74; // rbx
  __int64 v75; // rax
  struct _SLIST_ENTRY *Next; // [rsp+A0h] [rbp-718h]
  UINT v77; // [rsp+A8h] [rbp-710h]
  struct _SLIST_ENTRY *v78; // [rsp+B0h] [rbp-708h]
  PSLIST_ENTRY ListEntry; // [rsp+C0h] [rbp-6F8h]
  struct _SLIST_ENTRY *v80[4]; // [rsp+C8h] [rbp-6F0h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v81; // [rsp+E8h] [rbp-6D0h]
  struct COREDEVICEACCESS *v82; // [rsp+F0h] [rbp-6C8h]
  _DXGKARG_VALIDATESUBMITCOMMAND v83; // [rsp+100h] [rbp-6B8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v84; // [rsp+330h] [rbp-488h] BYREF

  v81 = a4;
  v82 = a3;
  v80[2] = this;
  v10 = a5;
  Flags = (unsigned int)a2->Flags;
  v12 = (Flags & 1 | 0x1000) << 15;
  LODWORD(v78) = v12;
  v13 = (unsigned __int8)(32 * Flags) & 0x80;
  HIDWORD(v78) = (32 * (_BYTE)Flags) & 0x80;
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  v77 = a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > LODWORD(this[13].Next) )
  {
    v15 = WdLogNewEntry5_WdWarning(v13, Flags, a3);
    *(_QWORD *)(v15 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v15 + 32) = LODWORD(this[13].Next);
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v12 |= 0xA0u;
    LODWORD(v78) = v12;
    v17 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1u, a3);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = v18;
      WdLogEvent5_WdEvent(v19);
      return (unsigned int)v18;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(v13, Flags, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventRender, (__int64)a3, 0LL);
    }
  }
  Next = this[1].Next[1].Next;
  v80[3] = Next;
  v80[1] = Next;
  ++HIDWORD(Next[79].Next);
  v22 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&Next[78]);
  if ( !v22 )
  {
    ++*((_DWORD *)&Next[79].Next + 2);
    v22 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))Next[81].Next)(
                          HIDWORD(Next[80].Next),
                          *((unsigned int *)&Next[80].Next + 3),
                          *((unsigned int *)&Next[80].Next + 2),
                          &Next[78]);
  }
  v80[0] = v22;
  if ( !v22 )
  {
    v36 = WdLogNewEntry5_WdLowResource(v21, v20, v23, v24);
    *(_QWORD *)(v36 + 24) = 2159LL;
    WdLogEvent5_WdLowResource(v36);
    goto LABEL_36;
  }
  v25 = Next[1].Next;
  if ( *((int *)&v25[145].Next + 2) < 0x2000 )
    v26 = 1;
  else
    v26 = *((_DWORD *)&v25[17].Next + 2);
  if ( *((int *)&v25[145].Next + 2) >= 0x2000 || BYTE4(v25[164].Next) )
    v28 = *((_DWORD *)&v25[158].Next + 2) * ((v26 << 6) + ((8 * v26 + 199) & 0xFFFFFFF8)) + 8 * v26 + 592;
  else
    v28 = 1288;
  memset(v22, 0, v28);
  v29 = Next[1].Next;
  if ( *((int *)&v29[145].Next + 2) < 0x2000 )
    v30 = 1;
  else
    v30 = *((_DWORD *)&v29[17].Next + 2);
  v31 = *((int *)&v29[145].Next + 2) >= 0x2000 || BYTE4(v29[164].Next);
  v32 = *((unsigned int *)&v29[158].Next + 2);
  *((_BYTE *)&v22[21].Next + 12) = v31;
  if ( v31 )
  {
    HIDWORD(v22[36].Next) = v32;
    *((_DWORD *)&v22[36].Next + 2) = v30;
    v33 = 8 * v30;
    v34 = v30 << 6;
    *((_DWORD *)&v22[36].Next + 3) = v32 * (v34 + ((v33 + 199) & 0xFFFFFFF8)) + 16;
    v35 = v32 * (v34 + ((v33 + 199) & 0xFFFFFFF8)) + 592;
    *((_DWORD *)&v22[33].Next + 2) = v35;
    *((_DWORD *)&v22[33].Next + 3) = v33 + v35;
  }
  v22->Next = v78;
  if ( (v12 & 0x20) != 0 )
  {
    v37 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v37 = 3072;
    LODWORD(v22->Next) = (__int64)v22->Next & 0xFFFFFBFF | v37;
    if ( (struct _SLIST_ENTRY *)*((_QWORD *)&this[1].Next[115].Next + 1) != this[1].Next[1].Next[1].Next )
      HIDWORD(v22[7].Next) = 0;
  }
  if ( LODWORD(this[13].Next) )
  {
    v38 = this[1].Next[1].Next;
    v39 = v38[1].Next;
    if ( !a2->PrivateDriverDataSize
      && LODWORD(v39[117].Next) < 0x8000
      && (HIDWORD(v39[20].Next) == 4318 || (*((_DWORD *)&v39[21].Next + 3) & 0x10) != 0) )
    {
      v40 = WdLogNewEntry5_WdWarning(v38, v39, v32);
      *(_QWORD *)(v40 + 24) = 2193LL;
      WdLogEvent5_WdWarning(v40);
      CVidSchSubmitData::~CVidSchSubmitData(v80);
      return 3221225485LL;
    }
    v41 = this[32].Next;
    ++HIDWORD(v41[1].Next);
    v42 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v41);
    if ( !v42 )
    {
      ++*((_DWORD *)&v41[1].Next + 2);
      v42 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))v41[3].Next)(
                            HIDWORD(v41[2].Next),
                            *((unsigned int *)&v41[2].Next + 3),
                            *((unsigned int *)&v41[2].Next + 2),
                            v41);
    }
    if ( v42 )
    {
      v22[1].Next = v42;
      v43 = (int)this[13].Next;
      v42->Next = this[32].Next;
      *((_DWORD *)&v42->Next + 2) = v43;
      *((_DWORD *)&v42->Next + 3) = 1;
      if ( a8 )
      {
        PrivateDriverDataSize = a2->PrivateDriverDataSize;
        pPrivateDriverData = (char *)a2->pPrivateDriverData;
        v46 = v22[1].Next + 1;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v46, pPrivateDriverData, PrivateDriverDataSize);
      }
      else
      {
        memmove(&v22[1].Next[1], a2->pPrivateDriverData, a2->PrivateDriverDataSize);
      }
      goto LABEL_57;
    }
LABEL_36:
    CVidSchSubmitData::~CVidSchSubmitData(v80);
    return 3221225495LL;
  }
LABEL_57:
  *((_QWORD *)&v22[2].Next + 1) = a2->Commands;
  HIDWORD(v22[3].Next) = a2->CommandLength;
  *((_DWORD *)&v22[4].Next + 3) = this[13].Next;
  LODWORD(v22[5].Next) = a2->PrivateDriverDataSize;
  ListEntry = (PSLIST_ENTRY)BroadcastContextCount;
  if ( (*(_DWORD *)&a2->Flags & 4) != 0 )
  {
    LODWORD(v10) = CheckNoKmdAccessPrivateData(a2->PrivateDriverDataSize, &v22[1].Next[1], 0xFF000002);
    if ( (int)v10 >= 0 )
      goto LABEL_59;
  }
  else
  {
    v52 = (UINT)this[13].Next;
    if ( !v52 || (v53 = this[1].Next[1].Next, !v53[1].Next[81].Next) )
    {
LABEL_60:
      v47 = 0LL;
      LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *, _QWORD, D3DKMT_HANDLE *, UINT, PSLIST_ENTRY, _QWORD, struct DXGCONTEXT **))(*((_QWORD *)&this[1].Next[1].Next[40].Next->Next + 1) + 864LL))(
                       *((_QWORD *)&this[1].Next[1].Next[40].Next + 1),
                       this[1].Next,
                       a2->NumPrimaries,
                       a2->WrittenPrimaries,
                       v77,
                       v22 + 12,
                       0LL,
                       v10);
      if ( (int)v10 >= 0 )
      {
        v22[21].Next = (struct _SLIST_ENTRY *)a6;
        *((_DWORD *)&v22[21].Next + 2) = a7;
        LODWORD(v60) = 0;
        if ( BroadcastContextCount <= 0 )
        {
LABEL_76:
          if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
          {
            memset(&v84, 0, sizeof(v84));
            v84.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
            v84.Token.Flip.FenceValue = a2->PresentHistoryToken;
            v66 = SubmitPresentHistoryToken(&v84, v82, v81, 0LL, 0, 0LL, 0LL, 0LL, (struct DXGCONTEXT *)this, 0LL, 0LL);
            v10 = (struct DXGCONTEXT **)v66;
            if ( (int)(v66 + 0x80000000) >= 0 && v66 != -1073741130 )
            {
              v69 = WdLogNewEntry5_WdWarning(0x80000000LL, v67, v68);
              *(_QWORD *)(v69 + 24) = this;
              *(_QWORD *)(v69 + 32) = v10;
              WdLogEvent5_WdWarning(v69);
              LODWORD(v10) = 0;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v61 = v22[1].Next;
            if ( v61 )
              _InterlockedIncrement((volatile signed __int32 *)&v61->Next + 3);
            v62 = a5[v47];
            if ( *((struct _KTHREAD **)v62 + 59) != KeGetCurrentThread() )
            {
              v63 = WdLogNewEntry5_WdAssertion(v62, v48);
              *(_QWORD *)(v63 + 24) = 2305LL;
              WdLogEvent5_WdAssertion(v63);
              v62 = a5[v47];
            }
            v64 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[38].Next
                                                                                + 1)
                                                                              + 8LL)
                                                                  + 424LL))(
                    *((_QWORD *)v62 + 34),
                    v22);
            v10 = (struct DXGCONTEXT **)v64;
            if ( v64 < 0 )
              break;
            LODWORD(v22->Next) &= ~0x800u;
            LODWORD(v60) = v60 + 1;
            if ( ++v47 >= BroadcastContextCount )
              goto LABEL_76;
          }
          v72 = v22[1].Next;
          if ( v72 )
            CRefCountedBuffer::RefCountedBufferRelease(v72);
          v60 = (int)v60;
          for ( i = v60;
                i >= 0;
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[38].Next + 1)
                                                                   + 8LL)
                                                       + 440LL))(
                  *((_QWORD *)a5[i--] + 34),
                  0LL) )
          {
            ;
          }
          if ( (int)v60 < BroadcastContextCount )
          {
            do
            {
              v74 = 0LL;
              if ( a2->NumPrimaries )
              {
                do
                {
                  v65 = *((_QWORD *)&v22[12].Next + v74 + 1);
                  if ( v65 )
                    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*((_QWORD *)&this[1].Next[1].Next[40].Next->Next
                                                                              + 1)
                                                                            + 432LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5[v60] + 2) + 16LL) + 648LL),
                      0LL,
                      v65,
                      0LL);
                  v74 = (unsigned int)(v74 + 1);
                }
                while ( (unsigned int)v74 < a2->NumPrimaries );
                BroadcastContextCount = (__int64)ListEntry;
              }
              ++v60;
            }
            while ( v60 < BroadcastContextCount );
          }
          v75 = WdLogNewEntry5_WdWarning(v72, v48, v65);
          *(_QWORD *)(v75 + 24) = this;
          *(_QWORD *)(v75 + 32) = v10;
          WdLogEvent5_WdWarning(v75);
        }
      }
      else
      {
        v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
        *(_QWORD *)(v51 + 24) = 2281LL;
        WdLogEvent5_WdWarning(v51);
      }
      goto LABEL_80;
    }
    v83.Flags.Value = 0;
    memset(&v83.ContextCount + 1, 0, 0x21CuLL);
    v83.Commands = a2->Commands;
    v83.CommandLength = a2->CommandLength;
    v83.ContextCount = v77;
    if ( BroadcastContextCount > 0 )
    {
      for ( j = 0LL; j < BroadcastContextCount; ++j )
        v83.Context[j] = (HANDLE)*((_QWORD *)a5[j] + 23);
    }
    v83.pPrivateDriverData = &v22[1].Next[1];
    v83.PrivateDriverDataSize = v52;
    v83.UmdPrivateDataSize = a2->PrivateDriverDataSize;
    v55 = ADAPTER_RENDER::DdiValidateSubmitCommand((ADAPTER_RENDER *)v53, &v83);
    v10 = (struct DXGCONTEXT **)v55;
    if ( v55 >= 0 )
    {
LABEL_59:
      v10 = a5;
      goto LABEL_60;
    }
    v59 = WdLogNewEntry5_WdWarning(v57, v56, v58);
    *(_QWORD *)(v59 + 24) = v10;
    *(_QWORD *)(v59 + 32) = 2264LL;
    WdLogEvent5_WdWarning(v59);
  }
LABEL_80:
  v70 = v22[1].Next;
  if ( v70 && _InterlockedExchangeAdd((volatile signed __int32 *)&v70->Next + 3, 0xFFFFFFFF) == 1 )
  {
    v71 = v70->Next;
    if ( v70->Next )
    {
      ++*((_DWORD *)&v71[1].Next + 3);
      if ( ExQueryDepthSList((PSLIST_HEADER)v71) < LOWORD(v71[1].Next) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v71, v70);
      }
      else
      {
        ++LODWORD(v71[2].Next);
        (*((void (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))&v71[3].Next + 1))(v70, v71);
      }
    }
    else
    {
      ExFreePoolWithTag(v70, 0);
    }
  }
  ++*((_DWORD *)&Next[79].Next + 3);
  if ( ExQueryDepthSList((PSLIST_HEADER)&Next[78]) < LOWORD(Next[79].Next) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[78], v22);
  }
  else
  {
    ++LODWORD(Next[80].Next);
    (*((void (__fastcall **)(PSLIST_ENTRY, struct _SLIST_ENTRY *))&Next[81].Next + 1))(v22, Next + 78);
  }
  return (unsigned int)v10;
}
