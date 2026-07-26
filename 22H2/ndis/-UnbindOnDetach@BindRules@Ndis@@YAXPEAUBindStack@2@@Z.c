/*
 * XREFs of ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FD264
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FC8CC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C00170C0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A954 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1C00ACC30 (WPP_RECORDER_SF__guid_D_ea_1C00ACC30.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FE444 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C0123994 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01241F0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindOnDetach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  enum BINDING_ENABLED_OR_DISABLED v4; // r15d
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  int v8; // r8d
  Ndis::BindState *v9; // rcx
  __int64 v10; // r14
  unsigned __int64 j; // rbx
  __int64 v12; // rsi
  _DWORD *v13; // rdi
  int v14; // r8d
  int v15; // edx
  int v16; // edx
  __int64 v17; // rdx
  bool v18; // cf
  __int64 *v19; // rax
  __int64 v20; // rcx
  unsigned __int16 *v21; // rdx
  unsigned __int16 v22; // r9
  __int64 *v23; // rax
  int v24; // [rsp+20h] [rbp-198h]
  char v25[8]; // [rsp+30h] [rbp-188h]
  __int64 v26[20]; // [rsp+40h] [rbp-178h] BYREF
  char v27[160]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v4 = BindingEnabled;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_46:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      if ( v4 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v6 + 8 * i), v4, Reason_UnbindOnDetach) )
        {
          memset(v27, 0, sizeof(v27));
          if ( (unsigned __int8)byte_1C00E547B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v27);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v16,
                0x1Cu,
                0x36u,
                (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
                *(unsigned __int16 **)&v27[8],
                *(_QWORD *)v27);
          }
        }
      }
      else
      {
        v8 = v7[8];
        v7[8] = v8 & 0xFFFFFBFF;
        if ( (v8 != 0) != ((v8 & 0xFFFFFBFF) != 0) || !*(_QWORD *)v7 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v25 = v8 & 0xFFFFFBFF;
            WPP_RECORDER_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
              v8,
              *(_QWORD *)v25);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5208LL) = 1;
          memset(v26, 0, sizeof(v26));
          if ( (unsigned __int8)byte_1C00E547B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v26);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v15,
                0x1Cu,
                0x35u,
                (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
                (unsigned __int16 *)v26[1],
                v26[0]);
          }
        }
      }
      v9 = *(Ndis::BindState **)(v6 + 8 * i);
      if ( (*((_DWORD *)v9[1].m_AdditionalContext + 10) & 8) != 0 )
      {
        if ( v9->m_unbindReasons )
        {
          if ( Ndis::BindState::GetActualBindingState(v9) == BindingEnabled )
          {
            v4 = BindingDisabled;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
                WPP_RECORDER_SF__guid_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v17 + 24,
                  (__int64)WPP_GLOBAL_Control,
                  0x37u,
                  v24,
                  v17 + 24);
            }
          }
        }
      }
    }
  }
  v10 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_46;
    v12 = *((_QWORD *)this + 1);
    v13 = *(_DWORD **)(v12 + 8 * j);
    if ( v4 )
    {
      if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v12 + 8 * j), v4, Reason_UnbindOnDetach)
        && (unsigned __int8)byte_1C00E547B >= 4u )
      {
        v23 = *(__int64 **)(v12 + 8 * j);
        v20 = *v23;
        v21 = *(unsigned __int16 **)(v23[10] + 24);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = 57;
          goto LABEL_45;
        }
      }
    }
    else
    {
      v14 = v13[8];
      v13[8] = v14 & 0xFFFFFBFF;
      if ( (v14 != 0) != ((v14 & 0xFFFFFBFF) != 0) || !*(_QWORD *)v13 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v25 = v14 & 0xFFFFFBFF;
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
            v14,
            *(_QWORD *)v25);
        }
        v18 = (unsigned __int8)byte_1C00E547B < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5208LL) = 1;
        if ( !v18 )
        {
          v19 = *(__int64 **)(v12 + 8 * j);
          v20 = *v19;
          v21 = *(unsigned __int16 **)(v19[10] + 24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v22 = 56;
LABEL_45:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v21,
              0x1Cu,
              v22,
              (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
              v21,
              v20);
            continue;
          }
        }
      }
    }
  }
}
