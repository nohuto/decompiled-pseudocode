/*
 * XREFs of ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C011A494
 * Callers:
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01002AC (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C011E134 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FEEC0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FF390 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010AC5C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NDIS_PD_BM_DOMAIN::Deref(_QWORD *P)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)qword_1C00E5528;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  if ( (*(_DWORD *)P)-- == 1 )
  {
    v3 = P + 1;
    v4 = P[1];
    if ( v4 )
    {
      if ( *(_QWORD **)(v4 + 8) != v3 || (v5 = (_QWORD *)P[2], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *v3 = 0LL;
    }
    KLockHolder::ReleaseExclusive(&v6);
    if ( P[4] )
    {
      ((void (*)(void))P[10])();
      P[4] = 0LL;
    }
    ExFreePoolWithTag(P, 0x6D41444Eu);
  }
  KLockHolder::~KLockHolder(&v6);
}
