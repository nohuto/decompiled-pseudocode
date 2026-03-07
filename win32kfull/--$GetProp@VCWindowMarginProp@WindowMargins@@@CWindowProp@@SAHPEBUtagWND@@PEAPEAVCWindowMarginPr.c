_BOOL8 __fastcall CWindowProp::GetProp<WindowMargins::CWindowMarginProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, WindowMargins::CWindowMarginProp::s_atom, 1u);
  *a2 = Prop;
  return Prop != 0;
}
