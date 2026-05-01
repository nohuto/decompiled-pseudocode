/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$9 @ 0x1801007C1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800A1338 (--1-$com_ptr@UIStream@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync__ResumeCoro_2_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1992) = *(_QWORD *)(a2 + 2048) + 864LL;
  return winrt::com_ptr<IStream>::~com_ptr<IStream>(*(_QWORD **)(a2 + 1992));
}
