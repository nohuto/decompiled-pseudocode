/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2_::_1_::dtor$13 @ 0x1800FC6F9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800A1358 (--1-$com_ptr@UIStream@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync__ResumeCoro_2_::_1_::dtor_13(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 2072) = *(_QWORD *)(a2 + 2128) + 992LL;
  return winrt::com_ptr<IStream>::~com_ptr<IStream>(*(_QWORD **)(a2 + 2072));
}
