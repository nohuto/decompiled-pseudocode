/*
 * XREFs of VmpQueryAccessedState @ 0x14062B7FC
 * Callers:
 *     MiQueryEPTAccessedState @ 0x14045BCA2 (MiQueryEPTAccessedState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockShared @ 0x14045F804 (VmpProcessContextLockShared.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x140629368 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpProcessAccessedBatch @ 0x14062B464 (VmpProcessAccessedBatch.c)
 */

unsigned __int64 __fastcall VmpQueryAccessedState(PEX_SPIN_LOCK SpinLock, unsigned __int64 *a2, int a3, int a4)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 *v6; // r14
  __int64 v7; // rdi
  unsigned __int64 *v8; // r12
  unsigned __int8 v9; // r15
  unsigned __int64 *v10; // r12
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
  unsigned __int64 result; // rax
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h]
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
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
      VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, &v25, 0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v27, &v24, 0);
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
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v15 = ~(unsigned __int16)(-1LL << (v9 + 1));
                v16 = (v15 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v15;
                if ( v16 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v9);
          VmpProcessAccessedBatch((__int64)SpinLock, (__int64)v29, v7, v6, a4);
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
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && v9 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v16 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
  }
  result = v9;
  __writecr8(v9);
  if ( (_DWORD)v7 )
    return VmpProcessAccessedBatch((__int64)SpinLock, (__int64)v29, v7, &v4[-(unsigned int)v7], a4);
  return result;
}
