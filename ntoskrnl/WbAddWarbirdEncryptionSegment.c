/*
 * XREFs of WbAddWarbirdEncryptionSegment @ 0x14075554C
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x140755824 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     sub_140754FC0 @ 0x140754FC0 (sub_140754FC0.c)
 *     sub_140755994 @ 0x140755994 (sub_140755994.c)
 *     sub_1407559C8 @ 0x1407559C8 (sub_1407559C8.c)
 *     sub_140755BBC @ 0x140755BBC (sub_140755BBC.c)
 */

__int64 __fastcall WbAddWarbirdEncryptionSegment(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  unsigned __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  int v13; // ebx
  char v14; // si
  struct _KTHREAD *v15; // rax
  bool v16; // zf
  __int64 v18; // rdx
  int v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+4Ch] [rbp-14h]

  v3 = *(_DWORD *)(a2 + 24);
  v4 = (unsigned __int64 *)(a1 + 176);
  v23 = 0;
  v20 = 0LL;
  v19 = 0;
  v22 = v3;
  v21 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire(a1 + 176, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v9, (__int64)v4);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  v11 = sub_1407559C8(a1, &v21, &v20, &v19);
  v13 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741198 )
    {
      v13 = sub_140754FC0(a1 + 136, a2, v12, (__int64)&v21, 0x10u, v19);
      if ( v13 >= 0 )
        v13 = sub_140755BBC(a2);
    }
  }
  else if ( a3 )
  {
    sub_140755BBC(v20);
    v20 = 0LL;
    *a3 = v18;
  }
  sub_140755994(v20);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v15 = KeGetCurrentThread();
  v16 = v15->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v13;
}
