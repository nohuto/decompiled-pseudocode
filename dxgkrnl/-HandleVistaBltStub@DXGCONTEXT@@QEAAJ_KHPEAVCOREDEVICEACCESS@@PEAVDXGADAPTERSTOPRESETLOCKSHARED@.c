__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        int a3,
        DXGADAPTER **a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        unsigned int a6,
        unsigned int *a7,
        struct DXGCONTEXT **a8)
{
  __int64 v8; // r14
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned int *v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // rdx
  int v20; // ebx
  int v21; // eax
  int v22; // ecx
  char *v23; // rdx
  int v24; // edi
  unsigned __int64 v25; // rax
  unsigned int *v26; // rdi
  unsigned __int64 v27; // rax
  struct DXGCONTEXT **v28; // r12
  unsigned int v29; // eax
  unsigned int v30; // edi
  DXGDEVICE *v31; // rcx
  int v32; // r12d
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v35; // rax
  struct DXGGLOBAL *Global; // rax
  struct _D3DKMT_PRESENT *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  RECT v41; // xmm0
  unsigned int v42; // eax
  __int64 v43; // r8
  struct DXGCONTEXT **v44; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGGLOBAL *v46; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v47; // rdi
  char *v48; // rdx
  __int64 v49; // r12
  unsigned int *v50; // rdi
  unsigned int v51; // [rsp+50h] [rbp-B0h]
  unsigned int v52; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v53; // [rsp+58h] [rbp-A8h] BYREF
  void *v54; // [rsp+60h] [rbp-A0h]
  unsigned int v55; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  DXGADAPTERSTOPRESETLOCKSHARED *v58; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+80h] [rbp-80h]
  HWND v60; // [rsp+88h] [rbp-78h]
  void *v61; // [rsp+90h] [rbp-70h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v62[2]; // [rsp+98h] [rbp-68h] BYREF
  struct DXGCONTEXT **v63; // [rsp+A8h] [rbp-58h]
  __int128 v64; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  __int128 v67; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  __int128 v71; // [rsp+F8h] [rbp-8h] BYREF
  RECT v72; // [rsp+108h] [rbp+8h] BYREF
  __int128 v73; // [rsp+118h] [rbp+18h] BYREF

  v8 = a6;
  *(_QWORD *)&v72.left = a2;
  v58 = a5;
  v11 = 0;
  v63 = a8;
  v59 = a3;
  if ( a2 >= 0 )
    return (unsigned int)v11;
  v61 = 0LL;
  v12 = HIDWORD(a2);
  v62[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
  LODWORD(v12) = HIDWORD(a2) & 0x7FFFFFFF;
  v13 = *((_QWORD *)this + 2);
  v14 = 0;
  v71 = 0LL;
  v57 = 0LL;
  v15 = 0LL;
  v73 = 0LL;
  v16 = *(_QWORD *)(v13 + 1880);
  v70 = v16;
  v60 = (HWND)v12;
  v53 = 0;
  v51 = 0;
  v55 = 0;
  v54 = 0LL;
  v56 = 0;
  v52 = 0;
  v17 = *((_QWORD *)DXGPROCESS::GetCurrent(v12) + 11);
  if ( !v17 )
    return 3221225485LL;
  if ( v16 )
    v19 = v16;
  else
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v66 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
  v64 = 0LL;
  v65 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = v19;
  DXGADAPTERSTOPRESETLOCKSHARED::Release(v58);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
  v20 = CWin32kLocks::Lock((CWin32kLocks *)&v64, v60, 1, 1, 0);
  if ( v20 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, void **))(v17 + 232))(v64, &v61);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v17 + 72))(v64, &v71)
      && (*(unsigned int (__fastcall **)(HWND, __int128 *))(v17 + 360))(v60, &v73) )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v17 + 312))(v64, &v57);
      v22 = v20;
      if ( !v21 )
        v22 = -1073741811;
      v20 = v22;
    }
    else
    {
      v20 = -1073741811;
    }
  }
  CWin32kLocks::Unlock((CWin32kLocks *)&v64);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v67);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v58);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL);
  if ( v24 < 0 )
  {
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v23);
    return (unsigned int)v24;
  }
  if ( v20 < 0 )
  {
    v11 = 0;
    v26 = 0LL;
    goto LABEL_63;
  }
  if ( !a6 )
  {
    v26 = 0LL;
LABEL_27:
    v28 = v63;
    v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
            this,
            v62[0],
            (struct COREDEVICEACCESS *)a4,
            &v53,
            a6,
            v63,
            v26,
            &v56);
    if ( v11 >= 0 )
    {
      if ( v61
        && ((int)DXGCONTEXT::OpenResourceFromSharedHandle(
                   this,
                   v61,
                   (struct COREDEVICEACCESS *)a4,
                   &v55,
                   a6,
                   v28,
                   v15,
                   &v52) >= 0
          ? (v29 = v55)
          : (v29 = 0),
            (v51 = v29) != 0) )
      {
        if ( !a6 )
        {
          v30 = v52;
          if ( v52 > 1 )
          {
            v31 = (DXGDEVICE *)*((_QWORD *)this + 2);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 2) + 16LL) + 412LL) == 4318 )
            {
              v32 = v59;
              VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v31, v59);
              if ( VistaBltStubInfo )
              {
                if ( v32 )
                {
                  *(_QWORD *)VistaBltStubInfo = *(_QWORD *)&v72.left;
                  *((_DWORD *)VistaBltStubInfo + 2) = v30 - 1;
                  *((_DWORD *)VistaBltStubInfo + 3) = *((_DWORD *)this + 6);
                }
                else if ( (*((_DWORD *)VistaBltStubInfo + 2))-- == 1 )
                {
                  *(_QWORD *)VistaBltStubInfo = 0LL;
                  *((_DWORD *)VistaBltStubInfo + 3) = 0;
                }
              }
            }
          }
          goto LABEL_45;
        }
      }
      else if ( !a6 )
      {
        goto LABEL_45;
      }
      if ( v56 <= 1 && v52 <= 1 )
      {
        v8 = 0LL;
        operator delete(v26);
        operator delete(v15);
        v54 = 0LL;
        v15 = 0LL;
      }
LABEL_45:
      v35 = *((_QWORD *)this + 2);
      v62[0] = 0LL;
      v62[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v35 + 16);
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v62);
      v14 = v53;
      if ( v62[0] )
      {
        LODWORD(v71) = v57 + v71;
        DWORD1(v71) += HIDWORD(v57);
        DWORD2(v71) += v57;
        HIDWORD(v71) += HIDWORD(v57);
        v72.left = v71 - v73;
        v72.top = DWORD1(v71) - DWORD1(v73);
        v72.right = DWORD2(v71) - v73;
        v72.bottom = HIDWORD(v71) - DWORD1(v73);
        Global = DXGGLOBAL::GetGlobal();
        v37 = (struct _D3DKMT_PRESENT *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
        if ( v37 )
        {
          v38 = v70;
          if ( !v70 )
            v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
          v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
          v69 = v38;
          v64 = 0LL;
          v65 = 0LL;
          v66 = v39;
          v67 = 0LL;
          v68 = 0LL;
          memset(v37, 0, 0x5F8uLL);
          v40 = *(unsigned int *)(*((_QWORD *)this + 2) + 468LL);
          v37->hDevice = v40;
          v37->hDevice = *((_DWORD *)this + 6);
          v37->hWindow = v60;
          v37->hDestination = v51;
          v37->VidPnSourceId = 0;
          v37->hSource = v14;
          v41 = v72;
          v37->pSrcSubRects = &v72;
          v42 = v37->Flags.Value & 0xFFFFEFFF;
          v37->SubRectCnt = 1;
          *(_QWORD *)&v37->PresentCount = 0LL;
          v37->Flags.Value = v42 | 0x10081;
          v37->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
          v37->SrcRect = v41;
          v37->PresentHistoryToken.Token.Flip.hLogicalSurface = (ULONG64)v61;
          v37->PresentHistoryToken.Token.Flip.dxgContext = 0LL;
          v37->BroadcastContextCount = v8;
          if ( (_DWORD)v8 )
          {
            v40 = (__int64)a7;
            v43 = (unsigned int)v8;
            do
            {
              *(_DWORD *)((char *)v37 - (char *)a7 + v40 + 96) = *(_DWORD *)v40;
              v40 += 4LL;
              --v43;
            }
            while ( v43 );
          }
          v44 = v63;
          v37->BroadcastSrcAllocation = (D3DKMT_HANDLE *)v54;
          *(_QWORD *)&v37[1].hDevice = v44;
          v37->BroadcastDstAllocation = v15;
          LOBYTE(v37[1].VidPnSourceId) = 1;
          Current = DXGPROCESS::GetCurrent(v40);
          DXGCONTEXT::CopyPresentArgs(this, v37, Current);
          v11 = DXGCONTEXT::Present(
                  this,
                  v37,
                  (struct COREDEVICEACCESS *)a4,
                  v58,
                  (struct CWin32kLocks *)&v64,
                  v44,
                  v62[0]);
          v46 = DXGGLOBAL::GetGlobal();
          ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v46 + 1136), v37);
          if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
          v47 = v58;
          if ( *((_BYTE *)v58 + 16) )
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v58);
          CWin32kLocks::Unlock((CWin32kLocks *)&v64);
          DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v67);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v47);
          if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL) < 0 )
          {
            v11 = -1073741130;
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v48);
          }
          goto LABEL_49;
        }
        WdLogSingleEntry1(6LL, 6462LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for present parameters.",
          6462LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v11 = -1073741801;
LABEL_49:
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v62);
      v26 = (unsigned int *)v54;
      goto LABEL_63;
    }
    v14 = v53;
LABEL_63:
    if ( v14 )
      DXGCONTEXT::DestroyAllocation(this, v14, (struct COREDEVICEACCESS *)a4);
    if ( v51 )
      DXGCONTEXT::DestroyAllocation(this, v51, (struct COREDEVICEACCESS *)a4);
    if ( !v26 )
      goto LABEL_75;
    if ( !(_DWORD)v8 )
    {
LABEL_74:
      operator delete(v26);
LABEL_75:
      if ( v15 )
      {
        if ( (_DWORD)v8 )
        {
          v50 = v15;
          do
          {
            if ( *v50 )
              DXGCONTEXT::DestroyAllocation(this, *v50, (struct COREDEVICEACCESS *)a4);
            ++v50;
            --v8;
          }
          while ( v8 );
        }
        operator delete(v15);
      }
      return (unsigned int)v11;
    }
LABEL_69:
    v49 = (unsigned int)v8;
    do
    {
      if ( *v26 )
        DXGCONTEXT::DestroyAllocation(this, *v26, (struct COREDEVICEACCESS *)a4);
      ++v26;
      --v49;
    }
    while ( v49 );
    v26 = (unsigned int *)v54;
    goto LABEL_74;
  }
  v25 = 4LL * a6;
  if ( !is_mul_ok(a6, 4uLL) )
    v25 = -1LL;
  v54 = (void *)operator new[](v25, 0x4B677844u, 256LL);
  v26 = (unsigned int *)v54;
  if ( v54 )
  {
    v27 = 4LL * a6;
    if ( !is_mul_ok(a6, 4uLL) )
      v27 = -1LL;
    v15 = (unsigned int *)operator new[](v27, 0x4B677844u, 256LL);
    if ( !v15 )
    {
      v11 = -1073741670;
      goto LABEL_69;
    }
    goto LABEL_27;
  }
  return (unsigned int)-1073741670;
}
