/*
 * XREFs of ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x1C02B1DAC
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C02B0AE4 (--1DXGADAPTER@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::DestroyVSyncPhaseState(DXGADAPTER *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  v2 = (void *)*((_QWORD *)this + 514);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 515);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 516);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_QWORD *)this + 517);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_QWORD *)this + 518);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_QWORD *)this + 519);
  if ( v7 )
    operator delete(v7);
  v8 = (void *)*((_QWORD *)this + 526);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_QWORD *)this + 525);
  if ( v9 )
    operator delete(v9);
  v10 = (void *)*((_QWORD *)this + 527);
  if ( v10 )
    operator delete(v10);
}
