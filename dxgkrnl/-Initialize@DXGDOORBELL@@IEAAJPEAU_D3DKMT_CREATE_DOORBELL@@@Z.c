/*
 * XREFs of ?Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1C03147B8
 * Callers:
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1C0311FAC (-CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009B30 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiCreateDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDOORBELL@@@Z @ 0x1C02C0354 (-DdiCreateDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDOORBELL@@@Z.c)
 */

__int64 __fastcall DXGDOORBELL::Initialize(DXGDOORBELL *this, struct _D3DKMT_CREATE_DOORBELL *a2)
{
  struct _EX_RUNDOWN_REF **v2; // r13
  unsigned int v3; // ebx
  __int64 v6; // r14
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  struct _EX_RUNDOWN_REF *v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // rdx
  ULONG_PTR Count; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rax
  __int64 v18; // r15
  char *v19; // r12
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // r8
  int v23; // ecx
  struct _EX_RUNDOWN_REF *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  struct DXGGLOBAL *Global; // rax
  int v29; // eax
  __int64 v30; // r14
  const wchar_t *v31; // r9
  __int64 v32; // rax
  int v33; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v35; // eax
  HANDLE v36; // rax
  __int64 v37; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v38; // rax
  int v39; // eax
  HANDLE v40; // rax
  __int64 v41; // rdx
  struct _EX_RUNDOWN_REF *v42; // rax
  ULONG_PTR v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  int Doorbell; // eax
  int v47; // eax
  __int64 v48; // rsi
  int v49; // [rsp+28h] [rbp-41h]
  __int64 v50; // [rsp+50h] [rbp-19h] BYREF
  DXGDOORBELL *v51; // [rsp+58h] [rbp-11h]
  int v52; // [rsp+60h] [rbp-9h]
  int v53; // [rsp+64h] [rbp-5h]
  __int64 v54; // [rsp+68h] [rbp-1h]
  ULONG_PTR v55; // [rsp+70h] [rbp+7h]
  __int64 v56; // [rsp+78h] [rbp+Fh]
  int v57; // [rsp+80h] [rbp+17h]
  int v58; // [rsp+84h] [rbp+1Bh]
  struct _EX_RUNDOWN_REF *v59; // [rsp+D0h] [rbp+67h] BYREF
  struct _EX_RUNDOWN_REF *v60; // [rsp+D8h] [rbp+6Fh] BYREF

  v2 = (struct _EX_RUNDOWN_REF **)((char *)this + 16);
  v3 = *((_DWORD *)a2 + 1);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 248));
  v7 = (v3 >> 6) & 0xFFFFFF;
  if ( v7 >= *(_DWORD *)(v6 + 296) )
    goto LABEL_7;
  v8 = *(_QWORD *)(v6 + 280);
  if ( ((v3 >> 25) & 0x60) != (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F;
  if ( !v9 )
    goto LABEL_7;
  if ( v9 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v10 = 0LL;
    goto LABEL_8;
  }
  v10 = *(struct _EX_RUNDOWN_REF **)(v8 + 16LL * v7);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v59, v10);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 264));
  ExReleasePushLockSharedEx(v6 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(v2, &v59);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v59);
  if ( !*v2 )
  {
    v11 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 1), *((unsigned int *)a2 + 1), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGHWQUEUE 0x%I64x: Invalid hRingBuffer 0x%I64x specified, returning 0x%I64x",
      *((_QWORD *)this + 1),
      *((unsigned int *)a2 + 1),
      -1073741811LL,
      0LL,
      0LL);
    return v11;
  }
  v13 = *((_QWORD *)this + 1);
  Count = (*v2)[1].Count;
  v15 = *(_QWORD *)(v13 + 16);
  v16 = *(_QWORD *)(v15 + 16);
  if ( Count != v16 )
  {
    v11 = -1073741811;
    WdLogSingleEntry4(2LL, v13, *(_QWORD *)(v15 + 16), Count, -1073741811LL);
    v17 = *v2;
LABEL_15:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGHWQUEUE 0x%I64x owner Device 0x%p does not match Ring Buffer Alloc owner 0x%I64x, returning 0x%I64x",
      *((_QWORD *)this + 1),
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
      v17[1].Count,
      -1073741811LL,
      0LL);
    return v11;
  }
  v18 = *(_QWORD *)(v16 + 40);
  v19 = (char *)this + 24;
  v20 = *((_DWORD *)a2 + 2);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 248));
  v21 = (v20 >> 6) & 0xFFFFFF;
  if ( v21 < *(_DWORD *)(v18 + 296) )
  {
    v22 = *(_QWORD *)(v18 + 280);
    if ( ((v20 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x60)
      && (*(_DWORD *)(v22 + 16LL * v21 + 8) & 0x2000) == 0 )
    {
      v23 = *(_DWORD *)(v22 + 16LL * v21 + 8) & 0x1F;
      if ( v23 )
      {
        if ( v23 == 5 )
        {
          v24 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * v21);
          goto LABEL_24;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v24 = 0LL;
LABEL_24:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v60, v24);
  _InterlockedDecrement((volatile signed __int32 *)(v18 + 264));
  ExReleasePushLockSharedEx(v18 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)this + 3, &v60);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v60);
  if ( !*(_QWORD *)v19 )
  {
    v11 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 1), *((unsigned int *)a2 + 2), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGHWQUEUE 0x%I64x: Invalid hRingBufferControl 0x%I64x specified, returning 0x%I64x",
      *((_QWORD *)this + 1),
      *((unsigned int *)a2 + 2),
      -1073741811LL,
      0LL,
      0LL);
    return v11;
  }
  v25 = *((_QWORD *)this + 1);
  v26 = *(_QWORD *)(*(_QWORD *)v19 + 8LL);
  v27 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
  if ( v26 != v27 )
  {
    v11 = -1073741811;
    WdLogSingleEntry4(2LL, v25, v27, v26, -1073741811LL);
    v17 = *(struct _EX_RUNDOWN_REF **)v19;
    goto LABEL_15;
  }
  Global = DXGGLOBAL::GetGlobal();
  LOBYTE(v49) = 0;
  v29 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(*((_QWORD *)Global + 33)
                                                                                            + 8LL)
                                                                                + 912LL))(
          (char *)this + 80,
          0LL,
          0LL,
          0LL,
          2LL,
          v49);
  v30 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 1), v29);
    v31 = L"DXGHWQUEUE 0x%I64x: Failed to allocate DoorbellStatus page, returning 0x%I64x";
LABEL_30:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, *((_QWORD *)this + 1), v30, 0LL, 0LL, 0LL);
    return (unsigned int)v30;
  }
  *((_QWORD *)this + 15) = *((_QWORD *)this + 11);
  v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL) + 16LL);
  v33 = (*(__int64 (__fastcall **)(_QWORD, char *, char *, __int64))(*(_QWORD *)(*(_QWORD *)(v32 + 760) + 8LL) + 928LL))(
          *(_QWORD *)(v32 + 768),
          (char *)this + 80,
          (char *)this + 128,
          2LL);
  v30 = v33;
  if ( v33 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 1), v33);
    v31 = L"DXGHWQUEUE 0x%I64x: Failed to map DoorbellStatusCPUVA, returning 0x%I64x";
    goto LABEL_30;
  }
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v35 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))VirtualMemoryInterface)(
          -1LL,
          (char *)this + 48,
          0LL,
          (char *)this + 32,
          8400896,
          4);
  v30 = v35;
  if ( v35 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 1), v35);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGHWQUEUE 0x%I64x: Failed to allocate dummy page for DoorbellCPUVA, returning 0x%I64x",
      *((_QWORD *)this + 1),
      v30,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v30;
  }
  v36 = MmSecureVirtualMemory(*((PVOID *)this + 6), *((_QWORD *)this + 4), 4u);
  *((_QWORD *)this + 7) = v36;
  if ( !v36 )
  {
    v11 = -1073741801;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 1), -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGHWQUEUE 0x%I64x: Failed to secure doorbell CPUVA, returning 0x%I64x",
      *((_QWORD *)this + 1),
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return v11;
  }
  if ( (*((_DWORD *)a2 + 3) & 1) != 0 )
  {
    v38 = DxgkGetVirtualMemoryInterface();
    v39 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v38)(
            -1LL,
            (char *)this + 64,
            0LL,
            (char *)this + 40,
            8400896,
            4);
    v30 = v39;
    if ( v39 < 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 1), v39);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGHWQUEUE 0x%I64x: Failed to allocate dummy page for SecondaryDoorbellCPUVA, returning 0x%I64x",
        *((_QWORD *)this + 1),
        v30,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v30;
    }
    v40 = MmSecureVirtualMemory(*((PVOID *)this + 8), *((_QWORD *)this + 5), 4u);
    *((_QWORD *)this + 9) = v40;
    if ( !v40 )
    {
      v11 = -1073741801;
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 1), -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGHWQUEUE 0x%I64x: Failed to secure secondary doorbell CPUVA, returning 0x%I64x",
        *((_QWORD *)this + 1),
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      return v11;
    }
  }
  v41 = *((_QWORD *)this + 1);
  v53 = 0;
  v58 = 0;
  v50 = *(_QWORD *)(v41 + 32);
  v42 = *v2;
  v51 = this;
  v43 = v42[4].Count;
  v44 = *(_QWORD *)v19;
  v55 = v43;
  v45 = *(_QWORD *)(v44 + 32);
  v52 = *((_DWORD *)a2 + 4);
  v54 = *((_QWORD *)a2 + 3);
  v57 = *((_DWORD *)a2 + 3);
  v56 = v45;
  Doorbell = ADAPTER_RENDER::DdiCreateDoorbell(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 16LL),
               (struct _DXGKARG_CREATEDOORBELL *)&v50,
               v37);
  v30 = Doorbell;
  if ( Doorbell < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 1), Doorbell);
    v31 = L"DXGHWQUEUE 0x%I64x: DdiCreateDoorbell failed with status 0x%I64x";
    goto LABEL_30;
  }
  *(_QWORD *)this = v51;
  v47 = (*(__int64 (__fastcall **)(DXGDOORBELL *, struct _D3DKMT_CREATE_DOORBELL *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL) + 16LL) + 736LL)
                                                                                               + 8LL)
                                                                                   + 1072LL))(
          this,
          a2);
  v48 = v47;
  if ( v47 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, *((_QWORD *)this + 1), v47);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DXGHWQUEUE 0x%I64x: VidSchCreateDoorbell failed with status 0x%I64x",
    *((_QWORD *)this + 1),
    v48,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v48;
}
