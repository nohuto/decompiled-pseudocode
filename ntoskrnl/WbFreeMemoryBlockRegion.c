/*
 * XREFs of WbFreeMemoryBlockRegion @ 0x140773BBC
 * Callers:
 *     sub_140773AA8 @ 0x140773AA8 (sub_140773AA8.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall WbFreeMemoryBlockRegion(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE *i; // rax
  char v14; // bp
  struct _KTHREAD *v15; // rax
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 1072);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 1072, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = (unsigned __int64)(a2 - *(_QWORD *)(a1 + 32)) >> 6;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    v10 = (_BYTE *)(v9 + a1 + 44);
    do
    {
      if ( *v10 != 2 )
        break;
      --v10;
      --v9;
    }
    while ( v9 >= 0 );
    v11 = v9 + 1;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (unsigned int)v8;
  for ( i = (_BYTE *)((unsigned int)v8 + a1 + 44); *i == 2; ++i )
    ++v12;
  if ( v11 <= v12 )
    memset((void *)(a1 + v11 + 44), 0, v12 - v11 + 1);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v15 = KeGetCurrentThread();
  v16 = v15->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
