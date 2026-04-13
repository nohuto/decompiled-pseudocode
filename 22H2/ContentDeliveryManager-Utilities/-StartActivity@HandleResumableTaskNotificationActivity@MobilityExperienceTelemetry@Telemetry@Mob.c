/*
 * XREFs of ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x18004B3DC
 * Callers:
 *     ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004CE9C (--R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DA50 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A4D4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800362D0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const char *a4)
{
  __int64 v8; // rbx
  const struct _tlgProvider_t *v9; // rax
  RTL_SRWLOCK *v10; // rcx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  const GUID *v14; // r9
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-59h] BYREF
  __int64 v21; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-29h]
  __int64 v24; // [rsp+70h] [rbp-21h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp-19h]
  __int64 v26; // [rsp+80h] [rbp-11h]
  struct _GUID *v27; // [rsp+88h] [rbp-9h]
  __int64 v28; // [rsp+90h] [rbp-1h]
  const unsigned __int16 *v29; // [rsp+98h] [rbp+7h]
  int v30; // [rsp+A0h] [rbp+Fh]
  int v31; // [rsp+A4h] [rbp+13h]
  const char *v32; // [rsp+A8h] [rbp+17h]
  int v33; // [rsp+B0h] [rbp+1Fh]
  int v34; // [rsp+B4h] [rbp+23h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = *((_QWORD *)this + 6);
  v9 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x400000000000LL) == *((_QWORD *)v9 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_OWORD *)(v8 + 8) = 0LL;
  }
  v10 = SRWLock;
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v11 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v12 = (__int64)v11;
  if ( *(_DWORD *)v11 > 5u
    && (*((_QWORD *)v11 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v11 + 3) & 0x400000000000LL) == *((_QWORD *)v11 + 3) )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    v13 = *((_QWORD *)this + 6);
    v21 = 0LL;
    if ( !*(_BYTE *)(v13 + 4)
      || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
      && !*(_DWORD *)(v13 + 28)
      && !*(_DWORD *)(v13 + 32)
      && !*(_DWORD *)(v13 + 36) )
    {
      v14 = 0LL;
    }
    v15 = -1LL;
    v16 = (const GUID *)(v13 + 8);
    if ( a4 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a4[v17] );
      v18 = v17 + 1;
    }
    else
    {
      a4 = (const char *)&word_180106598;
      v18 = 1;
    }
    v32 = a4;
    v33 = v18;
    v34 = 0;
    if ( a3 )
    {
      do
        ++v15;
      while ( a3[v15] );
      v19 = 2 * v15 + 2;
    }
    else
    {
      a3 = &Src;
      v19 = 2;
    }
    v30 = v19;
    v29 = a3;
    p_SRWLock = &SRWLock;
    v31 = 0;
    v23 = &v21;
    v27 = a2;
    v28 = 16LL;
    v26 = 4LL;
    v24 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v12, (unsigned __int8 *)dword_18017A09A, v16, v14, 7u, &v22);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)((char *)this + 8));
}
