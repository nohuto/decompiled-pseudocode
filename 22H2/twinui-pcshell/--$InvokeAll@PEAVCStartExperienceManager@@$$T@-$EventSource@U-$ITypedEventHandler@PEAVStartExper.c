/*
 * XREFs of ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x180050AE4
 * Callers:
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000CB40 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18008C520 (-OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180243090 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnSetForegroundFailed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180243770 (-OnSetForegroundFailed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802438B0 (-OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_f4076b844f394c201f6c95811a6b7602_@@@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_f4076b844f394c201f6c95811a6b7602_@@@Z @ 0x180050B1C (--$DoInvoke@V_lambda_f4076b844f394c201f6c95811a6b7602_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3 = 0LL;
  v4[0] = &v5;
  v4[1] = &v3;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_f4076b844f394c201f6c95811a6b7602_>(
           a1,
           v4);
}
