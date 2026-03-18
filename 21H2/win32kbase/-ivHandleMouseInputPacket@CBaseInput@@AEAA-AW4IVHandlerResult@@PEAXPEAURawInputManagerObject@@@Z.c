/*
 * XREFs of ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE030
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C01DAF08 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01EC560 (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01EC638 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     FindRimDevByName @ 0x1C01F0198 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01F0D9C (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleMouseInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  unsigned int v5; // edi
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r14d
  __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // r15
  __int64 MouseProcessor; // rax
  __int64 v18; // rbx
  void *v19; // r14
  int v20; // r15d
  PDEVICE_OBJECT v21; // rcx
  void *v22; // rdx
  __int64 RimDevByName; // rax
  int v24; // r8d
  void **v25; // rax
  void *v26; // rdx
  __int64 v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  __int64 v30; // [rsp+B8h] [rbp+10h]
  __int64 v31; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = 0;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      38,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
  }
  if ( (*(_DWORD *)(v4 + 16) & 4) != 0 )
    *(_QWORD *)(v4 + 8) = v4 + (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
    *(_QWORD *)(v4 + 24) = v4 + (v7 & 0xFFFFFFFFFFFFFFFEuLL);
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v12 = 0;
  if ( *(_DWORD *)(v4 + 32) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v4 + 24) + 48LL * v12;
      v14 = *(_DWORD *)(v13 + 20);
      HIDWORD(v29) = *(_DWORD *)(v13 + 24);
      v31 = 0LL;
      v15 = *(_QWORD *)(v13 + 32);
      LODWORD(v29) = v14;
      if ( !qword_1C029D7F8 || (int)qword_1C029D7F8() < 0 )
        break;
      if ( !(qword_1C029D800 ? qword_1C029D800(v15, v29, &v31) : 0) )
        break;
      *(_QWORD *)(v13 + 20) = v31;
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v10,
          40,
          v28,
          0xCu,
          0x28u,
          (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
      if ( ++v12 >= *(_DWORD *)(v4 + 32) )
        goto LABEL_27;
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
      LOBYTE(v22) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v22,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        39,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
    }
    UserSessionSwitchLeaveCrit((__int64)v21, v8, v10, v11);
  }
  else
  {
LABEL_27:
    UserSessionSwitchLeaveCrit((__int64)v9, v8, v10, v11);
    if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
    {
      v30 = *(_QWORD *)(v4 + 36);
      MouseProcessor = anonymous_namespace_::GetMouseProcessor();
      if ( MouseProcessor )
      {
        v18 = MouseProcessor + 3872;
        CPushLock::AcquireLockExclusive((CPushLock *)(MouseProcessor + 3872));
        *(_QWORD *)(v18 + 16) = v30;
        *(_BYTE *)(v18 + 24) = 1;
        CPushLock::ReleaseLock((CPushLock *)v18);
      }
    }
    v19 = 0LL;
    v20 = *(_DWORD *)(v4 + 16) & 2;
    if ( (*(_DWORD *)(v4 + 16) & 4) != 0 )
    {
      RIMLockExclusive(v3 + 104);
      if ( (unsigned __int8)IsRimObjectUnregistered(v3) )
      {
        *(_QWORD *)(v3 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
        KeLeaveCriticalRegion();
        return 2;
      }
      RimDevByName = FindRimDevByName((PCUNICODE_STRING)v4);
      if ( RimDevByName )
      {
        if ( v20 )
        {
          v25 = (void **)(*(_QWORD *)(RimDevByName + 32) + 88LL);
          if ( v25 )
            v19 = *v25;
        }
        else
        {
          DeliverMouseInputToRIM(
            (const struct _IVMouseInputPacket *)v4,
            (struct RawInputManagerObject *)v3,
            (struct RIMDEV *)RimDevByName);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          LOBYTE(v6) = 0;
        }
        if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
          LOBYTE(v26) = v6;
          LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v26,
            v24,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            41,
            (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
        }
        v6 = 0;
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v20 )
      DeliverSynthesizedMouseInput((const struct _IVMouseInputPacket *)v4, v19);
    return v6;
  }
  return v5;
}
