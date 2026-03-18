/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4DD0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0077540 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C00B2A4C (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00E0D4A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     UserRtlFreeMem @ 0x1C012EA00 (UserRtlFreeMem.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01DCDD4 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rbx
  char v10; // bl
  __int64 v11; // r8
  __int64 v12; // r9
  CBaseInput *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rcx
  unsigned int v18; // ebx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v22; // [rsp+70h] [rbp+18h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v22, "OnReadNotification", 0LL);
  if ( *((int *)this + 8) < 0 )
  {
    v2 = 0;
LABEL_12:
    v10 = 0;
    if ( !v2 )
      goto LABEL_25;
    goto LABEL_13;
  }
  v2 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 48LL))(this) )
    goto LABEL_12;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v3, v4, v5);
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v7) )
    {
      while ( 1 )
      {
        v9 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                     + 2);
        v8 = *v9;
        v9[2] = 0LL;
        if ( !*(_DWORD *)(v8 + 8) )
        {
          v20 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        }
        HMUnlockObject(*v9);
      }
    }
  }
  v10 = 1;
LABEL_13:
  if ( (unsigned int)dword_1C0289810 > 5 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
  {
    v20 = *((_DWORD *)this + 10);
    v21 = *((_QWORD *)this + 6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0289810,
      byte_1C025D157,
      v11,
      v12,
      (__int64)&v21,
      (__int64)&v20);
  }
  (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 56LL))(
    this,
    *((_QWORD *)this + 8),
    *((unsigned int *)this + 6),
    *((unsigned int *)this + 10),
    *((_QWORD *)this + 6));
  if ( CBaseInput::IsInputSuppressRequested(v13) )
    CBaseInput::OnInputSuppressed(this);
  else
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
      this,
      *((_QWORD *)this + 8),
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
  v17 = (char *)*((_QWORD *)this + 9);
  if ( *((char **)this + 8) != v17 )
  {
    if ( v17 != (char *)this + 80 )
      UserRtlFreeMem(v17);
    *((_QWORD *)this + 9) = *((_QWORD *)this + 8);
    *((_DWORD *)this + 14) = *((_DWORD *)this + 10);
  }
  if ( v10 )
    UserSessionSwitchLeaveCrit((__int64)v17, v14, v15, v16);
LABEL_25:
  v18 = CBaseInput::Read(this);
  if ( v2 )
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 72LL))(this);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
  return v18;
}
