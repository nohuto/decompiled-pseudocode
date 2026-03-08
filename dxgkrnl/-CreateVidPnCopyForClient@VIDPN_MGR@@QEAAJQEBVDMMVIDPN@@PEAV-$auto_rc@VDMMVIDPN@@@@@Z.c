/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3C78
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3BC0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C03B05F0 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03BC994 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0004F04 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01817A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  DMMVIDPN *v9; // rax
  DMMVIDPN *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v14 = 0LL;
  v9 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL);
  if ( v9 )
    v10 = DMMVIDPN::DMMVIDPN(v9, a2);
  else
    v10 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v14, (__int64)v10);
  v11 = v14;
  if ( v14 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v14 + 72))(v14 + 72) )
    {
      if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
        WdLogSingleEntry0(1LL);
      v12 = v14;
      if ( Set<DMMVIDPN>::Add() != 1 )
        WdLogSingleEntry0(1LL);
      v14 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v12);
    }
    else
    {
      WdLogSingleEntry3(7LL, v11, a2, *(int *)(v11 + 80));
      v7 = *(_DWORD *)(v11 + 80);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, a2);
    v7 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v14, 0LL);
  return v7;
}
