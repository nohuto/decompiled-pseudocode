/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0053374
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C0053530 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0053550 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C00535B8 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01321D0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C01DCC84 (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  void **v4; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebp
  unsigned int v12; // edi
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v24; // [rsp+80h] [rbp+18h] BYREF

  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 112LL))(this);
  v4 = (void **)((char *)this + 216);
  v5 = 0;
  while ( *v4 != a2 )
  {
    ++v5;
    v4 += 8;
    if ( v5 >= 0x11 )
      goto LABEL_32;
  }
  v6 = (unsigned __int64)v5 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)this + v6 + 168)) )
  {
    LODWORD(v23) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 495LL);
  }
  if ( v5 != *(_DWORD *)((char *)this + v6 + 184) )
  {
    LODWORD(v23) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 496LL);
  }
  v7 = *(unsigned int *)((char *)this + v6 + 184);
  if ( (_DWORD)v7 == 17 )
  {
LABEL_32:
    v11 = -1073741823;
    goto LABEL_18;
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v24, "DispatcherObjectSignaled", 0LL);
  if ( (unsigned int)dword_1C0289810 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 2LL) )
  {
    v23 = InputTraceLogging::DispatcherHandleNameToString((unsigned int)v7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C0289810,
      (__int64)&v23);
  }
  if ( (_DWORD)v7 != *((_DWORD *)&unk_1C0241920 + 6 * v7) )
  {
    LODWORD(v23) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2702LL);
  }
  if ( *((_DWORD *)&unk_1C0241920 + 6 * v7 + 4) )
  {
    v11 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C0241920 + 3 * v7 + 1))(this);
    v12 = v7;
  }
  else
  {
    v14 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v8, v9, v10);
    gptiCurrent = v14;
    v12 = v7;
    if ( v14 )
    {
      *((_DWORD *)v14 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v17 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v22 = *(_QWORD *)v17;
            *((_QWORD *)v17 + 2) = 0LL;
            if ( !*(_DWORD *)(v22 + 8) )
            {
              LODWORD(v23) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            }
            HMUnlockObject(*(_QWORD *)v17);
          }
        }
      }
    }
    v11 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C0241920 + 3 * v7 + 1))(this);
    UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  }
  if ( v11 < 0 )
  {
    LODWORD(v23) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2713LL);
  }
  CRIMBase::SignalMarshalingCompleted(this, v12);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v24);
LABEL_18:
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 120LL))(this);
  return (unsigned int)v11;
}
