/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x140736B44
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
 *     VRegEnabledInJob @ 0x140736F40 (VRegEnabledInJob.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140736FA0 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpAddNamespaceNodeToList @ 0x140737050 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140737134 (VrpDestroyNamespaceNode.c)
 *     VrpCreateNamespaceNode @ 0x140737348 (VrpCreateNamespaceNode.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  int v9; // r13d
  __int64 v10; // rdi
  int v11; // eax
  int v12; // edx
  unsigned int v13; // edx
  int JobSilo; // ebx
  int v15; // r12d
  unsigned __int64 v16; // rax
  int v17; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  char v24; // r15
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int128 v29; // [rsp+60h] [rbp-10h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+48h] BYREF

  Object = 0LL;
  a5 = 0LL;
  v30 = 0LL;
  a6 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( a2 < 0x18 )
    goto LABEL_29;
  v11 = *(unsigned __int16 *)(a1 + 8);
  if ( (v11 & 1) != 0 || (v12 = *(unsigned __int16 *)(a1 + 10), (v12 & 1) != 0) )
  {
    JobSilo = -1073741811;
  }
  else
  {
    if ( !(_WORD)v11 )
      goto LABEL_29;
    if ( !(_WORD)v12 )
      goto LABEL_29;
    v13 = v11 + 20 + v12;
    if ( v11 + 20 > v13 || a2 < v13 )
      goto LABEL_29;
    JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      v15 = *(_DWORD *)(a1 + 12);
      *((_QWORD *)&v29 + 1) = a1 + 20;
      v16 = *(unsigned __int16 *)(a1 + 8);
      WORD1(v29) = v16;
      LOWORD(v29) = v16;
      *((_QWORD *)&v28 + 1) = a1 + 2 * ((v16 >> 1) + 10);
      LOWORD(v16) = *(_WORD *)(a1 + 10);
      v17 = *(_DWORD *)(a1 + 16);
      WORD1(v28) = v16;
      LOWORD(v28) = v16;
      if ( (v15 & 7) != v15 )
        goto LABEL_29;
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        if ( !PsIsThreadInSilo((__int64)KeGetCurrentThread(), a6) )
        {
          v27 = 0LL;
          VRegEnabledInJob(&v27);
          JobSilo = PsGetPermanentSiloContext(a6, VrpSiloContextSlot, (unsigned __int64 *)&a5);
          if ( JobSilo < 0 )
          {
            v8 = a5;
            v10 = v30;
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            v19 = (unsigned __int64 *)(a5 + 16);
            v20 = a5 + 16;
            --CurrentThread->KernelApcDisable;
            v21 = KeAbPreAcquire(v20, 0LL);
            v22 = v21;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
              ExfAcquirePushLockExclusiveEx(v19, v21, (__int64)v19);
            if ( v22 )
              *(_BYTE *)(v22 + 18) = 1;
            v8 = a5;
            v9 = 1;
            v23 = VrpCreateNamespaceNode(a5, &v29, v27, &v28, v15, v17, &v30);
            v10 = v30;
            JobSilo = v23;
            if ( v23 >= 0 )
            {
              JobSilo = VrpAddNamespaceNodeToList(v8, v30);
              if ( JobSilo >= 0 )
              {
                JobSilo = VrpCreateNamespaceNodePlaceholderKey(v10);
                if ( JobSilo >= 0 )
                {
                  JobSilo = 0;
                  v30 = 0LL;
                  v10 = 0LL;
                }
              }
            }
          }
          goto LABEL_21;
        }
LABEL_29:
        JobSilo = -1073741811;
        goto LABEL_26;
      }
    }
  }
LABEL_21:
  if ( v10 )
    VrpDestroyNamespaceNode(v8, v10);
  if ( v9 )
  {
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_26:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
