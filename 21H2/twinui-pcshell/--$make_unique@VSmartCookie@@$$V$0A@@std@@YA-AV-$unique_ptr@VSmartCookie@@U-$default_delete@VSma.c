/*
 * XREFs of ??$make_unique@VSmartCookie@@$$V$0A@@std@@YA?AV?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@0@XZ @ 0x1803AA1D8
 * Callers:
 *     ?Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1803AEF90 (-Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationVie.c)
 *     ?Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService@@@Z @ 0x1803AF090 (-Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<SmartCookie,,0>(_QWORD *a1)
{
  _QWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x80uLL);
  v3[14] = 0LL;
  *((_DWORD *)v3 + 30) = 0;
  *a1 = v3;
  return a1;
}
