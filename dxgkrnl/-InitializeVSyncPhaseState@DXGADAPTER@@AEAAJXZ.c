/*
 * XREFs of ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x1C01EC6E0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall DXGADAPTER::InitializeVSyncPhaseState(DXGADAPTER *this)
{
  unsigned int v2; // r13d
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // r12
  char *v14; // rbx
  unsigned int v15; // ebp
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // [rsp+60h] [rbp+8h]
  __int64 v25; // [rsp+68h] [rbp+10h]

  if ( (*((_DWORD *)this + 698) & 0x10) != 0 )
    v2 = *((_DWORD *)this + 418);
  else
    v2 = 1;
  v3 = 4LL * v2;
  if ( !is_mul_ok(v2, 4uLL) )
    v3 = -1LL;
  *((_QWORD *)this + 514) = operator new[](v3, 0x4B677844u, 64LL);
  v4 = (unsigned __int64)v2 << 6;
  if ( !is_mul_ok(v2, 0x40uLL) )
    v4 = -1LL;
  *((_QWORD *)this + 515) = operator new[](v4, 0x4B677844u, 64LL);
  v5 = (unsigned __int64)v2 << 6;
  if ( !is_mul_ok(v2, 0x40uLL) )
    v5 = -1LL;
  *((_QWORD *)this + 516) = operator new[](v5, 0x4B677844u, 64LL);
  v6 = 32LL * v2;
  if ( !is_mul_ok(v2, 0x20uLL) )
    v6 = -1LL;
  *((_QWORD *)this + 517) = operator new[](v6, 0x4B677844u, 64LL);
  v7 = 16LL * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v7 = -1LL;
  *((_QWORD *)this + 518) = operator new[](v7, 0x4B677844u, 64LL);
  v8 = 4LL * v2;
  if ( !is_mul_ok(v2, 4uLL) )
    v8 = -1LL;
  *((_QWORD *)this + 519) = operator new[](v8, 0x4B677844u, 64LL);
  v9 = 8LL * v2;
  if ( !is_mul_ok(v2, 8uLL) )
    v9 = -1LL;
  *((_QWORD *)this + 526) = operator new[](v9, 0x4B677844u, 64LL);
  v10 = 8LL * v2;
  if ( !is_mul_ok(v2, 8uLL) )
    v10 = -1LL;
  *((_QWORD *)this + 525) = operator new[](v10, 0x4B677844u, 64LL);
  v11 = 112LL * v2;
  if ( !is_mul_ok(v2, 0x70uLL) )
    v11 = -1LL;
  v12 = (char *)operator new[](v11, 0x4B677844u, 64LL);
  v13 = 0LL;
  v14 = v12;
  if ( v12 )
    `vector constructor iterator'(v12, 112LL, v2, (void (__fastcall *)(char *))VSYNC_TIME_STATS::VSYNC_TIME_STATS);
  else
    v14 = 0LL;
  *((_QWORD *)this + 527) = v14;
  if ( !*((_QWORD *)this + 514)
    || !*((_QWORD *)this + 515)
    || !*((_QWORD *)this + 516)
    || !*((_QWORD *)this + 517)
    || !*((_QWORD *)this + 518)
    || !*((_QWORD *)this + 519)
    || !*((_QWORD *)this + 526)
    || !*((_QWORD *)this + 525)
    || !v14 )
  {
    return 3221225495LL;
  }
  v15 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( v2 )
  {
    v17 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    do
    {
      *(_DWORD *)(v17 + *((_QWORD *)this + 514)) = 0;
      KeInitializeTimer((PKTIMER)(v13 + *((_QWORD *)this + 515)));
      *(_QWORD *)(v19 + *((_QWORD *)this + 518)) = this;
      *(_DWORD *)(*((_QWORD *)this + 518) + v19 + 8) = v15;
      KeInitializeDpc(
        (PRKDPC)(v13 + *((_QWORD *)this + 516)),
        (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc,
        (PVOID)(v20 + *((_QWORD *)this + 518)));
      v21 = *((_QWORD *)this + 517);
      v19 += 16LL;
      v22 = v20 + *((_QWORD *)this + 518);
      ++v15;
      v13 += 64LL;
      v20 += 16LL;
      *(_QWORD *)(v18 + v21) = 0LL;
      *(_QWORD *)(v18 + v21 + 16) = DxgkpProcessVSyncPhaseThread;
      *(_QWORD *)(v18 + v21 + 24) = v22;
      v18 += 32LL;
      v17 = v24 + 4;
      v24 += 4LL;
      *(LARGE_INTEGER *)(v25 + *((_QWORD *)this + 527)) = PerformanceCounter;
      v25 += 112LL;
    }
    while ( v15 < v2 );
  }
  return 0LL;
}
