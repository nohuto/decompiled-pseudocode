/*
 * XREFs of ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1C01EFB20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     IsRimObjectUnregistered @ 0x1C01F0D9C (IsRimObjectUnregistered.c)
 */

char __fastcall CBaseInput::ivOnPacketReceived(const void *a1, char a2, unsigned int a3, void *a4, _QWORD *Object)
{
  __int64 v5; // r14
  int v7; // r12d
  char v8; // si
  char v9; // bp
  char v10; // dl
  char v11; // al
  char v12; // bl
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  __int64 v21; // [rsp+48h] [rbp-30h]

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
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
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
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 26;
LABEL_24:
      LODWORD(v21) = v5;
      WPP_RECORDER_AND_TRACE_SF_dd(
        v14->AttachedDevice,
        v9,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        v15,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
        a2,
        v21);
    }
  }
  else
  {
    v16 = (__int64)*(&qword_1C0288018 + 6 * v7);
    if ( v16 )
    {
      v17 = ((__int64 (__fastcall *)(__int64, void *, _QWORD *))off_1C024B620[v5])(v16, a4, Object);
      if ( v17 == 2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = v9;
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            v19,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            28,
            (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v18) = 0;
          }
          if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v19,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              12,
              29,
              (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
          }
        }
        v8 = 1;
      }
    }
    else
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 27;
        goto LABEL_24;
      }
    }
  }
  ObfDereferenceObject(Object);
  return v8;
}
