/*
 * XREFs of ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01EF59C
 * Callers:
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C0068A30 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0058ABC (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ValidateHbwnd @ 0x1C012FDB0 (ValidateHbwnd.c)
 *     IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x1C01EF310 (IVForegroundSync--_anonymous_namespace_--ivBroadcastSetNullForeground.c)
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x1C01EF938 (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F38C4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVForegroundSync::ivSendForegroundUpdate(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // r8d
  bool v6; // bl
  const struct CONTAINER_ID *v7; // rdx
  int v8; // ecx
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int16 *v12; // r15
  int v13; // r12d
  char v14; // bl
  char v15; // dl
  bool v16; // bl
  bool v17; // bl
  __int64 v18; // [rsp+40h] [rbp-38h]

  if ( !CIVChannel::ContainerConnected(3u) )
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = v6;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        10,
        (__int64)&WPP_62b01945c15a3d817f5c67c3f84f0e84_Traceguids);
    }
    return;
  }
  if ( !a1 )
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        11,
        (__int64)&WPP_62b01945c15a3d817f5c67c3f84f0e84_Traceguids);
    }
    v7 = 0LL;
    v8 = 1;
LABEL_47:
    IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground(v8, v7);
    return;
  }
  v9 = ValidateHbwnd(a1);
  if ( v9 )
  {
    v12 = *(__int16 **)(v9 + 136);
    v13 = 3 - (a2 != 0);
    if ( v12 )
    {
      v14 = 1;
      v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v15,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          0xDu,
          0xCu,
          (__int64)&WPP_62b01945c15a3d817f5c67c3f84f0e84_Traceguids,
          v13,
          *v12,
          v12[1]);
      IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer((struct CONTAINER_ID *)v12);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v14 = 0;
      }
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v13;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          0xDu,
          0xDu,
          (__int64)&WPP_62b01945c15a3d817f5c67c3f84f0e84_Traceguids,
          v18);
      }
    }
    else
    {
      v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = v16;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          13,
          14,
          (__int64)&WPP_62b01945c15a3d817f5c67c3f84f0e84_Traceguids);
      }
      v12 = 0LL;
    }
    v7 = (const struct CONTAINER_ID *)v12;
    v8 = v13;
    goto LABEL_47;
  }
  v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = v17;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      13,
      15,
      (__int64)&WPP_62b01945c15a3d817f5c67c3f84f0e84_Traceguids,
      a1);
  }
}
