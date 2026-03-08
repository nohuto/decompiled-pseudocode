/*
 * XREFs of ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086358
 * Callers:
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086508 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093BA0 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00B2528 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupPrimaryAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // r15
  char *v4; // rdi
  char v5; // r12
  char *v7; // rbp
  char *v8; // rbp
  char *v9; // r14
  char *v10; // rbx
  int v11; // ecx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  int v16; // [rsp+20h] [rbp-38h]

  v2 = (char *)a2 + 272;
  v4 = (char *)*((_QWORD *)a2 + 34);
  v5 = 0;
  while ( v4 != v2 )
  {
    v7 = v4;
    v4 = *(char **)v4;
    v8 = v7 - 16;
    v9 = *(char **)v8;
    while ( v9 != v8 )
    {
      v10 = v9 - 40;
      v9 = *(char **)v9;
      v11 = *((_DWORD *)v10 + 7);
      if ( (v11 & 3) == 1 )
      {
        v13 = v10 + 56;
        v14 = *((_QWORD *)v10 + 7);
        if ( *(char **)(v14 + 8) != v10 + 56 || (v15 = (_QWORD *)*((_QWORD *)v10 + 8), (_QWORD *)*v15 != v13) )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *((_DWORD *)v10 + 7) &= 0xFFFFFFFC;
        *((_QWORD *)v10 + 8) = 0LL;
        *v13 = 0LL;
        v11 = *((_DWORD *)v10 + 7);
      }
      if ( (v11 & 3) != 0 )
      {
        VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)v10 + 1), (struct VIDMM_ALLOC *)v10, 1);
        if ( !(v10[25] & 1 | *((_DWORD *)v10 + 38)) )
        {
          VIDMM_DEVICE::RemoveCommitment(*((VIDMM_DEVICE **)v10 + 1), (struct VIDMM_ALLOC *)v10, 1);
          v5 = 1;
        }
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 67) + 12LL));
      }
    }
    v12 = *((_QWORD *)a2 + 15);
    if ( v12 && !*((_DWORD *)a2 + 36) )
    {
      LOBYTE(v16) = 0;
      (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v12 + 48LL))(
        v12,
        a2,
        0LL,
        0LL,
        v16,
        0LL);
    }
  }
  return v5;
}
