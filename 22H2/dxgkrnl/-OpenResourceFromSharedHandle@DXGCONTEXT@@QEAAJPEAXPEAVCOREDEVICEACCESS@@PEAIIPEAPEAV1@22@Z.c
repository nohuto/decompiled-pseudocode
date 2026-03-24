/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C02814E8
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C02805F0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000E5CC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01227D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0122BE0 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

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
  unsigned int v8; // r12d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  _DWORD *v16; // r12
  unsigned int v17; // r13d
  SIZE_T v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r15d
  __int64 v24; // rax
  int v25; // r14d
  int v26; // edi
  __int64 v27; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v36; // rcx
  struct DXGPROCESS *v37; // r15
  __int64 v38; // rax
  char *v39; // r14
  unsigned int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // r8
  int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rax
  struct _EX_RUNDOWN_REF *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _EX_RUNDOWN_REF *v52; // rbx
  __int64 v53; // rax
  unsigned int Count; // r14d
  int v55; // r15d
  unsigned int v56; // r14d
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r10
  __int64 v61; // rbx
  __int64 v62; // rdx
  int v63; // eax
  unsigned int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned int v68; // [rsp+20h] [rbp-E0h]
  _DWORD *v69; // [rsp+50h] [rbp-B0h]
  int v70; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v71; // [rsp+58h] [rbp-A8h] BYREF
  int v72; // [rsp+60h] [rbp-A0h]
  struct COREDEVICEACCESS *v73; // [rsp+68h] [rbp-98h] BYREF
  void *v74; // [rsp+70h] [rbp-90h]
  void *v75; // [rsp+78h] [rbp-88h]
  void *v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h] BYREF
  __int64 v79; // [rsp+98h] [rbp-68h] BYREF
  __int128 v80; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v81[2]; // [rsp+B0h] [rbp-50h]
  __int64 v82; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-38h]
  unsigned int *v84; // [rsp+D0h] [rbp-30h]
  unsigned int *v85; // [rsp+D8h] [rbp-28h]
  char *v86; // [rsp+E0h] [rbp-20h]
  struct DXGPROCESS *v87; // [rsp+E8h] [rbp-18h]
  unsigned int *v88; // [rsp+F0h] [rbp-10h]
  _QWORD v89[10]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v90[14]; // [rsp+150h] [rbp+50h] BYREF

  v74 = 0LL;
  v8 = (unsigned int)a2;
  v69 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v85 = a7;
  v73 = a3;
  v84 = a4;
  v88 = a8;
  v80 = 0LL;
  *(_OWORD *)v81 = 0LL;
  memset(v89, 0, 0x48uLL);
  v10 = *((_QWORD *)this + 2);
  DWORD1(v80) = v8;
  LODWORD(v80) = *(_DWORD *)(v10 + 436);
  LODWORD(v13) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v10, &v80, v8);
  if ( (int)v13 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v14);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
LABEL_3:
    v16 = v69;
    goto LABEL_56;
  }
  v17 = HIDWORD(v81[1]);
  v18 = 80LL * HIDWORD(v81[1]);
  if ( !is_mul_ok(HIDWORD(v81[1]), 0x50uLL) )
    v18 = -1LL;
  v69 = operator new[](v18, 0x4B677844u, PagedPool);
  if ( !v69 )
  {
    LODWORD(v13) = -1073741670;
    v16 = 0LL;
    goto LABEL_56;
  }
  v23 = HIDWORD(v81[0]);
  if ( HIDWORD(v81[0]) && (v74 = operator new[](HIDWORD(v81[0]), 0x4B677844u, PagedPool)) == 0LL
    || (v25 = v81[1]) != 0 && (v75 = operator new[](LODWORD(v81[1]), 0x4B677844u, PagedPool)) == 0LL
    || (v26 = v81[0]) != 0 && (v76 = operator new[](LODWORD(v81[0]), 0x4B677844u, PagedPool)) == 0LL )
  {
    v24 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
    *(_QWORD *)(v24 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdLowResource(v24);
    LODWORD(v13) = -1073741670;
    goto LABEL_3;
  }
  v27 = *((_QWORD *)this + 2);
  LODWORD(v89[0]) = *(_DWORD *)(v27 + 436);
  v89[7] = v74;
  v89[5] = v75;
  HIDWORD(v89[0]) = v8;
  v16 = v69;
  v89[3] = v76;
  LODWORD(v89[1]) = v17;
  v89[2] = v69;
  LODWORD(v89[8]) = v23;
  LODWORD(v89[6]) = v25;
  LODWORD(v89[4]) = v26;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v20, v19, v21, v22);
  v29 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          (struct _DXGK_ALLOCATIONINFO *)v27,
          (__int64)v89,
          HIDWORD(v89[0]),
          0LL,
          0,
          v73,
          0,
          CurrentProcess,
          0LL,
          0LL);
  v13 = v29;
  if ( v29 < 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v34 + 24) = v13;
    WdLogEvent5_WdWarning(v34);
    goto LABEL_56;
  }
  Current = DXGPROCESS::GetCurrent(v31, v30, v32, v33);
  v36 = *((_QWORD *)this + 2);
  v37 = Current;
  v87 = Current;
  LODWORD(v13) = -1073741275;
  v38 = 0LL;
  v70 = 0;
  v77 = *(_QWORD *)(v36 + 16);
  if ( !v17 )
    goto LABEL_56;
  v39 = (char *)v37 + 208;
  v86 = (char *)v37 + 208;
  while ( 1 )
  {
    v83 = 80 * v38;
    v40 = v16[20 * v38];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v39, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v43 = *((_DWORD *)v39 + 6);
        if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, v43);
      }
      ExAcquirePushLockSharedEx(v39, 0LL);
    }
    v44 = (v40 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v44 >= *((_DWORD *)v37 + 64) )
      goto LABEL_31;
    v45 = *((_QWORD *)v37 + 30);
    v46 = *(_DWORD *)(v45 + 16 * v44 + 8);
    if ( ((v40 >> 25) & 0x60) != (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60) || (v46 & 0x2000) != 0 || (v46 & 0x1F) == 0 )
      goto LABEL_31;
    v47 = v46 & 0x1F;
    if ( (_BYTE)v47 != 5 )
    {
      v48 = WdLogNewEntry5_WdError(v47, 2LL * (unsigned int)v44);
      *(_QWORD *)(v48 + 24) = 316LL;
      WdLogEvent5_WdError(v48);
LABEL_31:
      v49 = 0LL;
      goto LABEL_32;
    }
    v49 = *(struct _EX_RUNDOWN_REF **)(v45 + 16LL * (unsigned int)v44);
LABEL_32:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71, v49);
    ExReleasePushLockSharedEx(v39, 0LL);
    KeLeaveCriticalRegion();
    v52 = v71;
    if ( !v71 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v51, v50);
      *(_QWORD *)(v53 + 24) = 6496LL;
      WdLogEvent5_WdAssertion(v53);
      v52 = v71;
    }
    Count = v52[9].Count;
    v55 = 0;
    v72 = 0;
    v56 = (Count >> 12) & 0x3F;
    if ( v56 == *((_DWORD *)this + 104) )
    {
      v72 = 1;
    }
    else
    {
      if ( !a5 )
        goto LABEL_51;
      while ( 1 )
      {
        v50 = (unsigned int)(v55 + 1);
        if ( v56 == *((_DWORD *)a6[v50] + 104) )
          break;
        ++v55;
        if ( (unsigned int)v50 >= a5 )
          goto LABEL_51;
      }
    }
    LODWORD(v13) = 0;
    if ( *((_BYTE *)this + 456) )
    {
      memset(v90, 0, 0x68uLL);
      v90[7] = 1LL;
      LOBYTE(v68) = 0;
      v57 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, unsigned int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v77 + 640) + 8LL) + 800LL))(
              *(_QWORD *)(v77 + 648),
              0LL,
              v52[3].Count,
              v90,
              v68,
              v56);
      v13 = v57;
      if ( v57 < 0 )
      {
LABEL_53:
        v65 = WdLogNewEntry5_WdWarning(v58, v50, v59);
        *(_QWORD *)(v65 + 24) = v13;
        WdLogEvent5_WdWarning(v65);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v71, v66);
        goto LABEL_56;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
    {
      v78 = 0LL;
      v73 = 0LL;
      v61 = v77;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct COREDEVICEACCESS **))(*(_QWORD *)(*(_QWORD *)(v77 + 640)
                                                                                                + 8LL)
                                                                                    + 984LL))(
        *(_QWORD *)(v60 + 760),
        v56,
        &v78,
        &v73);
      v62 = *(_QWORD *)(v61 + 640);
      v79 = 0LL;
      v82 = 0LL;
      v63 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(v62 + 8) + 776LL))(
              *(_QWORD *)(v61 + 648),
              v78,
              v71 + 3,
              1LL,
              3,
              &v79,
              &v82);
      v13 = v63;
      if ( v63 < 0 )
        goto LABEL_53;
      if ( v63 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, struct COREDEVICEACCESS **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v61 + 640) + 8LL)
                                                                                       + 992LL))(
          *(_QWORD *)(v61 + 648),
          &v73,
          &v79,
          1LL);
        LODWORD(v13) = 0;
      }
    }
    if ( (int)v13 >= 0 )
    {
      v64 = v16[(unsigned __int64)v83 / 4];
      if ( v72 )
      {
        *v84 = v64;
      }
      else
      {
        v50 = (__int64)v85;
        v85[v55] = v64;
      }
    }
LABEL_51:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v71, v50);
    v38 = (unsigned int)(v70 + 1);
    v70 = v38;
    if ( (unsigned int)v38 >= v17 )
      break;
    v39 = v86;
    v37 = v87;
  }
  if ( (int)v13 >= 0 )
    *v88 = v17;
LABEL_56:
  operator delete[](v16);
  operator delete[](v74);
  operator delete[](v75);
  operator delete[](v76);
  return (unsigned int)v13;
}
