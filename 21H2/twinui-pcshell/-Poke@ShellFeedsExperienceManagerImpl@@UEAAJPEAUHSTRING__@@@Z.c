/*
 * XREFs of ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B67C0
 * Callers:
 *     _lambda_6e6fea714a04690c65ea3b6c1455a89e_::operator() @ 0x1800B15E0 (_lambda_6e6fea714a04690c65ea3b6c1455a89e_--operator().c)
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x1800B5D20 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x1800B6390 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsExperienceManagerError@@$$QEAJ@Z @ 0x1800B0564 (--$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeeds.c)
 *     ??$ShellFeedsExperienceManagerImpl_Poke@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z @ 0x1800B0868 (--$ShellFeedsExperienceManagerImpl_Poke@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_GetViewWrapper@ShellFeedsExperienceManagerImpl@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800B8604 (-_GetViewWrapper@ShellFeedsExperienceManagerImpl@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInter.c)
 *     ?_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B86AC (-_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_IsViewCloaked@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B8850 (-_IsViewCloaked@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x1800B9884 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::Poke(ShellFeedsExperienceManagerImpl *this, HSTRING string)
{
  const struct _tlgProvider_t *v4; // rcx
  int v5; // ecx
  __int64 v6; // r9
  bool v7; // di
  __int64 StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF

  if ( _Xtime_get_ticks() - *((_QWORD *)this + 24) >= 310000000 )
  {
    StringRawBuffer = (__int64)WindowsGetStringRawBuffer(string, 0LL);
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_Poke<unsigned short const *>(&StringRawBuffer);
    v7 = !*(_QWORD *)ShellFeedsExperienceManagerImpl::_GetViewWrapper(this, &StringRawBuffer)
      || ShellFeedsExperienceManagerImpl::_IsViewCloaked(this);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&StringRawBuffer);
    if ( v7 )
    {
      ++*((_DWORD *)this + 52);
      ++*((_DWORD *)this + 53);
      if ( (int)ShellFeedsExperienceManagerImpl::_Show(this, string, 0LL) < 0 )
      {
        LODWORD(StringRawBuffer) = ShellFeedsExperienceManagerImpl::_Show(this, string, 0LL);
        v10 = 2;
        ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
          &v10,
          (int *)&StringRawBuffer);
      }
      ShellFeedsExperienceManagerImpl::_Hide(this);
      *((_QWORD *)this + 24) = _Xtime_get_ticks();
    }
  }
  else
  {
    v4 = FeedsMicrosoftTelemetryProvider::Provider();
    if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x200000000000LL) )
    {
      StringRawBuffer = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v5,
        (int)&unk_18057DE16,
        0,
        v6,
        (__int64)&StringRawBuffer);
    }
  }
  return 0LL;
}
