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
