/*
 * XREFs of _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::__lambda_536d29ca497f1a4a88268fb5f9ff4d76_ @ 0x1800CE9D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_536d29ca497f1a4a88268fb5f9ff4d76___::_scalar_deleting_destructor_ @ 0x1800D0090 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_536d29ca497f1a4a88268fb5f9ff4d76___--_scala.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1803BE070 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18020F990 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7290 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

void __fastcall lambda_536d29ca497f1a4a88268fb5f9ff4d76_::__lambda_536d29ca497f1a4a88268fb5f9ff4d76_(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5));
  v2 = (std::_Ref_count_base *)a1[4];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 1));
}
