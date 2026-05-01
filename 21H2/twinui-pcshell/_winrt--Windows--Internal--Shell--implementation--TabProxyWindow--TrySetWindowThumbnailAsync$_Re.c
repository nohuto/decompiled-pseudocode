/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$0 @ 0x1801007E8
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x1800F4834 (--1WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync__ResumeCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1936) = *(_QWORD *)(a2 + 2048) + 16LL;
  WindowTabHostTelemetry::WindowTabHostThumbnailRequested::~WindowTabHostThumbnailRequested(*(WindowTabHostTelemetry::WindowTabHostThumbnailRequested **)(a2 + 1936));
}
