bool __fastcall IsWindowActivateable(const struct tagWND *a1)
{
  char v2; // dl
  struct tagWND *CompositeAppFrameWindowOrSelf; // rbx

  if ( !a1 )
    return 0;
  v2 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v2 & 0x10) == 0 || (v2 & 8) != 0 )
    return 0;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(a1);
  return IsWindowHolographicForHitTest(CompositeAppFrameWindowOrSelf)
      || (unsigned int)GetWindowCloakState((struct tagTHREADINFO **)CompositeAppFrameWindowOrSelf) == 0;
}
