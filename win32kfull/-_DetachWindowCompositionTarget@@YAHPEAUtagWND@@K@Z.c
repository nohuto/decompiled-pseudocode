__int64 __fastcall _DetachWindowCompositionTarget(struct tagWND *a1, unsigned int a2)
{
  unsigned int v3; // ebp
  CWindowProp *v5; // rdi
  int v6; // edx
  CWindowProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v8 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v8) )
  {
    v5 = v8;
    v3 = CHwndTargetProp::ClearSystemVisual(v8, a2);
    if ( !*((_QWORD *)v5 + 3) && !*((_QWORD *)v5 + 5) && !*((_QWORD *)v5 + 7) )
      CWindowProp::RemoveAndDeleteProp(v5);
    if ( a2 )
    {
      if ( a2 != 1 )
        return v3;
      v6 = 8;
    }
    else
    {
      v6 = 4;
    }
    RemoveVisRgnTracker((__int64)a1, v6);
  }
  return v3;
}
