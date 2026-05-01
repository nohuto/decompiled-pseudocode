/*
 * XREFs of ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800039D0
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800180F0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180003B00 (-HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z.c)
 *     ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180003E60 (-HampActCanBeStartedInHostState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180003F64 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 */

__int64 __fastcall HampActCanBeStarted(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *Value; // rax
  unsigned int CanBeStartedInSystemState; // eax
  DWORD v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // r14
  _QWORD *v9; // rdi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  HampActSnapSystemStateForStart((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACT_START_SYSTEM_STATE *)&v11);
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)Value & 2) == 0 )
        __int2c();
      if ( Value[2]-- == 1LL )
        *Value &= ~2uLL;
    }
    *(_DWORD *)(v2 + 8) = 0;
    RtlReleaseSRWLockExclusive(v2);
    CanBeStartedInSystemState = HampActCanBeStartedInSystemState(a1, &v11);
    v6 = HampLockTrackerId;
    v7 = CanBeStartedInSystemState;
    v8 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v9 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v9 |= 2uLL;
      ++v9[2];
    }
    RtlAcquireSRWLockExclusive(v8);
    *(_DWORD *)(v8 + 8) = GetCurrentThreadId();
    HampActSnapSystemStateForStart((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACT_START_SYSTEM_STATE *)&v12);
    if ( v11 == v12 )
      break;
    v11 = v12;
  }
  if ( v7 )
    return v7;
  else
    return HampActCanBeStartedInHostState(a1);
}
