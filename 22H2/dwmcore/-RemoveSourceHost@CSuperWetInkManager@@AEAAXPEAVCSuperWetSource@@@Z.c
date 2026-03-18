/*
 * XREFs of ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC4DC
 * Callers:
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC49C (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18011B9A4 (memmove_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B5B34 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801CBCC0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x18022EAF4 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 */

void __fastcall CSuperWetInkManager::RemoveSourceHost(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  __int64 i; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *((_QWORD *)this + 8); i != *((_QWORD *)this + 9); i += 120LL )
  {
    if ( *(struct CSuperWetSource **)i == a2 )
    {
      if ( *(_QWORD *)i == *((_QWORD *)this + 1) )
        CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
      v4 = CSuperWetSource::SendMessageToHostForDestruction(*(CSuperWetSource **)i, *(_QWORD *)(i + 24));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          140LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
          (const char *)(unsigned int)v4);
      memmove_0((void *)i, (const void *)(i + 120), *((_QWORD *)this + 9) - (i + 120));
      *((_QWORD *)this + 9) -= 120LL;
      return;
    }
  }
}
