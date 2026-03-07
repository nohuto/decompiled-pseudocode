__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        void **a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rcx
  int v12; // r13d
  __int64 v13; // rbx
  _QWORD *v14; // rax
  void (__fastcall *v15)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v17; // r8
  char *v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  enum _LOCK_OPERATION v24; // [rsp+28h] [rbp-F0h]
  char v25; // [rsp+50h] [rbp-C8h]
  void *v26; // [rsp+58h] [rbp-C0h] BYREF
  struct _MDL **v27; // [rsp+60h] [rbp-B8h]
  __int64 v28; // [rsp+68h] [rbp-B0h]
  size_t Size; // [rsp+70h] [rbp-A8h]
  VIDMM_APERTURE_SEGMENT *v30; // [rsp+78h] [rbp-A0h]
  __int64 v31; // [rsp+80h] [rbp-98h]
  struct _VIDMM_GLOBAL_ALLOC *v32; // [rsp+88h] [rbp-90h]
  void **v33; // [rsp+90h] [rbp-88h]
  _BYTE *v34; // [rsp+98h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-78h] BYREF

  v30 = this;
  v32 = a2;
  v33 = a3;
  Size = a4;
  v11 = a6;
  v26 = a6;
  v27 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v25 = 0;
  *a7 = 0LL;
  v13 = *((_QWORD *)a2 + 11);
  v28 = v13;
  v31 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a6);
    v14[3] = a2;
    v14[4] = a3;
    v14[5] = a4;
    v11 = (unsigned __int8 *)v26;
  }
  *v11 = 0;
  v34 = (char *)a2 + 265;
  if ( *((_BYTE *)a2 + 265) )
  {
    if ( a3 == *((void ***)a2 + 31) && a4 == *((_QWORD *)a2 + 32) )
    {
      *v11 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    v15 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(*(_QWORD *)this + 120LL);
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32));
    v15(this, a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32), MDLForRange);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v17);
    v13 = v28;
  }
  if ( (**((_DWORD **)a2 + 67) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
    v12 = 1;
  }
  if ( a5 )
  {
    v25 = 1;
    v26 = 0LL;
    v18 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v26, 0);
    if ( v18 )
    {
      memmove(*((void **)this + 32), v18, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v26);
    }
    else
    {
      memset(*((void **)this + 32), 0, a4);
      *((_DWORD *)a2 + 17) |= 0x200000u;
    }
    *v27 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_16;
  }
  v20 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v20 + 7056) & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C0076784);
    WdLogSingleEntry1(6LL, 1620LL);
    DxgkLogInternalTriageEvent(v21, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v22 = VIDMM_GLOBAL::ProbeAndLockAllocation(
            (union _LARGE_INTEGER **)v20,
            (struct _VIDMM_LOCAL_ALLOC *)v13,
            a2,
            (unsigned __int64)a3,
            a4,
            v24,
            this,
            1u);
    if ( v22 >= 0 )
    {
LABEL_16:
      *((_QWORD *)a2 + 32) = a4;
      *((_QWORD *)a2 + 31) = a3;
      *((_BYTE *)a2 + 264) = v25;
      *v34 = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1C0076784);
    WdLogSingleEntry3(6LL, a2, a3, a4);
    DxgkLogInternalTriageEvent(v23, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v22;
  }
}
