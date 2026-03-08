/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C015A5E8
 * Callers:
 *     PowerConnectionEvent @ 0x1C0016838 (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C015A190 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003A300 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C003B380 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     RIMSetSystemInputMode @ 0x1C00BD984 (RIMSetSystemInputMode.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rbx
  int v9; // esi
  PERESOURCE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 InputBuffer; // [rsp+38h] [rbp-48h] BYREF
  int v17; // [rsp+40h] [rbp-40h]
  PERESOURCE *DomainLockRef; // [rsp+48h] [rbp-38h]
  char v19; // [rsp+50h] [rbp-30h] BYREF
  PVOID *v20; // [rsp+58h] [rbp-28h]
  char v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  char v23; // [rsp+70h] [rbp-10h]

  v4 = a1;
  if ( !*(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 712) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1549);
  DomainLockRef = GetDomainLockRef(13);
  v8 = &v19;
  v19 = 1;
  v20 = &gDomainDummyLock;
  v9 = 0;
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  do
  {
    v10 = (PERESOURCE *)*((_QWORD *)v8 - 1);
    if ( v10 )
    {
      if ( *v8 )
        tagDomLock::LockExclusive(v10);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*v10);
    }
    ++v9;
    v8 += 16;
  }
  while ( !v9 );
  v23 = 1;
  *(_DWORD *)(SGDGetUserSessionState(v10, v5, v6, v7) + 2984) = v4 == 2;
  *(_DWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 2980) = v4 == 1;
  if ( v23 && DomainLockRef )
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  if ( v4 == 2 )
  {
    _InterlockedOr((volatile signed __int32 *)gpsi, 0x4000u);
LABEL_14:
    _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFDFFF);
    goto LABEL_15;
  }
  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFBFFF);
  if ( v4 != 1 )
    goto LABEL_14;
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x2000u);
LABEL_15:
  RIMSetSystemInputMode(v4);
  InputBuffer = 28LL;
  if ( v4 )
    v17 = (v4 != 1) + 1;
  else
    v17 = 0;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
}
