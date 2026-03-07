bool __fastcall IsPwndComponentWebview(const struct tagWND *a1)
{
  struct tagWND *Host; // rax
  __int64 Parent; // rax

  Host = CoreWindowProp::GetHost(a1);
  return Host && (Parent = GetParent(Host)) != 0 && (*(_BYTE *)(*(_QWORD *)(Parent + 40) + 233LL) & 8) != 0;
}
