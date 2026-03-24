/*
 * XREFs of ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A7360
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C01488BC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0148D20 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0148EE0 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C003A570 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C003C454 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00804B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

void __fastcall DEVLOCKOBJ::vLockGammaRamp(DEVLOCKOBJ *this, struct XDCOBJ *a2, int a3)
{
  __int64 v5; // rbx
  HSEMAPHORE v6; // rcx
  int v7; // r8d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  *((_QWORD *)this + 1) = ghsemDynamicModeChange;
  v8 = v5;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  if ( *(_QWORD *)a2
    && ((*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x8200) == 0x200 || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8)) )
  {
    *(_QWORD *)this = ghsemGreLock;
    v6 = ghsemGreLock;
  }
  else
  {
    v6 = *(HSEMAPHORE *)(v5 + 56);
    *(_QWORD *)this = v6;
  }
  *((_QWORD *)this + 2) = v5;
  *((_DWORD *)this + 6) = 9;
  EngAcquireSemaphore(v6);
  v7 = 12;
  if ( *(HSEMAPHORE *)this == ghsemGreLock )
    v7 = 2;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemTrg", *(_QWORD *)this, v7);
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
}
