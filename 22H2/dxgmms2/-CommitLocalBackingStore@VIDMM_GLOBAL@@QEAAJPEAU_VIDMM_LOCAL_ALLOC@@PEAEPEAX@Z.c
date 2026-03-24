/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C0077510
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0077200 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007ACC0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00857BC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00857DC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int8 *a3,
        VIDMM_PROCESS *a4)
{
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  VIDMM_PROCESS *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  VIDMM_PROCESS *v30; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  VIDMM_PROCESS *v35; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int8 *v36; // [rsp+68h] [rbp-90h] BYREF
  __int64 v37; // [rsp+70h] [rbp-88h]
  __int64 v38; // [rsp+78h] [rbp-80h]
  struct _KAPC_STATE v39; // [rsp+80h] [rbp-78h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-48h]

  v36 = a3;
  LODWORD(v7) = 0;
  v35 = 0LL;
  v8 = *(__int64 **)a2;
  v9 = *((_QWORD *)a2 + 1);
  v40 = v9;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v9, &v39);
  v10 = *((unsigned int *)v8 + 20);
  if ( (v10 & 0x2000) != 0 )
  {
    v35 = (VIDMM_PROCESS *)v8[66];
LABEL_39:
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16)
                                                        + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL))
                                            + 48LL)
                                + 296LL * (*((_DWORD *)v8 + 19) & 0x3F)
                                + 224),
      v8[1]);
    v18 = v35;
    *((_QWORD *)a2 + 2) = v35;
    goto LABEL_40;
  }
  v11 = v10 & 0x4000;
  if ( (v10 & 0x4000) != 0 && (v10 & 0x40000) != 0 )
  {
    v12 = *(_QWORD *)(v9 + 32);
    if ( v12 )
    {
      if ( (*(_BYTE *)(v12 + 347) & 0x20) != 0 )
      {
        v35 = (VIDMM_PROCESS *)v8[64];
        goto LABEL_39;
      }
    }
  }
  if ( (v10 & 0x8400) != 0 )
    goto LABEL_39;
  v13 = *(unsigned int *)v8[62];
  if ( (v10 & 0x40000) == 0 )
  {
    if ( (v13 & 8) != 0 || (v13 & 0x20000) != 0 )
      goto LABEL_39;
    if ( (v13 & 0x10) != 0 )
    {
      if ( (v10 & 0x1000) != 0 )
      {
LABEL_33:
        v35 = a4;
        goto LABEL_39;
      }
      if ( a4 == (VIDMM_PROCESS *)((unsigned __int64)a4 & 0xFFFFFFFFFFFFF000uLL) )
      {
        v11 = *v8;
        if ( *v8 == (*v8 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ProbeForWrite(a4, v8[1], 1u);
          goto LABEL_33;
        }
      }
      v29 = WdLogNewEntry5_WdAssertion(v11, v13, v10);
      *(_QWORD *)(v29 + 24) = 28636LL;
    }
    else
    {
      if ( (v13 & 0x20) == 0 )
      {
        v37 = 0LL;
        v38 = 0LL;
        v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v9 + 24) + 16LL))(
                *(_QWORD *)(v9 + 24),
                v8[1],
                *((unsigned int *)v8 + 8));
        v7 = v32;
        if ( v32 >= 0 )
        {
          *((_QWORD *)a2 + 3) = v37;
          if ( (v8[10] & 0x4000) != 0 )
            v8[66] = v38;
        }
        else
        {
          _InterlockedIncrement(&dword_1C0050708);
          v34 = WdLogNewEntry5_WdLowResource(v33);
          *(_QWORD *)(v34 + 24) = v8[1];
          *(_QWORD *)(v34 + 32) = v7;
          WdLogEvent5_WdLowResource(v34);
        }
        goto LABEL_39;
      }
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      {
        if ( a4 == (VIDMM_PROCESS *)((unsigned __int64)a4 & 0xFFFFFFFFFFFFF000uLL) )
        {
          v11 = *v8;
          if ( *v8 == (*v8 & 0xFFFFFFFFFFFFF000uLL) )
            goto LABEL_33;
        }
        v29 = WdLogNewEntry5_WdAssertion(v11, v13, v10);
        *(_QWORD *)(v29 + 24) = 28694LL;
      }
      else
      {
        v29 = WdLogNewEntry5_WdAssertion(v11, v13, v10);
        *(_QWORD *)(v29 + 24) = 28681LL;
      }
    }
    WdLogEvent5_WdAssertion(v29);
    VIDMM_PROCESS::SafeDetach(v30, &v39);
    return 3221225485LL;
  }
  if ( (v13 & 0x400000) != 0
    || (ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v8[44]),
        v15 = ObOpenObjectByPointer((PVOID)v8[44], 0, 0LL, 0, ObjectType, 1, (PHANDLE)a2 + 12),
        v7 = v15,
        v15 >= 0) )
  {
    if ( (*((_DWORD *)v8 + 20) & 0x80u) == 0 )
      goto LABEL_39;
    v36 = 0LL;
    v19 = v8[1];
    v20 = *(unsigned int *)v8[62];
    if ( (v20 & 4) != 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v20, v13, v10);
      v22 = MmMapViewOfSection(v8[44], CurrentProcess, &v35, 0LL, v19, &v36, v8 + 1, 2, 0, 4);
    }
    else
    {
      v24 = PsGetCurrentProcess(v20, v13, v10);
      v22 = MmMapViewOfSection(v8[44], v24, &v35, 0LL, v19, &v36, v8 + 1, 2, 0, 1028);
    }
    LODWORD(v7) = v22;
    if ( v22 >= 0 )
      goto LABEL_39;
    _InterlockedIncrement(&dword_1C005067C);
    v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v23);
    v25[3] = v8;
    v25[4] = PsGetCurrentProcess(v27, v26, v28);
    v25[5] = (int)v7;
    WdLogEvent5_WdLowResource(v25);
  }
  else
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v13, v10);
    *(_QWORD *)(v17 + 24) = v8[44];
    *(_QWORD *)(v17 + 32) = v7;
    WdLogEvent5_WdAssertion(v17);
  }
LABEL_40:
  VIDMM_PROCESS::SafeDetach(v18, &v39);
  return (unsigned int)v7;
}
