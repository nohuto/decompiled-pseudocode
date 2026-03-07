__int64 __fastcall CoreWindowProp::IsPartOfCompositeApplication(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  bool v3; // zf

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
    v3 = CoreWindowProp::GetTopLevelHost(a1) == 0LL;
  else
    v3 = (unsigned int)CoreWindowProp::IsHost(a1) == 0;
  LOBYTE(v1) = !v3;
  return v1;
}
