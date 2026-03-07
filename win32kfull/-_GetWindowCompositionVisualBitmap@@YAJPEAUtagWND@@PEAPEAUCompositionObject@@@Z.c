__int64 __fastcall _GetWindowCompositionVisualBitmap(struct tagWND *a1, struct CompositionObject **a2)
{
  int v4; // esi
  struct tagWND *v5; // rdx
  CompositionObject **v6; // rbx
  CHwndBitmapProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndBitmapProp>(a1, &v8) )
  {
    v6 = (CompositionObject **)v8;
  }
  else
  {
    v4 = CWindowProp::CreateWindowProp<CHwndBitmapProp>(&v8);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v5 = a1;
    v6 = (CompositionObject **)v8;
    if ( !(unsigned int)CWindowProp::SetProp(v8, v5) )
    {
      (*(void (__fastcall **)(CompositionObject **))*v6)(v6);
      return (unsigned int)-1073741801;
    }
    v4 = CHwndBitmapProp::Initialize((CHwndBitmapProp *)v6);
    if ( v4 < 0 )
    {
      CWindowProp::RemoveAndDeleteProp((CWindowProp *)v6);
      return (unsigned int)v4;
    }
  }
  v4 = CompositionObject::AddRef(v6[3]);
  if ( v4 >= 0 )
    *a2 = v6[3];
  return (unsigned int)v4;
}
