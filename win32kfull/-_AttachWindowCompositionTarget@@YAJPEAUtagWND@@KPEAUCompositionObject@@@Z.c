__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, int a2, struct CompositionObject *a3)
{
  __int64 v4; // rdi
  signed int VisRgnTracker; // ebx
  CWindowProp *v7; // rsi
  char v8; // r14
  int v9; // edx
  CWindowProp *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a2;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v11) )
  {
    v7 = v11;
    v8 = 0;
    VisRgnTracker = *((_QWORD *)v11 + 2 * v4 + 3) != 0LL ? 0xC0000022 : 0;
    if ( *((_QWORD *)v11 + 2 * v4 + 3) )
      return (unsigned int)VisRgnTracker;
  }
  else
  {
    VisRgnTracker = CWindowProp::CreateWindowProp<CHwndTargetProp>(&v11);
    if ( VisRgnTracker < 0 )
      return (unsigned int)VisRgnTracker;
    v7 = v11;
    if ( !(unsigned int)CWindowProp::SetProp(v11, (unsigned __int64)a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v7)(v7);
      return (unsigned int)-1073741790;
    }
    v8 = 1;
  }
  VisRgnTracker = CHwndTargetProp::SetSystemVisual(v7, (unsigned int)v4, a3);
  if ( VisRgnTracker < 0 )
    goto LABEL_13;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
      return (unsigned int)VisRgnTracker;
    v9 = 8;
  }
  else
  {
    v9 = 4;
  }
  VisRgnTracker = CreateVisRgnTracker(a1, v9);
  if ( VisRgnTracker < 0 )
  {
LABEL_13:
    if ( v8 )
      CWindowProp::RemoveAndDeleteProp(v7);
  }
  return (unsigned int)VisRgnTracker;
}
