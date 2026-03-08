/*
 * XREFs of WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140770D60
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406AFAAC (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     sub_1406AFC38 @ 0x1406AFC38 (sub_1406AFC38.c)
 *     sub_140770F08 @ 0x140770F08 (sub_140770F08.c)
 */

void __fastcall WbReleaseLeastRecentlyUsedHeapExecutedBlocks(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned __int64 *v3; // rbp
  unsigned __int64 *v5; // rdi
  _QWORD *v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = (unsigned __int64 *)(a1 + 48);
    v5 = (unsigned __int64 *)(a1 + 80);
    v6 = (_QWORD *)(a1 + 64);
    do
    {
      CurrentThread = KeGetCurrentThread();
      --v2;
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((__int64)v3, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        ExfAcquirePushLockExclusiveEx(v3, v8, (__int64)v3);
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
      v10 = KeAbPreAcquire((__int64)v5, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v10, (__int64)v5);
      if ( v11 )
        *(_BYTE *)(v11 + 18) = 1;
      v12 = (_QWORD *)*v6;
      if ( (_QWORD *)*v6 == v6 )
      {
        v14 = 0LL;
      }
      else
      {
        if ( (_QWORD *)v12[1] != v6 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
          __fastfail(3u);
        v14 = 0LL;
        *v6 = v13;
        *(_QWORD *)(v13 + 8) = v6;
        if ( v12 )
        {
          *((_DWORD *)v12 + 4) &= ~1u;
          v14 = (__int64)v12;
        }
      }
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      if ( v14 )
      {
        v16 = *(_QWORD *)(v14 + 48);
        v20 = 0LL;
        if ( (int)sub_140770F08((int)a1 + 8, v16, 8, -1, (__int64)&v20) >= 0 )
          sub_1406AFC38(a1, v20);
      }
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      KeAbPostRelease((ULONG_PTR)v3);
      v18 = KeGetCurrentThread();
      v19 = v18->SpecialApcDisable++ == -1;
      if ( v19 && ($C71981A45BEB2B45F82C232A7085991E *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
        KiCheckForKernelApcDelivery();
      if ( !v14 )
        break;
      sub_1406AFC38(a1, v14);
    }
    while ( v2 > 0 );
  }
}
