/*
 * XREFs of ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C0347AC0
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x1C038C0EC (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::AddMapping(
        struct _KTHREAD **this,
        struct _LUID *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 HighPart; // rbx
  int v9; // edx
  const wchar_t *v10; // r9
  __int64 v11; // rbp
  __int128 v12; // xmm0
  DXG_GUEST_GLOBAL_VMBUS *v13; // rcx
  __int64 LowPart; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  int updated; // eax
  struct _KTHREAD *v19; // rax
  _BYTE v20[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v21; // [rsp+58h] [rbp-20h]
  int v22; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v21);
  v22 = 2;
  v6 = operator new[](0x30uLL, 0x4B677844u, 256LL);
  v7 = (_QWORD *)v6;
  if ( !v6 )
  {
    HighPart = 92LL;
    WdLogSingleEntry1(6LL, 92LL);
    v9 = 262145;
    v10 = L"Failed to allocate new entry";
    LODWORD(v11) = -1073741801;
LABEL_5:
    LowPart = 0LL;
    v15 = 0LL;
    v16 = 0LL;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, v9, -1, (__int64)v10, HighPart, LowPart, v15, v16, 0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    return (unsigned int)v11;
  }
  *(struct _LUID *)(v6 + 16) = *a2;
  v12 = *(_OWORD *)a3;
  *(_DWORD *)(v6 + 24) = a2[1].LowPart;
  *(_OWORD *)(v6 + 28) = v12;
  v13 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 214);
  if ( !v13 )
  {
    operator delete(v7);
    HighPart = 104LL;
    WdLogSingleEntry1(2LL, 104LL);
    v9 = 0x40000;
    v10 = L"VmBus not connected so cannot redirect";
    LODWORD(v11) = -1073741823;
    goto LABEL_5;
  }
  updated = DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(v13, *a2, a2[1].LowPart, 1, *((_DWORD *)a3 + 3));
  v11 = updated;
  if ( updated < 0 )
  {
    operator delete(v7);
    v16 = v11;
    WdLogSingleEntry4(2LL, a2->HighPart, a2->LowPart, a2[1].LowPart, v11);
    LowPart = a2->LowPart;
    v10 = L"Host failed to update monitor mapping for Adapter LUID 0x%08I64x%08I64x, target id 0x%I64x, status 0x%I64x";
    v15 = a2[1].LowPart;
    v9 = 0x40000;
    HighPart = a2->HighPart;
    goto LABEL_8;
  }
  v19 = *this;
  if ( *((struct _KTHREAD ***)*this + 1) != this )
    __fastfail(3u);
  *v7 = v19;
  v7[1] = this;
  *((_QWORD *)v19 + 1) = v7;
  *this = (struct _KTHREAD *)v7;
  *((_BYTE *)this + 48) = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return 0LL;
}
