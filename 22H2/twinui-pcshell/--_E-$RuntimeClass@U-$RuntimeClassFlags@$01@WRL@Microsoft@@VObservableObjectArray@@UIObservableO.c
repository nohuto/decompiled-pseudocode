/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804030C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1ObservableObjectArray@@QEAA@XZ @ 0x180400354 (--1ObservableObjectArray@@QEAA@XZ.c)
 */

ObservableObjectArray *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableObjectArray,IObservableObjectArrayChanged,IObservableObjectArrayChangedBeginEnd,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::ChainInterfaces<ISwitchItemFilteredCollection,IObservableObjectArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::`vector deleting destructor'(
        ObservableObjectArray *Block,
        char a2)
{
  *((_DWORD *)Block + 45) = -1073741823;
  ObservableObjectArray::~ObservableObjectArray(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
