/*
 * XREFs of PopWatchdogWorker @ 0x1403A0B60
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140256C68 (PopUpdateWatchdogNoWorkersEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     PopResolveWatchdogParam @ 0x1403A0D4C (PopResolveWatchdogParam.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmQuitNextSession @ 0x1407FCA70 (MmQuitNextSession.c)
 */

__int64 __fastcall PopWatchdogWorker(__int64 a1)
{
  char v2; // r12
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  ULONG_PTR SessionById; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  ULONG_PTR v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v16; // r15
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-69h]
  ULONG BugCheckCode[4]; // [rsp+50h] [rbp-59h]
  __int128 v30; // [rsp+60h] [rbp-49h]
  __int128 v31; // [rsp+70h] [rbp-39h]
  __int128 v32; // [rsp+80h] [rbp-29h]
  __int64 v33; // [rsp+90h] [rbp-19h]
  _OWORD v34[3]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = 0;
  memset(v34, 0, sizeof(v34));
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 216) && MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(a1 + 208) )
  {
    *(_OWORD *)BugCheckCode = *(_OWORD *)(a1 + 224);
    v30 = *(_OWORD *)(a1 + 240);
    v31 = *(_OWORD *)(a1 + 256);
    v33 = *(_QWORD *)(a1 + 288);
    v32 = *(_OWORD *)(a1 + 272);
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
          v21 = ~(unsigned __int16)v4;
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    if ( BugCheckCode[1] == -1 )
    {
      v6 = 0LL;
    }
    else
    {
      SessionById = MmGetSessionById(BugCheckCode[1]);
      v6 = SessionById;
      if ( SessionById && (int)MmAttachSession(SessionById) >= 0 )
        v2 = 1;
    }
    LOBYTE(v4) = v32;
    v7 = PopResolveWatchdogParam(v30, v4);
    LOBYTE(v8) = BYTE1(v32);
    v9 = v7;
    v10 = PopResolveWatchdogParam(*((_QWORD *)&v30 + 1), v8);
    LOBYTE(v11) = BYTE2(v32);
    v12 = v10;
    v13 = PopResolveWatchdogParam(v31, v11);
    LOBYTE(v14) = BYTE3(v32);
    BugCheckParameter3 = v13;
    BugCheckParameter4 = PopResolveWatchdogParam(*((_QWORD *)&v31 + 1), v14);
    if ( !*((_QWORD *)&v32 + 1) )
      KeBugCheckEx(BugCheckCode[2], v9, v12, BugCheckParameter3, BugCheckParameter4);
    (*((void (__fastcall **)(__int64, _QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR))&v32 + 1))(
      v33,
      BugCheckCode[2],
      v9,
      v12,
      BugCheckParameter3,
      BugCheckParameter4);
    v16 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v25 = v24->SchedulerAssist;
          v22 = ((unsigned int)result & v25[5]) == 0;
          v25[5] &= result;
          if ( v22 )
            result = KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(v16);
    if ( v2 )
    {
      MmDetachSession(v6, (__int64)v34);
      return MmQuitNextSession(v6);
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
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v22 = ((unsigned int)result & v27[5]) == 0;
          v27[5] &= result;
          if ( v22 )
            result = KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
