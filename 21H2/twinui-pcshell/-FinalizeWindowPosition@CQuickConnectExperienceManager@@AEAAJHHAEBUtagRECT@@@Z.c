/*
 * XREFs of ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18024CE10
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18025063C (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$ExperienceManager_FinalizeWindowPosition_Finalized@AEAJAEAJAEAJAEAJ@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x18024A390 (--$ExperienceManager_FinalizeWindowPosition_Finalized@AEAJAEAJAEAJAEAJ@ExperienceManager_Finaliz.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18024B3F4 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18024B3F4.c)
 *     ??1ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x18024B7E0 (--1ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?ExperienceManager_FinalizeWindowPosition_FixedPosition@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x18024C780 (-ExperienceManager_FinalizeWindowPosition_FixedPosition@ExperienceManager_FinalizeWindowPosition.c)
 *     ?GetHorizontalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z @ 0x18024D080 (-GetHorizontalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z.c)
 *     ?GetVerticalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z @ 0x18024D198 (-GetVerticalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x18024ED68 (-StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18024F21C (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPosition(
        CQuickConnectExperienceManager *this,
        int a2,
        int a3,
        const struct tagRECT *a4)
{
  int *v8; // r10
  float v9; // xmm2_4
  int *v10; // r9
  int v11; // ecx
  int v12; // edx
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm2_4
  int *v16; // rsi
  int VerticalAlignment; // eax
  int *v18; // r10
  _DWORD *v19; // r11
  int *v20; // r9
  float v21; // xmm0_4
  int HorizontalAlignment; // eax
  _QWORD v24[40]; // [rsp+30h] [rbp-178h] BYREF

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"ExperienceManager_FinalizeWindowPosition");
  v24[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::`vftable';
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *)v24);
  if ( !*((_BYTE *)this + 389) )
  {
    if ( a3 == *((_DWORD *)this + 96) )
    {
      *((_BYTE *)this + 389) = 1;
      QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_FixedPosition((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *)v24);
    }
    v8 = (int *)((char *)this + 396);
    if ( *((_DWORD *)this + 90) != 2 )
    {
      if ( *((_DWORD *)this + 90) == 3 )
      {
        v15 = *((float *)this + 86);
        *((_DWORD *)this + 98) = (int)(float)(v15 - (float)a2);
        v14 = (int)v15;
      }
      else
      {
        if ( *((_DWORD *)this + 90) != 4 )
        {
          v9 = *((float *)this + 87);
          v10 = (int *)((char *)this + 404);
          v11 = *v8;
          if ( *v8 > (int)(float)(v9 - (float)a3) || v11 == *v10 )
          {
            v12 = (int)v9;
            *v8 = (int)v9 - a3;
          }
          else
          {
            v12 = v11 + a3;
          }
          *v10 = v12;
          goto LABEL_17;
        }
        v13 = *((float *)this + 88) + *((float *)this + 86);
        *((_DWORD *)this + 98) = (int)v13;
        v14 = a2 + (int)v13;
      }
      v16 = (int *)((char *)this + 400);
      *((_DWORD *)this + 100) = v14;
      VerticalAlignment = CQuickConnectExperienceManager::GetVerticalAlignment(this, a3, a4);
      *v18 = VerticalAlignment;
      v20 = (int *)((char *)this + 404);
      *((_DWORD *)this + 101) = a3 + VerticalAlignment;
LABEL_18:
      QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_Finalized<long &,long &,long &,long &>(
        (__int64)v24,
        v19,
        v18,
        v16,
        v20);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
      goto LABEL_19;
    }
    v21 = *((float *)this + 89) + *((float *)this + 87);
    *v8 = (int)v21;
    *((_DWORD *)this + 101) = a3 + (int)v21;
LABEL_17:
    HorizontalAlignment = CQuickConnectExperienceManager::GetHorizontalAlignment(this, a2, a4);
    v19 = (_DWORD *)((char *)this + 392);
    *((_DWORD *)this + 98) = HorizontalAlignment;
    v16 = (int *)((char *)this + 400);
    *((_DWORD *)this + 100) = a2 + HorizontalAlignment;
    goto LABEL_18;
  }
  *((_DWORD *)this + 101) = a3 + *((_DWORD *)this + 99);
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_Finalized<long &,long &,long &,long &>(
    (__int64)v24,
    (_DWORD *)this + 98,
    (int *)this + 99,
    (int *)this + 100,
    (int *)this + 101);
LABEL_19:
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::~ExperienceManager_FinalizeWindowPosition((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *)v24);
  return 0LL;
}
