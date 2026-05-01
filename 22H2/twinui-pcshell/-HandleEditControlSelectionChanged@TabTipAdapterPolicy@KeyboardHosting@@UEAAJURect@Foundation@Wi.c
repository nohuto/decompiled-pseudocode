/*
 * XREFs of ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1803D7BA0
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1803CDF50 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 * Callees:
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1803D731C (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1803D8C70 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1803DA59C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(
        __int64 a1,
        __int128 *a2,
        _DWORD *a3)
{
  HMONITOR CurrentMonitor; // rsi
  KeyboardHosting::MonitorInformation *v7; // rcx
  __m128i v8; // xmm0
  __int128 v10[2]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = *a2;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(a1, v10);
  *(_QWORD *)(a1 + 232) = CurrentMonitor;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 232));
  v7 = (KeyboardHosting::MonitorInformation *)(a1 + 328);
  if ( *(HMONITOR *)(a1 + 328) != CurrentMonitor )
  {
    *(_QWORD *)v7 = CurrentMonitor;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v7);
  }
  v8 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                          v10,
                                          a2,
                                          *(unsigned int *)(a1 + 272)));
  *(_OWORD *)(a1 + 160) = *a2;
  *(__m128i *)(a1 + 144) = v8;
  *a3 = 0;
  return 0LL;
}
