/*
 * XREFs of _SearchAppDesktopExperienceView::GetViewWrapper_::_1_::dtor$0 @ 0x1801728C6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A76C8 (--1-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::GetViewWrapper_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::~ComPtr<IImmersiveMonitorManager>(*(_QWORD *)(a2 + 72));
  }
  return result;
}
