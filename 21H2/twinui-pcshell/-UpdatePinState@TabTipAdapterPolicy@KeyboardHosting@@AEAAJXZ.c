/*
 * XREFs of ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1803D9AC4
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1803D909C (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::UpdatePinState(KeyboardHosting::TabTipAdapterPolicy *this)
{
  bool v1; // bl
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  pcbData = 4;
  pvData = 0;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
          L"TipPinnedToMonitor",
          0x10u,
          0LL,
          &pvData,
          &pcbData)
    || (pcbData = 4,
        !RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
           L"TipPinnedToMonitor",
           0x10u,
           0LL,
           &pvData,
           &pcbData)) )
  {
    v1 = pvData != 0;
  }
  *((_BYTE *)this + 500) = v1;
  return 0LL;
}
