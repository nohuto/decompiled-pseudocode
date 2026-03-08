/*
 * XREFs of VmpQueryAccessedState @ 0x14045E7BA
 * Callers:
 *     MiQueryEPTAccessedState @ 0x140463B2C (MiQueryEPTAccessedState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VmpProcessContextLockShared @ 0x14045E744 (VmpProcessContextLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1405F68BC (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpProcessAccessedBatch @ 0x1405F854C (VmpProcessAccessedBatch.c)
 */

__int64 __fastcall VmpQueryAccessedState(PEX_SPIN_LOCK SpinLock, _QWORD *a2, int a3, int a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  _QWORD *v8; // r12
  unsigned __int8 v9; // r15
  _QWORD *v10; // r12
  __int64 v11; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // r10
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h]
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  _QWORD v29[32]; // [rsp+80h] [rbp-80h] BYREF

  v28 = 0LL;
  v4 = a2;
  v24 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = &a2[a3];
  v23 = (unsigned __int64)v8;
  v27 = 0LL;
  v9 = VmpProcessContextLockShared(SpinLock);
  if ( v4 < v8 )
  {
    do
    {
      v25 = *v4 >> 12;
      v26 = 1LL;
      v10 = v6;
      VmpConvertPortionVpnRangeToGpnRange(
        (_DWORD)SpinLock,
        (unsigned int)&v25,
        -1,
        (unsigned int)&v27,
        (__int64)&v24,
        0);
      if ( *((_QWORD *)&v24 + 1) )
      {
        v6 = v4;
        v29[v7] = v24;
        v7 = (unsigned int)(v7 + 1);
        if ( (_DWORD)v7 != 1 )
          v6 = v10;
        if ( v26 )
        {
          --v4;
LABEL_10:
          v11 = *((_QWORD *)SpinLock + 5);
          ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << (v9 + 1));
              v16 = (v15 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v15;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v9);
          VmpProcessAccessedBatch((_DWORD)SpinLock, (unsigned int)v29, v7, (_DWORD)v6, a4);
          v7 = 0LL;
          v9 = VmpProcessContextLockShared(SpinLock);
          if ( v11 != *((_QWORD *)SpinLock + 5) )
          {
            v27 = 0LL;
            v28 = 0LL;
          }
          goto LABEL_19;
        }
        if ( (_DWORD)v7 == 32 )
          goto LABEL_10;
      }
      else
      {
        *v4 |= 6uLL;
        if ( (_DWORD)v7 )
          goto LABEL_10;
      }
LABEL_19:
      ++v4;
    }
    while ( (unsigned __int64)v4 < v23 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && v9 <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v16 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  result = v9;
  __writecr8(v9);
  if ( (_DWORD)v7 )
    return VmpProcessAccessedBatch((_DWORD)SpinLock, (unsigned int)v29, v7, (int)v4 - 8 * (int)v7, a4);
  return result;
}
