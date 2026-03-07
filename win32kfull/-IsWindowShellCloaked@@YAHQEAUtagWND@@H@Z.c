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
