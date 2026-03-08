/*
 * XREFs of NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1C01CED50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     RequestInputSinkInfoFromPoint @ 0x1C01E795C (RequestInputSinkInfoFromPoint.c)
 */

__int64 __fastcall NtUserCompositionInputSinkViewInstanceIdFromPoint(__int64 *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  int v8; // ebx
  ULONG64 v9; // rcx
  int v11; // [rsp+50h] [rbp-78h] BYREF
  __int64 v12; // [rsp+54h] [rbp-74h]
  int v13; // [rsp+5Ch] [rbp-6Ch]
  int v14; // [rsp+B8h] [rbp-10h]

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 0LL);
  memset_0(&v11, 0, 0x70uLL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v8 = 0;
    UserSetLastError(5);
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v12 = *a1;
    v11 = 8;
    v13 = 0;
    v8 = RequestInputSinkInfoFromPoint(&v11);
    if ( v8 )
    {
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v14;
    }
  }
  UserSessionSwitchLeaveCrit(v9);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v8;
}
