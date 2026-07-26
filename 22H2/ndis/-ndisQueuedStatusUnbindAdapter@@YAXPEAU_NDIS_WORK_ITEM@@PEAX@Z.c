/*
 * XREFs of ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00985C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A954 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FC86C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FE444 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FEB80 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FEDE0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0124314 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 m_numElements; // r15
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r14
  Ndis::BindState *p_BindState; // rcx
  __int64 v8; // rdx
  int v9; // edx
  char v10[160]; // [rsp+40h] [rbp-B8h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x51u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
  Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
  m_numElements = a2->Bindings.Protocols.m_numElements;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= a2->Bindings.Protocols.m_numElements )
      __fastfail(5u);
    p = a2->Bindings.Protocols._p;
    p_BindState = &p[i].__ptr_.__value_->BindState;
    v8 = *((_QWORD *)p_BindState[1].m_AdditionalContext + 5);
    if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 56) < 6u && Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_RebindNeeded) )
      {
        memset(v10, 0, sizeof(v10));
        if ( (unsigned __int8)byte_1C00E547B >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v10);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              0x1Cu,
              0x52u,
              (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
              *(unsigned __int16 **)&v10[8],
              *(_QWORD *)v10);
        }
      }
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous, 0);
  ndisDereferenceMiniport(a2, 0x36u);
  ExFreePoolWithTag(a1, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x53u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a2);
}
