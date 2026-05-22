/*
 * XREFs of ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7238
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180019A60 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180021350 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18002A590 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800B8020 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800B80B8 (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B84B0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B91B0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180101D90 (-OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x18014C160 (-GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x18014C1E0 (-GetDelegateSourceProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x18014C260 (-GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x18014C3F0 (-GetProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetThreadId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x18014C4F0 (-GetThreadId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x18014C570 (-GetViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z @ 0x18014C5F0 (-GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z.c)
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801803D0 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1801963D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, a2);
}
