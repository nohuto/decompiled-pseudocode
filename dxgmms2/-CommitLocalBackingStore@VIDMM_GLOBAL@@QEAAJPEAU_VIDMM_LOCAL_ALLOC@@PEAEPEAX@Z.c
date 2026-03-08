/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C00A1AB0
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00A1840 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00AF0D0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00B2280 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00B22A0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00F1854 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  int v7; // r15d
  int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // r15d
  char v16; // r9
  int v17; // eax
  int v18; // ecx
  VIDMM_PROCESS *v19; // rcx
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v25; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  SIZE_T v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rcx
  VIDMM_PROCESS *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rbx
  struct _MDL *v43; // rbx
  __int64 v44; // rcx
  int v45; // [rsp+48h] [rbp-B0h]
  PVOID Base; // [rsp+60h] [rbp-98h] BYREF
  __int64 v47; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int8 *v48; // [rsp+70h] [rbp-88h] BYREF
  __int64 v49; // [rsp+78h] [rbp-80h] BYREF
  struct _KAPC_STATE v50; // [rsp+80h] [rbp-78h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-48h]

  v48 = a3;
  v7 = 0;
  v8 = 0;
  Base = 0LL;
  v9 = *(_QWORD *)a2;
  v10 = *((_QWORD *)a2 + 1);
  v51 = v10;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v10, &v50);
  v13 = *(_DWORD *)(v9 + 72);
  if ( (v13 & 0x2000) != 0 )
  {
    Base = *(PVOID *)(v9 + 568);
    goto LABEL_23;
  }
  if ( (v13 & 0x44000) == 0x44000 )
  {
    v32 = *(_QWORD *)(v10 + 32);
    if ( v32 )
    {
      if ( (*(_DWORD *)(v32 + 424) & 0x100) != 0 )
      {
        Base = *(PVOID *)(v9 + 552);
        goto LABEL_23;
      }
    }
  }
  if ( (v13 & 0x8400) != 0 )
  {
LABEL_23:
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16)
                                                        + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                                            + 48LL)
                                + 296LL * (*(_DWORD *)(v9 + 68) & 0x3F)
                                + 224),
      *(_QWORD *)(v9 + 8));
    v19 = (VIDMM_PROCESS *)Base;
    *((_QWORD *)a2 + 2) = Base;
LABEL_24:
    VIDMM_PROCESS::SafeDetach(v19, &v50);
    return (unsigned int)v8;
  }
  v14 = **(unsigned int **)(v9 + 536);
  if ( (v13 & 0x40000) != 0 )
  {
    if ( (v14 & 0x400000) == 0 )
    {
      ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(*(_QWORD *)(v9 + 384));
      v22 = ObOpenObjectByPointer(*(PVOID *)(v9 + 384), 0, 0LL, 0, ObjectType, 1, (PHANDLE)a2 + 12);
      v8 = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry2(1LL, *(_QWORD *)(v9 + 384), v22);
        DxgkLogInternalTriageEvent(*(_QWORD *)(v9 + 384), 0x40000LL);
        goto LABEL_24;
      }
    }
    if ( (*(_DWORD *)(v9 + 72) & 0x80u) != 0 )
    {
      v48 = 0LL;
      v47 = *(_QWORD *)(v9 + 8);
      v23 = **(unsigned int **)(v9 + 536);
      if ( (v23 & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess(v23, v11, v14, v12);
        v25 = *(_QWORD *)(v9 + 384);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v45 = 4;
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess(v23, v11, v14, v12);
        v25 = *(_QWORD *)(v9 + 384);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v45 = 1028;
      }
      v8 = (*((__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD, __int64, unsigned __int8 **, __int64, int, _DWORD, int))VirtualMemoryInterface
            + 3))(
             v25,
             CurrentProcess,
             &Base,
             0LL,
             v47,
             &v48,
             v9 + 8,
             2,
             0,
             v45);
      if ( v8 < 0 )
      {
        _InterlockedIncrement(&dword_1C007679C);
        v33 = PsGetCurrentProcess(v28, v27, v29, v30);
        WdLogSingleEntry3(6LL, v9, v33, v8);
        PsGetCurrentProcess(v35, v34, v36, v37);
        DxgkLogInternalTriageEvent(v38, 262145LL);
        goto LABEL_24;
      }
    }
    goto LABEL_23;
  }
  if ( (v14 & 8) != 0 || (v14 & 0x20000) != 0 )
    goto LABEL_23;
  if ( (v14 & 0x10) != 0 )
  {
    if ( (v13 & 0x1000) != 0 )
    {
LABEL_47:
      Base = (PVOID)a4;
      goto LABEL_23;
    }
    if ( a4 == (a4 & 0xFFFFFFFFFFFFF000uLL) && *(_QWORD *)v9 == (*(_QWORD *)v9 & 0xFFFFFFFFFFFFF000uLL) )
    {
      v31 = *(_QWORD *)(v9 + 8);
      if ( (*(_DWORD *)(v9 + 68) & 0x1000) != 0 )
      {
        if ( v31 && (v31 + a4 > MmUserProbeAddress || v31 + a4 < a4) )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      else
      {
        ProbeForWrite((volatile void *)a4, v31, 1u);
      }
      goto LABEL_47;
    }
    WdLogSingleEntry1(1LL, 29884LL);
  }
  else
  {
    if ( (v14 & 0x20) == 0 )
    {
      if ( (v13 & 0x4000) != 0 )
      {
        LOBYTE(v7) = (v14 & 4) != 0;
        v15 = v7 + 9;
        goto LABEL_16;
      }
      if ( (v13 & 0x100000) != 0 )
        goto LABEL_15;
      if ( (v13 & 0x80u) == 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 8) != 0 || (v14 & 4) != 0 )
          v15 = 4;
        else
          v15 = 3;
      }
      else if ( (*(_DWORD *)(v9 + 68) & 0x100) != 0 )
      {
        if ( (v14 & 4) != 0 )
          v15 = 6;
        else
          v15 = 5;
      }
      else
      {
        if ( (v14 & 4) != 0 )
        {
          if ( (v14 & 0x800) != 0 )
          {
            v15 = 8;
            goto LABEL_16;
          }
LABEL_15:
          v15 = 2;
          goto LABEL_16;
        }
        if ( (v14 & 0x800) != 0 )
          v15 = 7;
        else
          v15 = 1;
      }
LABEL_16:
      v47 = 0LL;
      v16 = BYTE1(v13) & 1;
      if ( v15 - 3 > 3
        && (*(_DWORD *)(v9 + 68) & 0x80u) == 0
        && ((*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 8) != 0 || (v14 & 1) != 0) )
      {
        v16 = 0;
      }
      if ( v15 - 9 <= 1 )
        v16 = 0;
      v49 = 0LL;
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, PVOID *, __int64 *, unsigned __int8 *, bool, char))(**(_QWORD **)(v10 + 24) + 16LL))(
              *(_QWORD *)(v10 + 24),
              *(_QWORD *)(v9 + 8),
              *(unsigned int *)(v9 + 32),
              v15,
              &v47,
              &Base,
              &v49,
              v48,
              (v13 & 0x80000) != 0,
              v16);
      v8 = v17;
      if ( v17 < 0 )
      {
        _InterlockedIncrement(&dword_1C0076828);
        WdLogSingleEntry2(6LL, *(_QWORD *)(v9 + 8), v17);
        DxgkLogInternalTriageEvent(v41, 262145LL);
      }
      else
      {
        *((_QWORD *)a2 + 3) = v47;
        v18 = *(_DWORD *)(v9 + 72);
        if ( (v18 & 0x4000) != 0 )
          *(_QWORD *)(v9 + 568) = v49;
        if ( (v18 & 0x100000) == 0 )
          goto LABEL_23;
        v42 = *(_QWORD *)(v9 + 520);
        MmGetPhysicalAddress(*(PVOID *)(v42 + 56));
        v43 = VidMmiBuildMdlForContiguousMmIo(Base, *(_QWORD *)(v9 + 8), *(union _LARGE_INTEGER *)(v42 + 64));
        if ( v43 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, _QWORD, __int64, struct _MDL *, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v10 + 24) + 48LL))(
                 *(_QWORD *)(v10 + 24),
                 this,
                 *((_QWORD *)a2 + 3),
                 1LL,
                 v43,
                 *(_QWORD *)(v9 + 8),
                 0LL,
                 0LL,
                 0,
                 v9);
          if ( v8 < 0 )
            ExFreePoolWithTag(v43, 0);
          else
            *((_BYTE *)a2 + 32) |= 1u;
          if ( v8 >= 0 )
            goto LABEL_23;
        }
        else
        {
          WdLogSingleEntry1(1LL, 30076LL);
          DxgkLogInternalTriageEvent(v44, 0x40000LL);
          v8 = -1073741801;
        }
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v10 + 24) + 24LL))(
          *(_QWORD *)(v10 + 24),
          a2);
      }
      goto LABEL_23;
    }
    if ( a4 < MmUserProbeAddress )
    {
      WdLogSingleEntry1(1LL, 29936LL);
    }
    else
    {
      if ( a4 == (a4 & 0xFFFFFFFFFFFFF000uLL) && *(_QWORD *)v9 == (*(_QWORD *)v9 & 0xFFFFFFFFFFFFF000uLL) )
        goto LABEL_47;
      WdLogSingleEntry1(1LL, 29949LL);
    }
  }
  DxgkLogInternalTriageEvent(v39, 0x40000LL);
  VIDMM_PROCESS::SafeDetach(v40, &v50);
  return 3221225485LL;
}
