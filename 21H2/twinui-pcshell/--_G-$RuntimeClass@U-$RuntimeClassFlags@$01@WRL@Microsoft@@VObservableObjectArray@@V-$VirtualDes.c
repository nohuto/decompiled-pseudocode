/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180401FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1ObservableObjectArray@@QEAA@XZ @ 0x180400624 (--1ObservableObjectArray@@QEAA@XZ.c)
 */

ObservableObjectArray *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`scalar deleting destructor'(
        ObservableObjectArray *Block,
        char a2)
{
  *((_DWORD *)Block + 39) = -1073741823;
  ObservableObjectArray::~ObservableObjectArray(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
