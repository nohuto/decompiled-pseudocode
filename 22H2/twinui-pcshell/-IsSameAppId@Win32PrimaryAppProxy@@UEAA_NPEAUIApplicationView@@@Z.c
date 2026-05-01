/*
 * XREFs of ?IsSameAppId@Win32PrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z @ 0x18044B9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Win32PrimaryAppProxy::IsSameAppId(Win32PrimaryAppProxy *this, struct IApplicationView *a2)
{
  return Win32PrimaryAppInformation::IsSameAppId((Win32PrimaryAppProxy *)((char *)this + 8), a2);
}
