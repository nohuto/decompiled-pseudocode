/*
 * XREFs of VmpPinMemoryRange @ 0x1405F7F20
 * Callers:
 *     VmPinMemoryRange @ 0x1409D9AF0 (VmPinMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VmpProcessContextLockExclusive @ 0x14045E6CE (VmpProcessContextLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VmAccessFault @ 0x1409D9200 (VmAccessFault.c)
 *     VmpLockMemoryForPin @ 0x1409DA418 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA9F0 (VmpUnlockMemoryForPin.c)
 */

__int64 __fastcall VmpPinMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int8 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  bool v14; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  int v19; // edi
  __int64 v20; // rax
  int v21; // ecx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  __int64 v29; // [rsp+50h] [rbp-29h] BYREF
  BOOL v30; // [rsp+58h] [rbp-21h]
  unsigned __int64 v31; // [rsp+60h] [rbp-19h]
  __int128 v32; // [rsp+68h] [rbp-11h] BYREF

  v28 = 0LL;
  v32 = 0LL;
  v31 = a2;
  v29 = a3;
  v9 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a6 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v10 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v10 )
    v10 ^= (unsigned __int64)(SpinLock + 2);
  while ( v10 )
  {
    if ( a2 <= *(_QWORD *)(v10 + 32) )
    {
      if ( a2 >= *(_QWORD *)(v10 + 24) )
        break;
      v11 = *(_QWORD *)v10;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 8);
    }
    if ( (SpinLock[4] & 1) != 0 && v11 )
      v10 ^= v11;
    else
      v10 = v11;
  }
  if ( !v10 || (v12 = (_QWORD *)(v10 - 24), v10 == 24) )
    NT_ASSERT("GpaMemoryRange != ((void *)0)");
  if ( v12[6] != a2 )
    NT_ASSERT("GpaMemoryRange->StartGpn == StartGpn");
  if ( v12[7] != a4 + a2 - 1 )
    NT_ASSERT("GpaMemoryRange->LastGpn == (StartGpn + SizeInPages - 1)");
  if ( (v12[8] & 1) != 0 )
    NT_ASSERT("GpaMemoryRange->Pinned == 0");
  v13 = v12[2];
  if ( *(_QWORD *)(v13 + 24) != v29 )
    NT_ASSERT("VaMemoryRange->StartVpn == StartVpn");
  v14 = *(_QWORD *)(v13 + 56) == 0LL;
  v30 = (a5 & 2) != 0;
  if ( !v14 )
    goto LABEL_47;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v14 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  v19 = VmpLockMemoryForPin((_DWORD)SpinLock, v29, a4, (a5 & 2) != 0, (__int64)&v28);
  if ( v19 >= 0 )
  {
    v9 = VmpProcessContextLockExclusive(SpinLock);
    if ( (v12[8] & 1) != 0 )
      NT_ASSERT("GpaMemoryRange->Pinned == 0");
    if ( !*(_QWORD *)(v13 + 56) )
    {
      v20 = v28;
      v28 = 0LL;
      *(_QWORD *)(v13 + 56) = v20;
      if ( (a5 & 2) != 0 )
      {
        *(_DWORD *)(v13 + 64) |= 1u;
LABEL_41:
        v21 = 0;
LABEL_42:
        if ( v21 != ((*(_DWORD *)(v13 + 64) & 1) == 0) )
          NT_ASSERT("0");
        *((_DWORD *)v12 + 16) |= 1u;
        ++*((_QWORD *)SpinLock + 5);
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          v23 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && v9 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v14 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
        __writecr8(v9);
        *(_QWORD *)&v32 = v31;
        *((_QWORD *)&v32 + 1) = a4;
        VmAccessFault(&v32, &v29, 1LL, a5, 0, 0, a6);
        v19 = 0;
        goto LABEL_44;
      }
LABEL_48:
      v21 = 1;
      goto LABEL_42;
    }
LABEL_47:
    if ( (a5 & 2) != 0 )
      goto LABEL_41;
    goto LABEL_48;
  }
LABEL_44:
  if ( v28 )
    VmpUnlockMemoryForPin(SpinLock, v28);
  return (unsigned int)v19;
}
