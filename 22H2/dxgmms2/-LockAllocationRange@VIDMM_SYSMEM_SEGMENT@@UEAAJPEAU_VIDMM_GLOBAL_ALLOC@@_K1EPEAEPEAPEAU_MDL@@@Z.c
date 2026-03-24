/*
 * XREFs of ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C008AAF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018AC0 (memmove.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0062858 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0062C20 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0066500 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0068B74 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::LockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rcx
  int v12; // r12d
  __int64 v13; // r13
  VIDMM_GLOBAL *v14; // rcx
  __int64 v15; // rcx
  int v16; // r14d
  _QWORD *v18; // rax
  __int64 v19; // r8
  char *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  enum _LOCK_OPERATION v23; // [rsp+28h] [rbp-D0h]
  char v24; // [rsp+40h] [rbp-B8h]
  void *v25; // [rsp+48h] [rbp-B0h] BYREF
  struct _MDL **v26; // [rsp+50h] [rbp-A8h]
  size_t Size; // [rsp+58h] [rbp-A0h]
  VIDMM_SYSMEM_SEGMENT *v28; // [rsp+60h] [rbp-98h]
  __int64 v29; // [rsp+68h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *v30; // [rsp+70h] [rbp-88h]
  __int64 v31; // [rsp+78h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  v28 = this;
  v30 = a2;
  v31 = a3;
  Size = a4;
  v11 = a6;
  v25 = a6;
  v26 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v24 = 0;
  *a7 = 0LL;
  v13 = *((_QWORD *)a2 + 12);
  v29 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(a6);
    v18[3] = a2;
    v18[4] = a3;
    v18[5] = a4;
    v11 = (unsigned __int8 *)v25;
  }
  *v11 = 0;
  if ( *((_BYTE *)a2 + 281) )
  {
    if ( a3 == *((_QWORD *)a2 + 33) && a4 == *((_QWORD *)a2 + 34) )
    {
      *v11 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    LOBYTE(v19) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v19);
  }
  if ( (**((_DWORD **)a2 + 62) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
    v12 = 1;
  }
  if ( (*((_DWORD *)a2 + 20) & 0x2000) != 0 )
  {
LABEL_11:
    *((_QWORD *)a2 + 34) = a4;
    *((_QWORD *)a2 + 33) = a3;
    *((_BYTE *)a2 + 280) = v24;
    *((_BYTE *)a2 + 281) = 1;
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 0LL;
  }
  if ( a5 )
  {
    v24 = 1;
    v25 = 0LL;
    v20 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v25, 0);
    if ( v20 )
    {
      memmove(*((void **)this + 32), v20, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v25);
    }
    else
    {
      memset(*((void **)this + 32), 0, a4);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    *v26 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_11;
  }
  v14 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 1) + 7048LL);
  if ( ((unsigned __int8)v14 & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C0050664);
    v21 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v21 + 24) = 1196LL;
    WdLogEvent5_WdLowResource(v21);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v16 = VIDMM_GLOBAL::ProbeAndLockAllocation(v14, (struct _VIDMM_LOCAL_ALLOC *)v13, a2, a3, a4, v23, this, 1u);
    if ( v16 >= 0 )
      goto LABEL_11;
    _InterlockedIncrement(&dword_1C0050664);
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v15);
    v22[3] = a2;
    v22[4] = a3;
    v22[5] = a4;
    WdLogEvent5_WdLowResource(v22);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v16;
  }
}
