/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x140691898
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140692780 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsIsThreadInSilo @ 0x1402F6170 (PsIsThreadInSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140691B00 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpAddNamespaceNodeToList @ 0x140691BB0 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140692514 (VrpCreateNamespaceNode.c)
 *     VRegEnabledInJob @ 0x1406928FC (VRegEnabledInJob.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x1407F6410 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  unsigned __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // rdi
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int JobSilo; // ebx
  int v16; // edi
  unsigned __int64 v17; // rax
  int v18; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v20; // eax
  char v21; // r15
  unsigned __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int128 v26; // [rsp+60h] [rbp-10h] BYREF

  Object = 0LL;
  v23 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  v11 = *(unsigned __int16 *)(a1 + 8);
  if ( (v11 & 1) != 0 || (v12 = *(unsigned __int16 *)(a1 + 10), (v12 & 1) != 0) )
  {
    JobSilo = -1073741811;
    goto LABEL_26;
  }
  if ( !(_WORD)v11 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v12 )
    return (unsigned int)-1073741811;
  v13 = v11 + 20;
  v14 = v13 + v12;
  if ( v13 > v14 || a2 < v14 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 12);
    *((_QWORD *)&v26 + 1) = a1 + 20;
    v17 = *(unsigned __int16 *)(a1 + 8);
    WORD1(v26) = v17;
    LOWORD(v26) = v17;
    *((_QWORD *)&v25 + 1) = a1 + 2 * ((v17 >> 1) + 10);
    LOWORD(v17) = *(_WORD *)(a1 + 10);
    v18 = *(_DWORD *)(a1 + 16);
    WORD1(v25) = v17;
    LOWORD(v25) = v17;
    if ( (v16 & 7) != v16 )
      goto LABEL_24;
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_20;
    if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
    {
LABEL_24:
      JobSilo = -1073741811;
    }
    else
    {
      v24 = 0LL;
      VRegEnabledInJob(&v24);
      JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, &v23);
      if ( JobSilo >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v8 = v23;
        ExAcquirePushLockExclusiveEx(v23 + 16, 0LL);
        v9 = 1;
        v20 = VrpCreateNamespaceNode(v8, &v26, v24, &v25, v16, v18, &a5);
        v10 = a5;
        JobSilo = v20;
        if ( v20 >= 0 )
        {
          JobSilo = VrpAddNamespaceNodeToList(v8, a5);
          if ( JobSilo >= 0 )
          {
            JobSilo = VrpCreateNamespaceNodePlaceholderKey(v10);
            if ( JobSilo >= 0 )
            {
              JobSilo = 0;
LABEL_18:
              v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL);
              if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
                ExfTryToWakePushLock(v8 + 16);
              KeAbPostRelease(v8 + 16);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              goto LABEL_20;
            }
          }
        }
LABEL_26:
        if ( v10 )
          VrpDestroyNamespaceNode(v8, v10);
        if ( !v9 )
          goto LABEL_20;
        goto LABEL_18;
      }
    }
  }
LABEL_20:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
