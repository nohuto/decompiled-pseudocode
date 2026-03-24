/*
 * XREFs of PopWatchdogWorker @ 0x140578E70
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x140206410 (MmGetSessionById.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140280840 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MmDetachSession @ 0x140298F40 (MmDetachSession.c)
 *     MmAttachSession @ 0x140298FE0 (MmAttachSession.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PopResolveWatchdogParam @ 0x140578D6C (PopResolveWatchdogParam.c)
 *     MmQuitNextSession @ 0x1406C3770 (MmQuitNextSession.c)
 */

__int64 __fastcall PopWatchdogWorker(__int64 a1)
{
  bool v2; // r12
  unsigned __int64 v3; // r14
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  _KPROCESS *SessionById; // r14
  ULONG_PTR v11; // r13
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v13; // r13
  __int64 result; // rax
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  __int64 BugCheckParameter3; // [rsp+40h] [rbp-69h]
  __int64 BugCheckParameter2; // [rsp+48h] [rbp-61h]
  ULONG BugCheckCode[4]; // [rsp+50h] [rbp-59h]
  __int128 v23; // [rsp+60h] [rbp-49h]
  __int128 v24; // [rsp+70h] [rbp-39h]
  __int128 v25; // [rsp+80h] [rbp-29h]
  __int64 v26; // [rsp+90h] [rbp-19h]
  _OWORD v27[3]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = 0;
  memset(v27, 0, sizeof(v27));
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 216) && MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(a1 + 208) )
  {
    *(_OWORD *)BugCheckCode = *(_OWORD *)(a1 + 224);
    v23 = *(_OWORD *)(a1 + 240);
    v24 = *(_OWORD *)(a1 + 256);
    v26 = *(_QWORD *)(a1 + 288);
    v25 = *(_OWORD *)(a1 + 272);
    KxReleaseSpinLock(&PopWatchdogLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v4 = -1LL << ((unsigned __int8)v3 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)v4;
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    if ( BugCheckCode[1] == -1 )
      SessionById = 0LL;
    else
      SessionById = (_KPROCESS *)MmGetSessionById(BugCheckCode[1], v4);
    if ( SessionById )
      v2 = (int)MmAttachSession(SessionById, (__int64)v27) >= 0;
    v11 = PopResolveWatchdogParam(v23, v25);
    BugCheckParameter2 = PopResolveWatchdogParam(*((__int64 *)&v23 + 1), SBYTE1(v25));
    BugCheckParameter3 = PopResolveWatchdogParam(v24, SBYTE2(v25));
    BugCheckParameter4 = PopResolveWatchdogParam(*((__int64 *)&v24 + 1), SBYTE3(v25));
    if ( !*((_QWORD *)&v25 + 1) )
      KeBugCheckEx(BugCheckCode[2], v11, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
    (*((void (__fastcall **)(__int64, _QWORD, ULONG_PTR, __int64, __int64, ULONG_PTR))&v25 + 1))(
      v26,
      BugCheckCode[2],
      v11,
      BugCheckParameter2,
      BugCheckParameter3,
      BugCheckParameter4);
    v13 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v17 = v16->SchedulerAssist;
          v9 = ((unsigned int)result & v17[5]) == 0;
          v17[5] &= result;
          if ( v9 )
            result = KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
    }
    __writecr8(v13);
    if ( v2 )
    {
      MmDetachSession((__int64)SessionById, (__int64)v27);
      return MmQuitNextSession(SessionById);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v9 = ((unsigned int)result & v19[5]) == 0;
          v19[5] &= result;
          if ( v9 )
            result = KiRemoveSystemWorkPriorityKick((__int64)v18);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
