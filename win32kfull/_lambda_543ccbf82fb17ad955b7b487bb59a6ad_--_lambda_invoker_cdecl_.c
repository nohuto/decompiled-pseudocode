char __fastcall lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_(unsigned __int64 a1, __int64 a2)
{
  char result; // al
  const struct tagWND *v5; // rcx
  struct tagTHREADINFO **CompositeAppFrameWindowOrSelf; // rax

  result = gpqForeground;
  if ( gpqForeground )
  {
    v5 = *(const struct tagWND **)(gpqForeground + 128LL);
    if ( v5 )
    {
      CompositeAppFrameWindowOrSelf = (struct tagTHREADINFO **)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v5);
      if ( (dword_1C030FB5C[10 * (unsigned int)(a1 - 16)] & 1) != 0 )
        return PostEventMessageWindow(CompositeAppFrameWindowOrSelf, 0x11u, a1, 0LL);
      else
        return NotifyShell::ArrangementHotKey(0LL, a2);
    }
  }
  return result;
}
