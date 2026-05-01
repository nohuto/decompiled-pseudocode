/*
 * XREFs of ??$make_self@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1800E6C3C
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800E76C0 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 */

_QWORD *__fastcall winrt::make_self<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx

  v2 = operator new(0x58uLL);
  memset_0(v2, 0, 0x58uLL);
  *v2 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,std::tuple<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>>::`vftable';
  *((_DWORD *)v2 + 4) = 1;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *a1 = v2;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[5] = 0LL;
  v2[6] = 0LL;
  v2[7] = 0LL;
  v2[8] = 0LL;
  v2[9] = 0LL;
  v2[10] = 0LL;
  *v2 = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,std::tuple<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>>'};
  v2[1] = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>'};
  return a1;
}
