/*
 * XREFs of ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00F7700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A980 (memmove.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0088014 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C00955FC (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0095818 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::LockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        void **a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rcx
  int v12; // r12d
  __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // r8
  char *v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // rcx
  enum _LOCK_OPERATION v22; // [rsp+28h] [rbp-E0h]
  char v23; // [rsp+50h] [rbp-B8h]
  void *v24; // [rsp+58h] [rbp-B0h] BYREF
  struct _MDL **v25; // [rsp+60h] [rbp-A8h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  VIDMM_SYSMEM_SEGMENT *v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *v29; // [rsp+80h] [rbp-88h]
  void **v30; // [rsp+88h] [rbp-80h]
  _BYTE *v31; // [rsp+90h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-70h] BYREF

  v27 = this;
  v29 = a2;
  v30 = a3;
  Size = a4;
  v11 = a6;
  v24 = a6;
  v25 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v23 = 0;
  *a7 = 0LL;
  v13 = *((_QWORD *)a2 + 11);
  v28 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a6);
    v14[3] = a2;
    v14[4] = a3;
    v14[5] = a4;
    v11 = (unsigned __int8 *)v24;
  }
  *v11 = 0;
  v31 = (char *)a2 + 265;
  if ( *((_BYTE *)a2 + 265) )
  {
    if ( a3 == *((void ***)a2 + 31) && a4 == *((_QWORD *)a2 + 32) )
    {
      *v11 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v15);
  }
  if ( (**((_DWORD **)a2 + 67) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
    v12 = 1;
  }
  if ( (*((_DWORD *)a2 + 18) & 0x2000) != 0 )
    goto LABEL_17;
  if ( a5 )
  {
    v23 = 1;
    v24 = 0LL;
    v16 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v24, 0);
    if ( v16 )
    {
      memmove(*((void **)this + 32), v16, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v24);
    }
    else
    {
      memset(*((void **)this + 32), 0, a4);
      *((_DWORD *)a2 + 17) |= 0x200000u;
    }
    *v25 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_17;
  }
  v18 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v18 + 7056) & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C0076784);
    WdLogSingleEntry1(6LL, 1191LL);
    DxgkLogInternalTriageEvent(v19, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  v20 = VIDMM_GLOBAL::ProbeAndLockAllocation(
          (union _LARGE_INTEGER **)v18,
          (struct _VIDMM_LOCAL_ALLOC *)v13,
          a2,
          (unsigned __int64)a3,
          a4,
          v22,
          this,
          1u);
  if ( v20 >= 0 )
  {
LABEL_17:
    *((_QWORD *)a2 + 32) = a4;
    *((_QWORD *)a2 + 31) = a3;
    *((_BYTE *)a2 + 264) = v23;
    *v31 = 1;
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 0LL;
  }
  _InterlockedIncrement(&dword_1C0076784);
  WdLogSingleEntry3(6LL, a2, a3, a4);
  DxgkLogInternalTriageEvent(v21, 262145LL);
  if ( v12 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v20;
}
