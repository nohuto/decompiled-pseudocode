/*
 * XREFs of ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x1800A48E4
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800A5D10 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A4D4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18002B368 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800362D0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this,
        const wchar_t *a2)
{
  __int64 v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  RTL_SRWLOCK *v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  const GUID *v10; // r9
  const GUID *v11; // r8
  __int64 v12; // rax
  int v13; // ecx
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v17; // [rsp+68h] [rbp+7h]
  __int64 v18; // [rsp+70h] [rbp+Fh]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  const wchar_t *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_OWORD *)(v4 + 8) = 0LL;
  }
  v6 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  v8 = (__int64)v7;
  if ( *(_DWORD *)v7 > 5u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    LODWORD(SRWLock) = GetCurrentThreadId();
    v9 = *((_QWORD *)this + 6);
    v15 = 0LL;
    if ( !*(_BYTE *)(v9 + 4)
      || (v10 = (const GUID *)(v9 + 24), !*(_DWORD *)(v9 + 24))
      && !*(_DWORD *)(v9 + 28)
      && !*(_DWORD *)(v9 + 32)
      && !*(_DWORD *)(v9 + 36) )
    {
      v10 = 0LL;
    }
    v11 = (const GUID *)(v9 + 8);
    if ( a2 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      a2 = &Src;
      v13 = 2;
    }
    v22 = v13;
    p_SRWLock = &SRWLock;
    v21 = a2;
    v17 = &v15;
    v23 = 0;
    v20 = 4LL;
    v18 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_18017CB0B, v11, v10, 5u, &v16);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)((char *)this + 8));
}
