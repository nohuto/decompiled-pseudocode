/*
 * XREFs of ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00E68D0
 * Callers:
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035B2C (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall IsWindowShellCloaked(struct tagWND *const TopLevelHostForComponent, int a2)
{
  unsigned int v2; // edi
  _WORD v6[32]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  memset_0(v6, 0, sizeof(v6));
  while ( 1 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelHostForComponent) )
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelHostForComponent);
    if ( !TopLevelHostForComponent
      || !(unsigned int)_GetWindowCompositionInfo(TopLevelHostForComponent, (struct WINDOWCOMPOSITIONINFO *)v6) )
    {
      break;
    }
    if ( (v6[0] & 0x800) != 0 )
      return 1;
    if ( a2 )
      return v2;
    TopLevelHostForComponent = (struct tagWND *const)*((_QWORD *)TopLevelHostForComponent + 13);
  }
  return v2;
}
