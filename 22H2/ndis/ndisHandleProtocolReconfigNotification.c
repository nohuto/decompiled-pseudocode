/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x1C013A2C4
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001D814 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012F18 (WPP_RECORDER_SF_Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C0019300 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C002A1C8 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A954 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ndisMapOpenByName @ 0x1C0076DD0 (ndisMapOpenByName.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FC86C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FE444 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FEB80 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FEDE0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FEFCC (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C010556C (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106214 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0124314 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C013B688 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING a2,
        void *a3,
        unsigned int a4,
        int a5)
{
  struct _NDIS_PROTOCOL_BLOCK *v5; // rbx
  __int64 v8; // rdi
  char v9; // r12
  char v10; // r15
  int v11; // edx
  int v12; // esi
  int v13; // r9d
  __int64 v14; // rax
  int v15; // edx
  int v16; // r9d
  struct _NDIS_MINIPORT_BLOCK *v17; // r12
  bool v19; // r15
  KIRQL v20; // r13
  struct _KEVENT *v21; // rcx
  bool v22; // zf
  struct _NDIS_MINIPORT_BLOCK *v23; // rdx
  char v24; // [rsp+40h] [rbp-C0h]
  struct _NDIS_PROTOCOL_BLOCK *v25; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v26; // [rsp+50h] [rbp-B0h]
  unsigned int v27; // [rsp+58h] [rbp-A8h]
  void *v28; // [rsp+60h] [rbp-A0h]
  struct _KEVENT v29; // [rsp+68h] [rbp-98h] BYREF
  char v30[160]; // [rsp+80h] [rbp-80h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v31; // [rsp+120h] [rbp+20h] BYREF

  v5 = 0LL;
  v28 = a3;
  v25 = 0LL;
  v26 = 0LL;
  v27 = a4;
  v8 = 0LL;
  memset(&v31, 0, sizeof(v31));
  v9 = 0;
  v24 = 0;
  v10 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x12u,
      (struct _GUID *)&WPP_8b0ab799cd8539b5ce5df5ce3671a55c_Traceguids,
      &a2->Length);
  v12 = ndisReferenceProtocolByName(a2, &v25, 0, PTREF_RECONFIG);
  if ( v12 >= 0 )
  {
    if ( SourceString->Length )
    {
      while ( 1 )
      {
        v5 = v25;
        WAIT_FOR_PROTO_MUTEX(v25);
        v14 = ndisMapOpenByName(SourceString, (__int64)v5);
        v8 = v14;
        if ( v14 )
          break;
        RELEASE_PROT_MUTEX(v5);
        ndisDereferenceProtocol(v5, v15, 4u, v16);
        if ( !v9 )
        {
          v9 = 1;
          v25 = 0LL;
        }
        if ( (int)ndisReferenceProtocolByName(a2, &v25, 1u, PTREF_RECONFIG) < 0 )
        {
          v5 = v25;
          v12 = -1073741772;
          v17 = v26;
          goto LABEL_22;
        }
      }
      v24 = 1;
      v26 = *(struct _NDIS_MINIPORT_BLOCK **)(v14 + 16);
      v10 = 1;
      if ( v5->MajorNdisVersion < 6u && !v5->PnPEventHandler )
      {
        RELEASE_PROT_MUTEX(v5);
        v17 = v26;
        v12 = -1073741823;
        goto LABEL_21;
      }
    }
    else
    {
      v5 = v25;
      if ( v25->MajorNdisVersion < 6u && !v25->PnPEventHandler )
      {
        v12 = -1073741823;
        v17 = 0LL;
        goto LABEL_20;
      }
      WAIT_FOR_PROTO_MUTEX(v25);
    }
    ndisInitializeNetPnPEvent(&v31, &v29);
    if ( a5 == 3 )
    {
      v31.NetPnPEvent.NetEvent = NetEventReconfigure;
    }
    else
    {
      if ( a5 != 9 )
      {
        v12 = -1073741808;
        RELEASE_PROT_MUTEX(v5);
LABEL_19:
        v17 = v26;
        goto LABEL_20;
      }
      v31.NetPnPEvent.NetEvent = NetEventBindList;
    }
    v31.NetPnPEvent.Buffer = v28;
    v31.NetPnPEvent.BufferLength = v27;
    v12 = ndisDeliverNetPnPEventSynchronously(v5, (struct _NDIS_PROTOCOL_BLOCK *)v8, &v31);
    RELEASE_PROT_MUTEX(v5);
    v19 = v12 == 65539;
    if ( !v8 )
      goto LABEL_19;
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 232));
    if ( (*(_DWORD *)(v8 + 224) & 0x80000) == 0 )
    {
      *(_DWORD *)(v8 + 224) &= ~0x10u;
      v21 = *(struct _KEVENT **)(v8 + 912);
      if ( v21 )
      {
        KeSetEvent(v21, 0, 0);
        *(_QWORD *)(v8 + 912) = 0LL;
        v19 = 0;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 232), v20);
    v17 = v26;
    if ( v26 && v19 && (v22 = v5->MajorNdisVersion == 6, v5->MajorNdisVersion <= 6u) )
    {
      v5 = v25;
      if ( !v22 || v25->MinorNdisVersion < 0x28u )
      {
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v8 + 16) + 5104LL));
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v8 + 856), BindingDisabled, Reason_RebindNeeded) )
        {
          memset(v30, 0, sizeof(v30));
          if ( (unsigned __int8)byte_1C00E547B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_PROTOCOL_LINK **)(v8 + 856),
              (struct NDIS_PNPTRACE_LOCALS *)v30);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v23,
                0x1Cu,
                0x13u,
                (struct _GUID *)&WPP_8b0ab799cd8539b5ce5df5ce3671a55c_Traceguids,
                *(unsigned __int16 **)&v30[8],
                *(_QWORD *)v30);
          }
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v8 + 16) + 5104LL), v23);
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v8 + 16) + 5104LL), RunSynchronous, 0);
      }
    }
    else
    {
      v5 = v25;
    }
LABEL_20:
    v10 = v24;
    if ( !v24 )
    {
LABEL_22:
      if ( v5 )
        ndisDereferenceProtocol(v5, v11, 4u, v13);
      if ( v10 )
        ndisDereferenceMiniport(v17, 0x34u);
      goto LABEL_26;
    }
LABEL_21:
    ndisMDereferenceOpenUnlocked(v8, 4);
    goto LABEL_22;
  }
LABEL_26:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x14u,
      (struct _GUID *)&WPP_8b0ab799cd8539b5ce5df5ce3671a55c_Traceguids,
      v5);
  return (unsigned int)v12;
}
