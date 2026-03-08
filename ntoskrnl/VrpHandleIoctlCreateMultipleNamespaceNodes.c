/*
 * XREFs of VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A6F45C
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
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlCreateMultipleNamespaceNodes(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 v7; // r13
  int v8; // r12d
  unsigned __int64 v9; // r14
  int JobSilo; // esi
  unsigned __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // esi
  _QWORD *Pool2; // rax
  _QWORD *v25; // r15
  void *v26; // r8
  _QWORD *v27; // r14
  __int64 v28; // rdx
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  void *v31; // [rsp+50h] [rbp-30h] BYREF
  __int64 v32; // [rsp+58h] [rbp-28h] BYREF
  __int128 v33; // [rsp+60h] [rbp-20h] BYREF
  __int128 v34; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+58h]
  int v38; // [rsp+E0h] [rbp+60h]

  v6 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  a6 = 0LL;
  v8 = 0;
  v9 = 12LL;
  if ( a2 < 0xC )
    goto LABEL_2;
  ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  JobSilo = PsGetJobSilo((__int64)Object);
  if ( JobSilo >= 0 )
  {
    if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
    {
LABEL_2:
      JobSilo = -1073741811;
      goto LABEL_44;
    }
    v31 = (void *)v11;
    VRegEnabledInJob((unsigned __int64 *)&v31);
    JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a6);
    if ( JobSilo < 0 )
    {
      v7 = a6;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v13 = (unsigned __int64 *)(a6 + 16);
      v14 = a6 + 16;
      --CurrentThread->KernelApcDisable;
      v15 = KeAbPreAcquire(v14, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
        ExfAcquirePushLockExclusiveEx(v13, v15, (__int64)v13);
      v8 = 1;
      if ( v16 )
        *(_BYTE *)(v16 + 18) = 1;
      v17 = a1;
      v7 = a6;
      v37 = 0;
      if ( *(_DWORD *)(a1 + 8) )
      {
        do
        {
          v18 = v9 + v17;
          v32 = 0LL;
          v19 = v9 + 12;
          v34 = 0LL;
          v33 = 0LL;
          if ( v9 >= v9 + 12 )
            goto LABEL_33;
          if ( a2 < v19 )
            goto LABEL_33;
          v20 = *(unsigned __int16 *)(v18 + 4);
          if ( (v20 & 1) != 0 )
            goto LABEL_33;
          if ( !(_WORD)v20 )
            goto LABEL_33;
          v21 = v20 + v19;
          if ( v19 > v20 + v19 )
            goto LABEL_33;
          v22 = *(unsigned __int16 *)(v18 + 6);
          if ( (v22 & 1) != 0 )
            goto LABEL_33;
          if ( !(_WORD)v22 )
            goto LABEL_33;
          v9 = v21 + v22;
          if ( v21 > v21 + v22 )
            goto LABEL_33;
          if ( a2 < v9 )
            goto LABEL_33;
          v23 = *(_DWORD *)(v18 + 8);
          *((_QWORD *)&v34 + 1) = v18 + 12;
          WORD1(v34) = v20;
          LOWORD(v34) = v20;
          WORD1(v33) = v22;
          LOWORD(v33) = v22;
          *((_QWORD *)&v33 + 1) = v18 + 2 * (((unsigned __int64)(unsigned int)v20 >> 1) + 6);
          v38 = *(_DWORD *)v18;
          if ( (v23 & 7) != v23 )
          {
LABEL_33:
            JobSilo = -1073741811;
            goto LABEL_35;
          }
          Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 1734693462LL);
          v25 = Pool2;
          if ( !Pool2 )
          {
            JobSilo = -1073741670;
            goto LABEL_35;
          }
          v26 = v31;
          *Pool2 = v6;
          Pool2[1] = 0LL;
          v6 = Pool2;
          JobSilo = VrpCreateNamespaceNode(v7, (unsigned __int16 *)&v34, v26, (unsigned __int16 *)&v33, v23, v38, &v32);
          if ( JobSilo < 0 )
            goto LABEL_36;
          v6[1] = v32;
          v17 = a1;
          ++v37;
        }
        while ( v37 < *(_DWORD *)(a1 + 8) );
        v27 = v6;
        do
        {
          JobSilo = VrpAddNamespaceNodeToList((unsigned __int64 *)v7, v25[1]);
          if ( JobSilo < 0 )
          {
            v25 = v6;
            goto LABEL_36;
          }
          v25 = (_QWORD *)*v25;
        }
        while ( v25 );
        v25 = v6;
        do
        {
          JobSilo = VrpCreateNamespaceNodePlaceholderKey(v27[1]);
          if ( JobSilo < 0 )
            goto LABEL_36;
          v27 = (_QWORD *)*v27;
        }
        while ( v27 );
      }
      JobSilo = 0;
    }
  }
LABEL_35:
  while ( 1 )
  {
    v25 = v6;
    if ( !v6 )
      break;
LABEL_36:
    v6 = (_QWORD *)*v6;
    if ( JobSilo < 0 )
    {
      v28 = v25[1];
      if ( v28 )
        VrpDestroyNamespaceNode((size_t *)v7, v28);
    }
    ExFreePoolWithTag(v25, 0x67655256u);
  }
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16));
    KeAbPostRelease(v7 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_44:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
