/*
 * XREFs of ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180030464
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800302A0 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002D27C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 */

__int64 __fastcall CAnimationClock::Initialize(CAnimationClock *this, struct _GUID *a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int128 v9; // xmm0
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = *((_QWORD *)this + 15) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = *((_QWORD *)this + 16) - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    v7 = -2147023649;
  }
  else
  {
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v8 && (unsigned int)(a3 - 10001) > 0xFFFFD8ED )
    {
      v9 = (__int128)*a2;
      *((_DWORD *)this + 34) = a3;
      *(_OWORD *)((char *)this + 120) = v9;
      v7 = CAnimationClock::_SetState((__int64)this, 1u);
    }
    else
    {
      v7 = -2147024809;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v7;
}
