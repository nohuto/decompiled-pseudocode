/*
 * XREFs of ??_G?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180016AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Microsoft::WRL::SimpleClassFactory<ToastNotification::ActivityToastNotificationCallback,0>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
