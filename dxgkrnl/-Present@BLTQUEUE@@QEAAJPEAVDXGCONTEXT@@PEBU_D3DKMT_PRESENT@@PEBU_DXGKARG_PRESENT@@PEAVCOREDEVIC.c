__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // sf
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 Current; // r14
  int v15; // ecx
  char *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const wchar_t *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _LIST_ENTRY *v23; // rax
  struct BLTENTRY *v24; // r13
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGADAPTER *Adapter; // rax
  int v29; // eax
  const struct _DXGKARG_PRESENT *v30; // r9
  struct DXGDEVICE *v31; // rdx
  __int64 v32; // rcx
  bool v33; // zf
  RECT *p_SrcRect; // rax
  struct tagRECT *v35; // rbx
  __int64 v36; // rbx
  const wchar_t *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rcx
  struct DXGPROCESS *v40; // rax
  _DWORD *v41; // rbx
  D3DKMT_HANDLE hDestination; // edx
  struct _DXGKARG_PRESENT *v43; // rcx
  __int64 SubRectCnt; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  struct COREDEVICEACCESS *Timeout; // [rsp+20h] [rbp-F8h]
  void *v49; // [rsp+70h] [rbp-A8h] BYREF
  int v50; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+80h] [rbp-98h]
  char v52; // [rsp+88h] [rbp-90h]
  char *v53; // [rsp+90h] [rbp-88h]
  int v54; // [rsp+98h] [rbp-80h]
  struct DXGPROCESS *v55; // [rsp+A0h] [rbp-78h] BYREF
  struct _LIST_ENTRY *v56; // [rsp+A8h] [rbp-70h]
  _QWORD v57[3]; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v58[80]; // [rsp+C8h] [rbp-50h] BYREF
  BLTQUEUE *v59; // [rsp+120h] [rbp+8h] BYREF
  struct DXGCONTEXT *v60; // [rsp+128h] [rbp+10h]
  struct _D3DKMT_PRESENT *v61; // [rsp+130h] [rbp+18h]
  struct _DXGKARG_PRESENT *v62; // [rsp+138h] [rbp+20h]

  v62 = a4;
  v61 = a3;
  v60 = a2;
  v59 = this;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v52 = 1;
    v50 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 12000);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 12000);
  if ( (*((_DWORD *)this + 238) & 1) == 0 )
    goto LABEL_6;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a3->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v50);
    LODWORD(Current) = -1073741811;
    return (unsigned int)Current;
  }
  v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 436LL);
  v16 = (char *)a2 + 442;
  v53 = (char *)a2 + 442;
  if ( (v15 & 0x10) != 0 )
  {
LABEL_17:
    if ( !*v16 )
      goto LABEL_29;
    goto LABEL_18;
  }
  if ( !*v16 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 109) & 0x100) == 0 )
    {
      Current = -1073741811LL;
      WdLogSingleEntry2(2LL, -1073741811LL, this);
      v20 = L"0x%I64x unsupported adapter is used for display only Present 0x%I64x.";
LABEL_24:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, Current, (__int64)this, 0LL, 0LL, 0LL);
LABEL_25:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v50);
      return (unsigned int)Current;
    }
    v53 = v16;
    goto LABEL_17;
  }
LABEL_18:
  if ( (*(_BYTE *)&Value & 4) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v50);
    return 3221225659LL;
  }
LABEL_29:
  if ( *((int *)this + 239) < 0 )
  {
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( !v52 )
      return 3221226166LL;
    v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_41:
    if ( v10 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v50);
    return 3221226166LL;
  }
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    *((_BYTE *)this + 575) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      WdLogSingleEntry2(2LL, -1073741130LL, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x for FlipRestart from BLTQUEUE::Present 0x%I64x.",
        -1073741130LL,
        (__int64)this,
        0LL,
        0LL,
        0LL);
      goto LABEL_6;
    }
  }
  LODWORD(v49) = 0;
  v23 = (struct _LIST_ENTRY *)((char *)this + 232);
  v56 = (struct _LIST_ENTRY *)((char *)this + 232);
  do
  {
    v24 = BLTQUEUE::RemoveQueueHead(this, v23);
    v57[0] = v24;
    if ( v24 )
      break;
    if ( (a3->Flags.Value & 0x10) != 0 )
    {
      WdLogSingleEntry2(4LL, -1071775486LL, this);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v50);
      return 3223191810LL;
    }
    *((_BYTE *)this + 574) = 1;
    v25 = BLTQUEUE::IssueCommand(this);
    Current = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry2(2LL, v25, this);
      v20 = L"0x%I64x for WaitEntry from BLTQUEUE::Present 0x%I64x.";
      goto LABEL_24;
    }
    LODWORD(v49) = (_DWORD)v49 + 1;
    v23 = v56;
  }
  while ( (unsigned int)v49 < 3 );
  if ( !v24 )
  {
    WdLogSingleEntry2(1LL, -1073741130LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"0x%I64x No BLT entry available for BLTQUEUE::Present 0x%I64x.",
      -1073741130LL,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( !v52 )
      return 3221226166LL;
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_41;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v29 = BLTENTRY::SetupPresentParameters(v24, this, a2, a3, v62, a5, BYTE1(*((_DWORD *)Adapter + 109)) & 1);
  Current = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry2(2LL, v29, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Error 0x%I64x to set up Present parameters 0x%I64x.",
      Current,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    goto LABEL_86;
  }
  if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 109) & 0x100) != 0 )
  {
    KeWaitForSingleObject((char *)this + 2720, Executive, 0, 0, 0LL);
    if ( (v61->Flags.Value & 8) != 0 )
      LODWORD(Current) = 0;
    else
      LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(this, a2, v61, v30, Timeout, v24);
    KeReleaseMutex((PRKMUTEX)((char *)this + 2720), 0);
    goto LABEL_86;
  }
  if ( !*v53 )
  {
    v49 = 0LL;
    v53 = (char *)*((_QWORD *)a2 + 7);
    v41 = v53 + 8;
    v57[2] = v53 + 8;
    if ( *(_DWORD *)v53 != -791674878
      || ((v61->Flags.Value & 4) == 0 ? (hDestination = v61->hDestination) : (hDestination = v61->hSource),
          *v41 != hDestination) )
    {
      WdLogSingleEntry3(2LL, Current, a2, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid Present request 0x%I64x from 0x%I64x for 0x%I64x.",
        Current,
        (__int64)a2,
        (__int64)this,
        0LL,
        0LL);
      LODWORD(Current) = -1073741811;
      v54 = -1073741811;
      goto LABEL_86;
    }
    if ( (v61->Flags.Value & 4) != 0 )
    {
      memset(v41, 0, 0x48uLL);
      v41[2] |= 4u;
    }
    else
    {
      v43 = v62;
      *((_DWORD *)v53 + 4) = v62->Flags.0;
      v41[3] = v43->Color;
      *((_OWORD *)v41 + 2) = v43->DstRect;
      *((_OWORD *)v41 + 1) = v43->SrcRect;
      SubRectCnt = v43->SubRectCnt;
      if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)*((unsigned int *)a2 + 12) - 80) >> 4) )
      {
        v55 = (struct DXGPROCESS *)(16 * SubRectCnt);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        if ( (*(int (__fastcall **)(__int64, void **, _QWORD, struct DXGPROCESS **, int, int))VirtualMemoryInterface)(
               -1LL,
               &v49,
               0LL,
               &v55,
               4096,
               4) < 0 )
          goto LABEL_86;
        v43 = v62;
      }
      else
      {
        v49 = v41 + 13;
      }
      memmove(v49, v43->pDstSubRects, 16LL * v43->SubRectCnt);
      v41[12] = v62->SubRectCnt;
      *(_QWORD *)v41 = v49;
    }
    *(_DWORD *)v53 = -791674877;
    goto LABEL_86;
  }
  v31 = (struct DXGDEVICE *)*((_QWORD *)a2 + 2);
  v53 = *(char **)(*((_QWORD *)v31 + 2) + 16LL);
  LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v31, a3->hSource, a5);
  if ( (int)Current >= 0 )
  {
    v33 = (*(_DWORD *)&a3->Flags.0 & 0x80u) == 0;
    p_SrcRect = &a3->SrcRect;
    v35 = (struct tagRECT *)((char *)this + 2840);
    if ( !v33 )
      v35 = p_SrcRect;
    Current = (__int64)DXGPROCESS::GetCurrent(v32);
    v55 = (struct DXGPROCESS *)Current;
    DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v49, v61->hSource);
    LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v53 + 4472),
                         (struct DXGPROCESS *)Current,
                         a2,
                         *((_DWORD *)v49 + 5),
                         *((_DWORD *)this + 697),
                         v35,
                         v35,
                         1u,
                         v35,
                         0,
                         0LL);
    if ( (int)Current >= 0 )
    {
      ++*((_QWORD *)this + 354);
      LODWORD(v59) = *((_DWORD *)a2 + 6);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v53 + 4472),
                           v55,
                           1u,
                           (unsigned int *)this + 704,
                           0,
                           1u,
                           (unsigned int *)&v59,
                           (unsigned __int64 *)this + 354,
                           0LL,
                           0LL,
                           0,
                           0,
                           0LL);
      v54 = Current;
      if ( (int)Current >= 0 )
      {
        v38 = *((_QWORD *)a2 + 2);
        *((_QWORD *)v24 + 70) = *((_QWORD *)this + 354);
        *((_QWORD *)v24 + 71) = v38;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v57, (BLTQUEUE *)((char *)this + 728), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v57);
        v40 = DXGPROCESS::GetCurrent(v39);
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v58, v40);
        if ( *(_DWORD *)(*(_QWORD *)this + 140LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          *((_DWORD *)v24 + 22) = 4;
          *((_DWORD *)v24 + 18) = *((_DWORD *)this + 64);
          *((_DWORD *)v24 + 23) = *((_DWORD *)this + 699);
          *((_QWORD *)v24 + 10) = *((_QWORD *)this + 351);
          LODWORD(Current) = v54;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58);
        DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v57);
        goto LABEL_71;
      }
      v36 = 1201LL;
      WdLogSingleEntry1(2LL, 1201LL);
      v37 = L"VmBusSendSignalSyncObject failed";
    }
    else
    {
      v36 = 1181LL;
      WdLogSingleEntry1(2LL, 1181LL);
      v37 = L"Blt failed";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v37, v36, 0LL, 0LL, 0LL, 0LL);
LABEL_71:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
    goto LABEL_86;
  }
  WdLogSingleEntry1(2LL, 1156LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"PrepareStagingBuffer failed", 1156LL, 0LL, 0LL, 0LL, 0LL);
LABEL_86:
  if ( (int)Current < 0 )
  {
    BLTENTRY::Cleanup((struct _EX_RUNDOWN_REF **)v24, 1);
    BLTQUEUE::InsertQueueHead((__int64)this, (__int64 *)v56, (__int64)v24);
    goto LABEL_25;
  }
  BLTQUEUE::InsertQueueTail((__int64)this, (__int64)this + 216, (__int64)v24);
  *((LARGE_INTEGER *)this + 106) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v50);
  return 0LL;
}
