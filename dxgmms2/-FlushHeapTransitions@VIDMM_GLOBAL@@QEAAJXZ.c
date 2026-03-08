/*
 * XREFs of ?FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00A9A14
 * Callers:
 *     ?VidMmFlushHeapTransitions@@YAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0012060 (-VidMmFlushHeapTransitions@@YAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00B2280 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00B22A0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FlushHeapTransitions(VIDMM_GLOBAL *this)
{
  VIDMM_PROCESS *v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  VIDMM_PROCESS *v4; // rcx
  struct _KAPC_STATE v6; // [rsp+20h] [rbp-48h] BYREF
  VIDMM_PROCESS *v7; // [rsp+50h] [rbp-18h]

  v1 = 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    v2 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v2 )
      v1 = *(VIDMM_PROCESS **)(v2 + 8);
  }
  v7 = v1;
  VIDMM_PROCESS::SafeAttach(v1, &v6);
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v1 + 3) + 136LL))(*((_QWORD **)v1 + 3));
  VIDMM_PROCESS::SafeDetach(v4, &v6);
  return v3;
}
