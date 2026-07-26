/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FDEB0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FC8CC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C00170C0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A954 (WPP_RECORDER_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FE444 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  unsigned __int64 i; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  char Lock; // cl
  int v10; // r8d
  bool v11; // cf
  char v12[8]; // [rsp+30h] [rbp-28h]

  v2 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v5 = *((_QWORD *)this + 1);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 80) + 40LL);
    if ( v7 )
    {
      v8 = (*(_DWORD *)(v7 + 64) & 0x10000000) == 0;
      Lock = 1;
      if ( !v8 )
        Lock = WPP_MAIN_CB.DeviceQueue.Lock;
      if ( Lock )
      {
        v10 = *(_DWORD *)(v6 + 32);
        *(_DWORD *)(v6 + 32) = v10 & 0xFFDFFFFF;
        if ( (v10 != 0) != ((v10 & 0xFFDFFFFF) != 0) || !*(_QWORD *)v6 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v12 = v10 & 0xFFDFFFFF;
            WPP_RECORDER_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
              v10,
              *(_QWORD *)v12);
          }
          v11 = (unsigned __int8)byte_1C00E547B < 4u;
          *(_BYTE *)(*(_QWORD *)v6 + 5208LL) = 1;
          if ( !v11 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
              0x1Cu,
              0x13u,
              (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
              *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
              **(_QWORD **)(v5 + 8 * i));
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v5 + 8 * i),
                  BindingDisabled,
                  Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_1C00E547B >= 4u
             && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
          0x1Cu,
          0x14u,
          (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
          **(_QWORD **)(v5 + 8 * i));
      }
    }
  }
}
