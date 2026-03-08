/*
 * XREFs of WbGetInitializedEncryptionSegment @ 0x140755694
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1407552F8 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407553D8 (WbDecryptEncryptionSegment.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WbInitializeEncryptionSegment @ 0x140752A00 (WbInitializeEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140755824 (WbGetWarbirdEncryptionSegment.c)
 *     sub_140755994 @ 0x140755994 (sub_140755994.c)
 *     WbValidateEncryptionSegmentArguments @ 0x140755A20 (WbValidateEncryptionSegmentArguments.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbGetInitializedEncryptionSegment(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rbx
  int WarbirdEncryptionSegment; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  char v14; // r14
  struct _KTHREAD *v15; // rax
  bool v16; // zf
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  *(_OWORD *)P = 0LL;
  WarbirdEncryptionSegment = WbValidateEncryptionSegmentArguments(a2, a3, P, &v21);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_19;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, &v21, &v18);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_24;
  v7 = v18;
  if ( !*(_DWORD *)(v18 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (unsigned __int64 *)(v18 + 8);
    v11 = v18 + 8;
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire(v11, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v12, (__int64)v10);
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v20 = *(_OWORD *)P;
      WarbirdEncryptionSegment = WbInitializeEncryptionSegment((int *)&v20, a2, v18);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    v15 = KeGetCurrentThread();
    v16 = v15->SpecialApcDisable++ == -1;
    if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery();
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v7 = v18;
      goto LABEL_16;
    }
LABEL_24:
    v7 = v18;
    goto LABEL_19;
  }
LABEL_16:
  WarbirdEncryptionSegment = *(_DWORD *)(v7 + 20);
  if ( WarbirdEncryptionSegment >= 0 && a4 )
  {
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_19:
  sub_140755994(v7);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)WarbirdEncryptionSegment;
}
