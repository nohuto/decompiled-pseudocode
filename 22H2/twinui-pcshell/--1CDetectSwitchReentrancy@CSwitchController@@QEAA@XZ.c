/*
 * XREFs of ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x18043A718
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18043AB40 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     _CSwitchController::SwitchToApp_::_1_::dtor$0 @ 0x18043AC65 (_CSwitchController--SwitchToApp_--_1_--dtor$0.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18043AC90 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     _CSwitchController::SwitchToAppByIdWithArguments_::_1_::dtor$0 @ 0x18043AE2A (_CSwitchController--SwitchToAppByIdWithArguments_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy(
        CSwitchController::CDetectSwitchReentrancy *this)
{
  if ( *(_QWORD *)this )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)this + 104LL), 0xFFFFFFFF) == 1 )
      *(_DWORD *)(*(_QWORD *)this + 108LL) = 0;
  }
}
