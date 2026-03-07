__int64 __fastcall DXGCONTEXT::OpenResourceFromSharedHandle(
        DXGCONTEXT *this,
        void *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int a5,
        struct DXGCONTEXT **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // r13d
  __int64 v10; // rcx
  __int64 v11; // rdi
  _DWORD *v12; // r13
  int v13; // r12d
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r15d
  int v17; // r14d
  int v18; // edi
  DXGDEVICE *v19; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  int v21; // eax
  __int64 v22; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v24; // rcx
  struct DXGPROCESS *v25; // r15
  __int64 v26; // rdx
  unsigned int v27; // ecx
  volatile signed __int32 *v28; // r14
  __int64 v29; // r12
  unsigned int v30; // ebx
  unsigned int v31; // eax
  __int64 v32; // r8
  int v33; // ecx
  int v34; // r15d
  struct _EX_RUNDOWN_REF *v35; // rdx
  struct _EX_RUNDOWN_REF *v36; // rbx
  unsigned int v37; // r14d
  ULONG_PTR Count; // r8
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r10
  __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // ecx
  int v47; // [rsp+20h] [rbp-E0h]
  __int64 v48; // [rsp+50h] [rbp-B0h]
  unsigned int v49; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v50; // [rsp+58h] [rbp-A8h] BYREF
  int v51; // [rsp+60h] [rbp-A0h]
  struct COREDEVICEACCESS *v52; // [rsp+68h] [rbp-98h] BYREF
  void *v53; // [rsp+70h] [rbp-90h]
  void *v54; // [rsp+78h] [rbp-88h]
  void *v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v62; // [rsp+C8h] [rbp-38h]
  unsigned int *v63; // [rsp+D0h] [rbp-30h]
  volatile signed __int32 *v64; // [rsp+D8h] [rbp-28h]
  struct DXGPROCESS *v65; // [rsp+E0h] [rbp-20h]
  unsigned int *v66; // [rsp+E8h] [rbp-18h]
  _QWORD v67[10]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v68[14]; // [rsp+140h] [rbp+40h] BYREF

  v63 = a7;
  v8 = (unsigned int)a2;
  v52 = a3;
  v62 = a4;
  v66 = a8;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  memset(v67, 0, 0x48uLL);
  v10 = *((_QWORD *)this + 2);
  DWORD1(v59) = v8;
  LODWORD(v59) = *(_DWORD *)(v10 + 468);
  LODWORD(v11) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v10, &v59, v8);
  if ( (int)v11 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
    v12 = 0LL;
    goto LABEL_51;
  }
  v13 = HIDWORD(v60);
  v14 = 80LL * HIDWORD(v60);
  if ( !is_mul_ok(HIDWORD(v60), 0x50uLL) )
    v14 = -1LL;
  v48 = operator new[](v14, 0x4B677844u, 256LL);
  if ( !v48 )
  {
    LODWORD(v11) = -1073741670;
    v12 = 0LL;
    goto LABEL_51;
  }
  v16 = DWORD1(v60);
  if ( DWORD1(v60) && (v53 = (void *)operator new[](DWORD1(v60), 0x4B677844u, 256LL)) == 0LL
    || (v17 = DWORD2(v60)) != 0 && (v54 = (void *)operator new[](DWORD2(v60), 0x4B677844u, 256LL)) == 0LL
    || (v18 = v60) != 0 && (v55 = (void *)operator new[]((unsigned int)v60, 0x4B677844u, 256LL)) == 0LL )
  {
    WdLogSingleEntry1(6LL, *((_QWORD *)this + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Failed memory allocation",
      *((_QWORD *)this + 2),
      0LL,
      0LL,
      0LL,
      0LL);
    v12 = (_DWORD *)v48;
    LODWORD(v11) = -1073741670;
    goto LABEL_51;
  }
  v19 = (DXGDEVICE *)*((_QWORD *)this + 2);
  LODWORD(v67[0]) = *((_DWORD *)v19 + 117);
  v67[7] = v53;
  v67[5] = v54;
  HIDWORD(v67[0]) = v8;
  v12 = (_DWORD *)v48;
  v67[3] = v55;
  LODWORD(v67[1]) = v13;
  v67[2] = v48;
  LODWORD(v67[8]) = v16;
  LODWORD(v67[6]) = v17;
  LODWORD(v67[4]) = v18;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15);
  v21 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v19,
          (__int64)v67,
          HIDWORD(v67[0]),
          0LL,
          0,
          v52,
          0,
          CurrentProcess,
          0LL,
          0LL);
  LODWORD(v11) = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry1(3LL, v21);
    goto LABEL_51;
  }
  Current = DXGPROCESS::GetCurrent(v22);
  v24 = *((_QWORD *)this + 2);
  v25 = Current;
  v65 = Current;
  LODWORD(v11) = -1073741275;
  v26 = *(_QWORD *)(v24 + 16);
  v27 = 0;
  v49 = 0;
  v56 = v26;
  if ( !v13 )
    goto LABEL_51;
  v28 = (volatile signed __int32 *)((char *)Current + 248);
  v64 = (volatile signed __int32 *)((char *)Current + 248);
  while ( 1 )
  {
    v29 = 10LL * v27;
    v30 = v12[20 * v27];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v28);
    v31 = (v30 >> 6) & 0xFFFFFF;
    if ( v31 < *((_DWORD *)v25 + 74)
      && (v32 = *((_QWORD *)v25 + 35), ((v30 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16LL * v31 + 8) & 0x60))
      && (*(_DWORD *)(v32 + 16LL * v31 + 8) & 0x2000) == 0
      && (v33 = *(_DWORD *)(v32 + 16LL * v31 + 8) & 0x1F) != 0 )
    {
      if ( v33 == 5 )
      {
        v35 = *(struct _EX_RUNDOWN_REF **)(v32 + 16LL * v31);
        v34 = 0;
        goto LABEL_28;
      }
      WdLogSingleEntry1(2LL, 267LL);
      v34 = 0;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v34 = 0;
    }
    v35 = 0LL;
LABEL_28:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50, v35);
    _InterlockedDecrement(v28 + 4);
    ExReleasePushLockSharedEx(v28, 0LL);
    KeLeaveCriticalRegion();
    v36 = v50;
    if ( !v50 )
    {
      WdLogSingleEntry1(1LL, 6722LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"AllocRef.m_pAllocation != NULL",
        6722LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v36 = v50;
    }
    v37 = (LODWORD(v36[9].Count) >> 12) & 0x3F;
    v51 = 0;
    if ( v37 == *((_DWORD *)this + 100) )
    {
      v51 = 1;
    }
    else
    {
      v34 = 0;
      if ( !a5 )
        goto LABEL_47;
      while ( 1 )
      {
        v41 = (unsigned int)(v34 + 1);
        if ( v37 == *((_DWORD *)a6[v41] + 100) )
          break;
        ++v34;
        if ( (unsigned int)v41 >= a5 )
          goto LABEL_47;
      }
    }
    LODWORD(v11) = 0;
    if ( *((_BYTE *)this + 440) )
    {
      memset(v68, 0, 0x68uLL);
      v68[7] = 1LL;
      Count = v36[3].Count;
      v39 = v56;
      LOBYTE(v47) = 0;
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v56 + 760) + 8LL)
                                                                                              + 792LL))(
              *(_QWORD *)(v56 + 768),
              0LL,
              Count,
              v68,
              v47,
              v37);
      v11 = v40;
      if ( v40 < 0 )
        goto LABEL_34;
    }
    else
    {
      v39 = v56;
    }
    if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
    {
      v57 = 0LL;
      v52 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct COREDEVICEACCESS **))(*(_QWORD *)(*(_QWORD *)(v39 + 760)
                                                                                                + 8LL)
                                                                                    + 976LL))(
        *(_QWORD *)(v42 + 792),
        v37,
        &v57,
        &v52);
      v43 = *(_QWORD *)(v39 + 760);
      v58 = 0LL;
      v61 = 0LL;
      v44 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(v43 + 8) + 768LL))(
              *(_QWORD *)(v39 + 768),
              v57,
              v50 + 3,
              1LL,
              3,
              &v58,
              &v61);
      v11 = v44;
      if ( v44 < 0 )
      {
LABEL_34:
        WdLogSingleEntry1(3LL, v11);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v50);
        goto LABEL_51;
      }
      if ( v44 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, struct COREDEVICEACCESS **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v39 + 760) + 8LL)
                                                                                       + 984LL))(
          *(_QWORD *)(v39 + 768),
          &v52,
          &v58,
          1LL);
        LODWORD(v11) = 0;
      }
    }
    v45 = v12[2 * v29];
    if ( v51 )
      *v62 = v45;
    else
      v63[v34] = v45;
LABEL_47:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v50);
    v27 = v49 + 1;
    v49 = v27;
    if ( v27 >= HIDWORD(v60) )
      break;
    v28 = v64;
    v25 = v65;
  }
  if ( (int)v11 >= 0 )
    *v66 = HIDWORD(v60);
LABEL_51:
  operator delete(v12);
  operator delete(v53);
  operator delete(v54);
  operator delete(v55);
  return (unsigned int)v11;
}
