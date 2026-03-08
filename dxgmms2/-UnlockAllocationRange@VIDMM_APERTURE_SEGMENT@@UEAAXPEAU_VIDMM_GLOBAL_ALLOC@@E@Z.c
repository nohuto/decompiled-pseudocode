/*
 * XREFs of ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00F8B10
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

void __fastcall VIDMM_APERTURE_SEGMENT::UnlockAllocationRange(VIDMM_GLOBAL **this, PRKPROCESS ***a2, char a3)
{
  int v4; // r15d
  PRKPROCESS **v5; // rsi
  size_t *v6; // r14
  _QWORD *v7; // r13
  char *v8; // rax
  char v9; // [rsp+50h] [rbp-A8h]
  const void **v10; // [rsp+58h] [rbp-A0h]
  void *v11[7]; // [rsp+60h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-60h] BYREF

  v9 = a3;
  v10 = (const void **)this;
  v11[2] = this;
  v11[1] = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v4 = 0;
  v5 = a2[11];
  v11[3] = v5;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    this = (VIDMM_GLOBAL **)v10;
    a3 = v9;
  }
  v11[4] = a2 + 33;
  if ( *((_BYTE *)a2 + 264) )
  {
    if ( (*(_DWORD *)a2[67] & 8) == 0 && v5 )
    {
      KeStackAttachProcess(*v5[1], &ApcState);
      v4 = 1;
    }
    v11[0] = 0LL;
    v6 = (size_t *)(a2 + 32);
    v11[6] = a2 + 32;
    v7 = a2 + 31;
    v11[5] = a2 + 31;
    v8 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v5, (void **)a2[31], (__int64)a2[32], v11, 0);
    if ( v8 )
    {
      memmove(v8, v10[32], *v6);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v5, v11[0]);
    }
    else
    {
      memset((void *)v10[32], 0, *v6);
      *((_DWORD *)a2 + 17) |= 0x200000u;
    }
    if ( v4 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    v6 = (size_t *)(a2 + 32);
    v7 = a2 + 31;
    VIDMM_GLOBAL::UnlockAllocation(
      this[1],
      (struct _VIDMM_LOCAL_ALLOC *)v5,
      (unsigned __int64)a2[31],
      (unsigned __int64)a2[32],
      1,
      a3);
  }
  *v7 = 0LL;
  *v6 = 0LL;
  *((_BYTE *)a2 + 264) = 0;
  *((_BYTE *)a2 + 265) = 0;
}
