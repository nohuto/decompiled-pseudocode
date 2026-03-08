/*
 * XREFs of HalpTimerConfigureInterrupt @ 0x140379C34
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x140377960 (HalpTimerInitializeProfiling.c)
 *     HalpTimerPrepareClockInterrupt @ 0x140379B9C (HalpTimerPrepareClockInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403AC5D0 (HalpTimerInitializeClock.c)
 *     HalpTimerTestHypervisorTimer @ 0x140508908 (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402A9460 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptIsMsiSupported @ 0x14037D4DC (HalpInterruptIsMsiSupported.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpInterruptLineToGsi @ 0x140503150 (HalpInterruptLineToGsi.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x140507398 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerUnmapInterrupt @ 0x1405074D0 (HalpTimerUnmapInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpTimerConfigureInterrupt(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        __int64 a8)
{
  __int128 v11; // xmm0
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  int v15; // edi
  int v16; // eax
  __int64 InternalData; // rax
  int v18; // r8d
  int v19; // r9d
  int v20; // edi
  unsigned int *v22; // rax
  int v23; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  bool v37; // zf
  unsigned int v38; // [rsp+38h] [rbp-B1h]
  __int64 v39; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v40[2]; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v41; // [rsp+50h] [rbp-99h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+58h] [rbp-91h]
  int v43; // [rsp+5Ch] [rbp-8Dh]
  __int128 *v44; // [rsp+60h] [rbp-89h]
  __int128 v45; // [rsp+68h] [rbp-81h] BYREF
  _QWORD v46[12]; // [rsp+80h] [rbp-69h] BYREF

  v43 = 0;
  v39 = 0LL;
  v41 = 6LL;
  v45 = 0LL;
  memset(v46, 0, 0x58uLL);
  v11 = *a7;
  HIDWORD(v46[0]) = a2;
  LOBYTE(v46[1]) = a3;
  LODWORD(v46[5]) = a6 & 0x3FFFFFFF | v46[5] & 0xC0000000 | 0x40000000;
  *(_OWORD *)&v46[3] = v11;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a7);
  v44 = &v45;
  v15 = -1073741637;
  LODWORD(v45) = a6 & 0x3FFFFFFF;
  v16 = *(_DWORD *)(a1 + 224);
  if ( (v16 & 0x800) != 0 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 168))(InternalData, a2);
    LOBYTE(v18) = a3;
    HalpInterruptSetIdtEntry(a2, a8, v18, v19, a5);
    return 0;
  }
  if ( (v16 & 0x400) != 0 )
  {
    LOBYTE(v12) = 1;
    if ( (unsigned __int8)HalpInterruptIsMsiSupported(v12) )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0x50) != 0x40 )
      {
        LOBYTE(v13) = a3;
        HalpInterruptSetIdtEntry(a2, a8, v13, v14, a5);
        if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
        {
          v22 = *(unsigned int **)(a1 + 288);
          HIDWORD(v46[1]) = 0;
          LODWORD(v46[0]) = 3;
          LODWORD(v46[2]) = 1;
          v15 = HalpInterruptRemap(*v22, v22[1], (__int64)(v22 + 2), 0, (unsigned int *)v46, 1u);
          if ( v15 < 0 )
            goto LABEL_13;
          v23 = HIDWORD(v46[5]);
          *(_DWORD *)(a1 + 184) |= 0x40u;
          *(_DWORD *)(a1 + 236) = v23;
          *(_DWORD *)(a1 + 232) = v46[6];
          *(_QWORD *)(a1 + 240) = HIDWORD(v46[6]);
        }
        v15 = HalpTimerSetupMessageInterruptRouting(a1);
        if ( v15 >= 0 )
        {
          *(_DWORD *)(a1 + 184) |= 0x10u;
          return 0;
        }
        LOBYTE(v24) = 1;
        HalpTimerUnmapInterrupt(a1, a2, a6, v24);
      }
    }
  }
LABEL_13:
  v25 = *(_DWORD *)(a1 + 224);
  if ( (v25 & 0x200) != 0 )
  {
    v26 = HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), &v39);
    v20 = v26;
    if ( v26 < 0 )
    {
      HalpTimerLastProblem = 16;
      *(_DWORD *)(a1 + 252) = 16;
      *(_DWORD *)(a1 + 256) = v26;
      *(_DWORD *)(a1 + 272) = 356;
LABEL_45:
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      return (unsigned int)v20;
    }
    v27 = (_DWORD *)(a1 + 92);
  }
  else
  {
    if ( (v25 & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 256) = v15;
      v30 = 17;
      v20 = -1073741811;
      *(_DWORD *)(a1 + 272) = 371;
      goto LABEL_44;
    }
    v28 = *(_DWORD *)(a1 + 84);
    if ( v28 >= 8 )
    {
      LODWORD(v39) = 45057;
      v28 -= 8;
    }
    else
    {
      LODWORD(v39) = 45056;
    }
    v27 = (_DWORD *)(a1 + 92);
    HIDWORD(v39) = v28;
    if ( !*(_DWORD *)(a1 + 92) )
    {
      *v27 = 1;
      *(_DWORD *)(a1 + 96) = 1;
    }
  }
  LOBYTE(v13) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v13, v14, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
    goto LABEL_28;
  v29 = HalpTimerGetInternalData(a1);
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 152))(v29, 0LL, 0LL, 0LL);
  if ( v20 < 0 )
  {
    v30 = 24;
    *(_DWORD *)(a1 + 256) = v20;
    *(_DWORD *)(a1 + 272) = 398;
LABEL_44:
    *(_DWORD *)(a1 + 252) = v30;
    HalpTimerLastProblem = v30;
    goto LABEL_45;
  }
  *(_DWORD *)(a1 + 184) &= ~0x10u;
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
  {
LABEL_28:
    if ( a2 == 209 )
    {
      HalpTimerCriticalClockSource = v39;
      HalpTimerCriticalClockSourceCount = 1;
    }
  }
  v31 = *(_DWORD *)(a1 + 96);
  LODWORD(v46[0]) = 0;
  LODWORD(v46[2]) = v31;
  HIDWORD(v46[1]) = *v27;
  HalpInterruptApplyOverrides(&v39, (_DWORD *)&v46[1] + 1, &v46[2]);
  v20 = HalpInterruptLineToGsi(&v39, &v46[7]);
  if ( v20 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    {
      v20 = HalpInterruptRemap(
              **(_DWORD **)(a1 + 288),
              *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
              *(_QWORD *)(a1 + 288) + 8LL,
              0,
              (unsigned int *)v46,
              1u);
      if ( v20 < 0 )
        return (unsigned int)v20;
      *(_DWORD *)(a1 + 184) |= 0x40u;
    }
    v40[0] = -1;
    v40[1] = 1;
    v32 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v20 = HalpInterruptSetLineState(&v39, a2, a3, v46[2], SHIDWORD(v46[1]), (__int64)&v41, (__int64)v40, v38);
    KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v32 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
        v37 = (v36 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v36;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v32);
    if ( v20 >= 0 )
      return 0;
  }
  return (unsigned int)v20;
}
