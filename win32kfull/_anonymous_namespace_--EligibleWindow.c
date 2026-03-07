bool __fastcall anonymous_namespace_::EligibleWindow(struct tagWND *a1, int a2)
{
  int v4; // ecx
  struct tagWND *RootOwner; // rax

  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( v4 != 1 && !(unsigned int)IsImmersiveApplicationBandId(v4) )
    return 0;
  if ( !a2 || IsTrayWindow(a1, 2) )
    return 1;
  if ( a2 == 2 && (RootOwner = GetRootOwner(a1), RootOwner != a1) )
    return IsTrayWindow(RootOwner, 2);
  else
    return 0;
}
