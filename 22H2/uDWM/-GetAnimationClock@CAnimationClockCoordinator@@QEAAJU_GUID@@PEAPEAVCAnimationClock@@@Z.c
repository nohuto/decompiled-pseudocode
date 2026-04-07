/*
 * XREFs of ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180030528
 * Callers:
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180008144 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180009768 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800302A0 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800305FC (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x180036100 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800BAA40 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800BAAB0 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimationClockCoordinator::GetAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        struct CAnimationClock **a3)
{
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h]

  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    v7 = *((_DWORD *)this + 20);
    v8 = 0LL;
    v9 = -2147023728;
    if ( v7 )
    {
      v10 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 8 * v8);
        v15 = *(_OWORD *)(v11 + 120);
        v12 = v15 - *(_QWORD *)&a2->Data1;
        if ( (_QWORD)v15 == *(_QWORD *)&a2->Data1 )
          v12 = *((_QWORD *)&v15 + 1) - *(_QWORD *)a2->Data4;
        if ( !v12 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_12;
      }
      *a3 = (struct CAnimationClock *)v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v9 = 0;
    }
  }
  else
  {
    v9 = -2147024809;
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v9;
}
