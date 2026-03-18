/*
 * XREFs of NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0008CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJPEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x1C0008FA8 (-AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJPEBUTOUCH_TELEMETRY_BEGIN_INFO@@.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010268 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionBegin(unsigned int a1, size_t Size, char *Src)
{
  int v4; // ebx
  struct DirectComposition::CApplicationChannel *v5; // rdi
  struct DirectComposition::CApplicationChannel *v7; // [rsp+28h] [rbp-60h] BYREF
  _OWORD v8[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]

  v4 = 0;
  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  if ( !Src || Size != 56 )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v8, Src, Size);
    v4 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
    v5 = v7;
    if ( v4 >= 0 )
    {
      v4 = DirectComposition::CTelemetryInfo::AddInteractionBeginInfo(
             (struct DirectComposition::CApplicationChannel *)((char *)v7 + 1552),
             (const struct TOUCH_TELEMETRY_BEGIN_INFO *)v8);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
    }
  }
  return (unsigned int)v4;
}
