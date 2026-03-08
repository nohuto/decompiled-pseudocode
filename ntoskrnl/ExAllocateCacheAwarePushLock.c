/*
 * XREFs of ExAllocateCacheAwarePushLock @ 0x1403A28D0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1402AE860 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExFreeCacheAwarePushLock @ 0x140607530 (ExFreeCacheAwarePushLock.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 *__fastcall ExAllocateCacheAwarePushLock(char a1)
{
  char v1; // r15
  unsigned __int64 v2; // rbx
  __int64 *Pool2; // rdi
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ebp
  __int64 *v11; // r13
  struct _KPRCB *v12; // rax
  USHORT v13; // cx
  __int64 Pool3; // rax
  unsigned int v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+38h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-40h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-30h] BYREF

  v1 = 0;
  Affinity = 0LL;
  v2 = (-(__int64)((a1 & 1) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  v16 = 0LL;
  PreviousAffinity = 0LL;
  Pool2 = (__int64 *)ExAllocatePool2(v2, 256LL, 1885563984LL);
  if ( !Pool2 )
    return 0LL;
  if ( KeNumberNodes == 1 )
  {
    v4 = ExAllocatePool2(v2, 4096LL, 1818455120LL);
    if ( v4 )
    {
      v5 = Pool2;
      v6 = 32LL;
      do
      {
        *(_QWORD *)v4 = 0LL;
        *(_BYTE *)(v4 + 8) = 1;
        *(_QWORD *)(v4 + 16) = Pool2;
        *v5 = v4;
        v4 += 128LL;
        ++v5;
        --v6;
      }
      while ( v6 );
      return Pool2;
    }
    v7 = 0LL;
LABEL_28:
    ExFreeCacheAwarePushLock(Pool2);
    return v7;
  }
  v9 = KeNumberProcessors_0;
  v10 = 0;
  v15 = KeNumberProcessors_0;
  v11 = Pool2;
  while ( 1 )
  {
    v12 = v10 >= v9 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v10);
    v13 = v12->SchedulerSubNode->Affinity.Reserved[0];
    if ( (v2 & 0x40) != 0 )
    {
      LOBYTE(v16) = 3;
      DWORD2(v16) = v13 | 0x80000000;
      Pool3 = ExAllocatePool3(v2, 128, 1818455120, (unsigned int)&v16, 1);
    }
    else
    {
      KeQueryNodeActiveAffinity(v13, &Affinity, 0LL);
      if ( v1 )
      {
        KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      }
      else
      {
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v1 = 1;
      }
      Pool3 = ExAllocatePool2(v2, 128LL, 1818455120LL);
    }
    if ( !Pool3 )
      break;
    *(_QWORD *)Pool3 = 0LL;
    ++v10;
    *(_BYTE *)(Pool3 + 8) = 0;
    *(_QWORD *)(Pool3 + 16) = Pool2;
    *v11++ = Pool3;
    if ( v10 >= 0x20 )
    {
      v7 = Pool2;
      Pool2 = 0LL;
      goto LABEL_25;
    }
    v9 = v15;
  }
  v7 = 0LL;
LABEL_25:
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( Pool2 )
    goto LABEL_28;
  return v7;
}
