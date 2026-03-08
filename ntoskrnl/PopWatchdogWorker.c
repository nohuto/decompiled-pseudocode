/*
 * XREFs of PopWatchdogWorker @ 0x1403D0490
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BE330 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 *     PopResolveWatchdogParam @ 0x1403D0708 (PopResolveWatchdogParam.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmQuitNextSession @ 0x14087FF10 (MmQuitNextSession.c)
 */

__int64 __fastcall PopWatchdogWorker(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rdx
  struct _KPROCESS *SessionById; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  ULONG_PTR v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // r13
  __int64 v18; // rax
  __int64 InterruptTimePrecise; // rax
  void (__fastcall *QuadPart)(LARGE_INTEGER, _QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR); // r10
  unsigned __int64 v21; // r15
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  int v30; // eax
  _DWORD *v31; // r8
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  char v36; // [rsp+40h] [rbp-89h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-81h]
  LARGE_INTEGER v38[12]; // [rsp+50h] [rbp-79h] BYREF
  LARGE_INTEGER v39; // [rsp+B0h] [rbp-19h] BYREF
  LARGE_INTEGER v40; // [rsp+B8h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-9h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  memset(&v38[2], 0, 0x48uLL);
  v36 = 0;
  v39.QuadPart = 0LL;
  *(_QWORD *)(a1 + 360) = RtlGetInterruptTimePrecise(&v39);
  v2 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 208)
    && (v38[0].QuadPart = 0LL, (unsigned __int64)RtlGetInterruptTimePrecise(v38) >= *(_QWORD *)(a1 + 304)) )
  {
    v3 = *(_OWORD *)(a1 + 232);
    *(_OWORD *)&v38[2].LowPart = *(_OWORD *)(a1 + 216);
    v4 = *(_OWORD *)(a1 + 248);
    *(_OWORD *)&v38[4].LowPart = v3;
    v5 = *(_OWORD *)(a1 + 264);
    *(_OWORD *)&v38[6].LowPart = v4;
    v38[10] = *(LARGE_INTEGER *)(a1 + 280);
    *(_OWORD *)&v38[8].LowPart = v5;
    KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = -1LL << ((unsigned __int8)v2 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)v6;
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
    if ( v38[2].HighPart == -1 )
    {
      v8 = 0LL;
    }
    else
    {
      SessionById = (struct _KPROCESS *)MmGetSessionById((unsigned int)v38[2].HighPart, v6);
      v8 = (__int64)SessionById;
      if ( SessionById && (int)MmAttachSession(SessionById, &ApcState) >= 0 )
        v36 = 1;
    }
    LOBYTE(v6) = v38[8].LowPart;
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PopResolveWatchdogParam)((LARGE_INTEGER)v38[4].QuadPart, v6);
    LOBYTE(v10) = BYTE1(v38[8].LowPart);
    v11 = v9;
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PopResolveWatchdogParam)((LARGE_INTEGER)v38[5].QuadPart, v10);
    LOBYTE(v13) = BYTE2(v38[8].u.LowPart);
    v14 = v12;
    v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PopResolveWatchdogParam)((LARGE_INTEGER)v38[6].QuadPart, v13);
    LOBYTE(v16) = BYTE3(v38[8].QuadPart);
    v17 = v15;
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PopResolveWatchdogParam)((LARGE_INTEGER)v38[7].QuadPart, v16);
    v40.QuadPart = 0LL;
    BugCheckParameter4 = v18;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v40);
    QuadPart = (void (__fastcall *)(LARGE_INTEGER, _QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR))v38[9].QuadPart;
    *(_QWORD *)(a1 + 368) = InterruptTimePrecise;
    *(_BYTE *)(a1 + 209) = 1;
    if ( !QuadPart )
      KeBugCheckEx(v38[3].LowPart, v11, v14, v17, BugCheckParameter4);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))QuadPart)(
      (LARGE_INTEGER)v38[10].QuadPart,
      v38[3].LowPart,
      v11,
      v14,
      v17,
      BugCheckParameter4);
    v21 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v31 = v29->SchedulerAssist;
        v27 = (v30 & v31[5]) == 0;
        v31[5] &= v30;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v21);
    if ( v36 )
    {
      MmDetachSession(v8, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      MmQuitNextSession(v8);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
    if ( KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v27 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8(v2);
  }
  result = RtlGetInterruptTimePrecise(v38);
  *(_QWORD *)(a1 + 376) = result;
  return result;
}
