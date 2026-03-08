/*
 * XREFs of WbGetWarbirdEncryptionSegment @ 0x140755824
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x140755694 (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     sub_1407554B8 @ 0x1407554B8 (sub_1407554B8.c)
 *     WbAddWarbirdEncryptionSegment @ 0x14075554C (WbAddWarbirdEncryptionSegment.c)
 *     sub_140755994 @ 0x140755994 (sub_140755994.c)
 *     sub_1407559C8 @ 0x1407559C8 (sub_1407559C8.c)
 */

__int64 __fastcall WbGetWarbirdEncryptionSegment(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rbx
  __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  char v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(a1 + 176);
  v18 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v16 = 0LL;
  v8 = KeAbPreAcquire(a1 + 176, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (__int64)v4);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = sub_1407559C8(a1, a2, &v18, &v17);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    v12 = sub_1407554B8(a2, &v18);
    v13 = v18;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_17;
    v9 = WbAddWarbirdEncryptionSegment(a1, v18, &v16);
    if ( v9 < 0 )
      goto LABEL_17;
    v14 = v16;
    if ( v16 )
    {
      sub_140755994(v13);
      v13 = v14;
    }
  }
  else
  {
    v13 = v18;
    if ( v9 < 0 )
      goto LABEL_17;
  }
  if ( a3 )
  {
    *a3 = v13;
    v13 = 0LL;
  }
LABEL_17:
  sub_140755994(v13);
  sub_140755994(v16);
  return (unsigned int)v9;
}
