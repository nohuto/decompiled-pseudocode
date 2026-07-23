/*
 * XREFs of SmKmCleanup @ 0x14092B0B4
 * Callers:
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405996A0 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall SmKmCleanup(__int64 a1)
{
  struct _PRIVILEGE_SET **v2; // rdi
  __int64 v3; // r15
  struct _PRIVILEGE_SET *v4; // rsi
  volatile signed __int64 *p_Attributes; // rbx
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14

  v2 = (struct _PRIVILEGE_SET **)a1;
  v3 = 32LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      p_Attributes = (volatile signed __int64 *)&v4->Privilege[0].Attributes;
      v6 = 32LL;
      do
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)p_Attributes, 0LL);
        v8 = *((_QWORD *)p_Attributes - 2);
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, *((_QWORD *)p_Attributes - 2), 7LL);
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)p_Attributes - 1);
        }
        else
        {
          *((_QWORD *)p_Attributes - 2) = -1LL;
        }
        if ( (_InterlockedExchangeAdd64(p_Attributes, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(p_Attributes);
        KeAbPostRelease((ULONG_PTR)p_Attributes);
        KeLeaveCriticalRegion();
        if ( v8 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v8, 1LL);
        p_Attributes += 5;
        --v6;
      }
      while ( v6 );
      CmSiFreeMemory(v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
