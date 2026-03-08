/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140736258
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140736DF0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetJobSilo @ 0x1402B60C0 (PsGetJobSilo.c)
 *     PsGetPermanentSiloContext @ 0x1402B6120 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x1402B6178 (PsIsThreadInSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ZwUnloadKey2 @ 0x140415E10 (ZwUnloadKey2.c)
 *     VrpDestroyNamespaceNode @ 0x140737134 (VrpDestroyNamespaceNode.c)
 *     VrpCleanupNamespace @ 0x140737928 (VrpCleanupNamespace.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  int JobSilo; // edi
  int PermanentSiloContext; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // r13
  unsigned __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 i; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  char v19; // bl
  unsigned __int64 v21; // rcx
  _QWORD v22[3]; // [rsp+48h] [rbp-38h] BYREF
  int v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+64h] [rbp-1Ch]
  __int128 v25; // [rsp+68h] [rbp-18h]
  unsigned __int64 v26; // [rsp+C8h] [rbp+48h] BYREF

  Object = 0LL;
  v26 = 0LL;
  a5 = 0LL;
  if ( a2 < 8 )
    goto LABEL_26;
  JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
  if ( JobSilo < 0 )
    goto LABEL_21;
  JobSilo = PsGetJobSilo((__int64)Object);
  if ( JobSilo < 0 )
    goto LABEL_21;
  if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), a5) )
  {
LABEL_26:
    JobSilo = -1073741811;
    goto LABEL_21;
  }
  PermanentSiloContext = PsGetPermanentSiloContext(a5, VrpSiloContextSlot, &v26);
  JobSilo = PermanentSiloContext;
  if ( PermanentSiloContext < 0 )
  {
    if ( PermanentSiloContext == -1073741275 )
LABEL_20:
      JobSilo = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (unsigned __int64 *)v26;
    v10 = (unsigned __int64 *)(v26 + 16);
    v11 = v26 + 16;
    --CurrentThread->KernelApcDisable;
    v12 = KeAbPreAcquire(v11, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v12, (__int64)v10);
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
    v14 = v26;
    if ( !*(_DWORD *)(v26 + 84) )
    {
      v15 = v9[6];
      for ( i = 0LL; i < v15; v15 = v9[6] )
      {
        v17 = 0LL;
        if ( i < v15 )
        {
          if ( !is_mul_ok(v9[5], i) || (v21 = v9[9], v17 = v21 + v9[5] * i, v17 < v21) )
            v17 = 0LL;
        }
        v18 = *(_QWORD *)v17;
        if ( *(int *)(*(_QWORD *)v17 + 56LL) < 0 )
        {
          v24 = 0;
          v22[1] = 0LL;
          v22[0] = 48LL;
          v22[2] = v18 + 24;
          v25 = 0LL;
          v23 = 576;
          ZwUnloadKey2((__int64)v22, 1LL);
          VrpDestroyNamespaceNode(v14, v18);
        }
        else
        {
          ++i;
        }
      }
      VrpCleanupNamespace(v14);
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_20;
    }
    JobSilo = -1073741738;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 16));
    KeAbPostRelease(v14 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_21:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
