/*
 * XREFs of ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x1C0296080
 * Callers:
 *     ?PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0295F50 (-PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x1C02970A4 (-vUnLockShadow@PANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0297128 (-vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C02971BC (-vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ShadowUnLock(struct _PANDEV *a1)
{
  __int64 v2; // rcx
  LONG v3; // r8d

  KeWaitForSingleObject((PVOID)(*((_QWORD *)a1 + 98) + 32LL), UserRequest, 0, 0, 0LL);
  v2 = *((_QWORD *)a1 + 98);
  v3 = *(_DWORD *)(v2 + 88);
  if ( v3 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)v2, 0, v3, 0);
    *(_DWORD *)(*((_QWORD *)a1 + 98) + 88LL) = 0;
    v2 = *((_QWORD *)a1 + 98);
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 32), 0);
}
