/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UISwitchItemGrid@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@UIMultitaskingViewTelemetryHost@@UIScrollableElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180415F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x180404CE0 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CMultitaskingViewElementBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,ISwitchItemGrid,IObservableObjectArrayChanged,IObservableObjectArrayChangedBeginEnd,IMultitaskingViewTelemetryHost,IScrollableElement>::`vector deleting destructor'(
        CMultitaskingViewElementBase *Block,
        char a2)
{
  *((_DWORD *)Block + 63) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
