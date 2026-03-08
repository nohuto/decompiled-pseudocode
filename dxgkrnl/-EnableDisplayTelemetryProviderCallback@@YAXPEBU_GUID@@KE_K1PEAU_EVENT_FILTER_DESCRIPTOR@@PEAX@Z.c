/*
 * XREFs of ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C021AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDisplayTelemetryProviderCallback(const struct _GUID *a1, int a2)
{
  struct DXGGLOBAL *Global; // rax
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 == 2 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))DisplayTelemetryEnabledCallback,
      (__int64)&ActivityId,
      1);
  }
}
