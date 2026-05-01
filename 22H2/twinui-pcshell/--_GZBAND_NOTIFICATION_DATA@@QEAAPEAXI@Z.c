/*
 * XREFs of ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1801CFC10
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x18006E320 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x18006E440 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ZBAND_NOTIFICATION_DATA *__fastcall ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(
        ZBAND_NOTIFICATION_DATA *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
