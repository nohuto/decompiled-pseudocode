/*
 * XREFs of _lambda_49c0b2fb711056d9762ca69f307c87f4_::operator() @ 0x1802DA484
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49c0b2fb711056d9762ca69f307c87f4___::Run @ 0x1802E6800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_49c0b2fb711056d9762ca69f307c87f4___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x1802E0248 (-GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHe.c)
 *     ?GetWindowCharacteristicsWithProcessName@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x1803015B4 (-GetWindowCharacteristicsWithProcessName@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacterist.c)
 */

void __fastcall lambda_49c0b2fb711056d9762ca69f307c87f4_::operator()(__int64 a1)
{
  struct TelemetryHelpers::WindowCharacteristics *v2; // r8
  struct HWND__ v3; // [rsp+20h] [rbp-248h] BYREF
  LPVOID pv; // [rsp+248h] [rbp-20h]

  memset_0(&v3, 0, 0x226uLL);
  pv = 0LL;
  TelemetryHelpers::GetWindowCharacteristicsWithProcessName(*(HWND *)a1, &v3, v2);
  ShellFrameAggregateTelemetry::GetUnmetTabRequirements(
    *(_DWORD *)(a1 + 8),
    (const struct TelemetryHelpers::WindowCharacteristics *)&v3);
  if ( pv )
    CoTaskMemFree(pv);
}
