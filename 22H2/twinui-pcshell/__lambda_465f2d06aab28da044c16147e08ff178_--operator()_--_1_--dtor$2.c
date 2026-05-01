/*
 * XREFs of __lambda_465f2d06aab28da044c16147e08ff178_::operator()_::_1_::dtor$2 @ 0x180147D7B
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A1308 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_465f2d06aab28da044c16147e08ff178_::operator()_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(__int64 **)(a2 + 128));
  }
}
