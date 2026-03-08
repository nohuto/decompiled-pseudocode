/*
 * XREFs of ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00F7CE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C001A980 (memmove.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0089DFC (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C00955FC (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0095818 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::UnlockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v6; // r14d
  PRKPROCESS **v7; // rsi
  char *v8; // rax
  void *v9[4]; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-50h] BYREF

  v9[2] = this;
  v9[1] = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v6 = 0;
  v7 = (PRKPROCESS **)*((_QWORD *)a2 + 11);
  v9[3] = v7;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( (*((_DWORD *)a2 + 18) & 0x2000) == 0 )
  {
    if ( *((_BYTE *)a2 + 264) )
    {
      if ( (**((_DWORD **)a2 + 67) & 8) == 0 && v7 )
      {
        KeStackAttachProcess(*v7[1], &ApcState);
        v6 = 1;
      }
      v9[0] = 0LL;
      v8 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, *((void ***)a2 + 31), *((_QWORD *)a2 + 32), v9, 0);
      if ( v8 )
      {
        memmove(v8, *((const void **)this + 32), *((_QWORD *)a2 + 32));
        VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, v9[0]);
      }
      else
      {
        memset(*((void **)this + 32), 0, *((_QWORD *)a2 + 32));
        *((_DWORD *)a2 + 17) |= 0x200000u;
      }
      if ( v6 )
        KeUnstackDetachProcess(&ApcState);
    }
    else
    {
      VIDMM_GLOBAL::UnlockAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        (struct _VIDMM_LOCAL_ALLOC *)v7,
        *((_QWORD *)a2 + 31),
        *((_QWORD *)a2 + 32),
        1,
        a3);
    }
  }
  *((_QWORD *)a2 + 32) = 0LL;
  *((_QWORD *)a2 + 31) = 0LL;
  *((_WORD *)a2 + 132) = 0;
}
