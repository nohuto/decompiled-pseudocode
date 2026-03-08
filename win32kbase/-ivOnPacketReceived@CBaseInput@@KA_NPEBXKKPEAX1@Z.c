/*
 * XREFs of ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1C0220AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     IsRimObjectUnregistered @ 0x1C0221F28 (IsRimObjectUnregistered.c)
 */

char __fastcall CBaseInput::ivOnPacketReceived(const void *a1, char a2, unsigned int a3, void *a4, _QWORD *Object)
{
  __int64 v5; // r14
  int v7; // r15d
  char v8; // si
  char v9; // bp
  char v10; // dl
  char v11; // al
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // r8d

  v5 = a3;
  v7 = (int)a1;
  v8 = 0;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      25,
      (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
      a2,
      v5);
  }
  RIMLockExclusive((__int64)(Object + 13));
  v11 = IsRimObjectUnregistered(Object);
  Object[14] = 0LL;
  v12 = v11;
  ExReleasePushLockExclusiveEx(Object + 13, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 26;
LABEL_24:
      WPP_RECORDER_AND_TRACE_SF_dd(
        v17->AttachedDevice,
        v9,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        v18,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
        a2,
        v5);
    }
  }
  else
  {
    v19 = *(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 48LL * v7 + 3304);
    if ( v19 )
    {
      v20 = ((__int64 (__fastcall *)(__int64, void *, _QWORD *))*(&off_1C0281DE0 + v5))(v19, a4, Object);
      if ( v20 == 2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = v9;
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v21,
            v22,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            28,
            (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v21) = 0;
          }
          if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v22,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              12,
              29,
              (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
          }
        }
        v8 = 1;
      }
    }
    else
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 27;
        goto LABEL_24;
      }
    }
  }
  ObfDereferenceObject(Object);
  return v8;
}
