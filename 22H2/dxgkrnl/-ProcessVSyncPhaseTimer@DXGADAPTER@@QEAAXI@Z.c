/*
 * XREFs of ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z @ 0x1C0121E38
 * Callers:
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C0121D30 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0007EC8 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 */

void __fastcall DXGADAPTER::ProcessVSyncPhaseTimer(DXGADAPTER *this, unsigned int a2)
{
  char *v2; // rbx
  __int64 v3; // rsi
  _DWORD *v5; // rcx
  unsigned int v6; // r9d
  bool v7; // al

  v2 = (char *)this + 3936;
  v3 = a2;
  DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 3936));
  v5 = (_DWORD *)*((_QWORD *)this + 486);
  if ( (*((_DWORD *)this + 642) & 0x10) != 0 )
  {
    v7 = v5[v3] == 1;
  }
  else
  {
    if ( *v5 == 1 )
      goto LABEL_3;
    v7 = 0;
  }
  if ( !v7 )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
LABEL_3:
  v6 = -3;
  if ( (*((_DWORD *)this + 642) & 0x10) != 0 )
    v6 = v3;
  DXGADAPTER::DdiControlInterrupt2(this, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, 1, v6);
}
