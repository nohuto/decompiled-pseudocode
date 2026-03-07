void __fastcall _RemoveClipboardFormatListener(struct tagWND *a1)
{
  struct tagWND **v1; // rcx
  struct tagWND *v2; // rax
  struct tagWND *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = (struct tagWND **)(GetProcessWindowStation(0LL) + 152);
  v2 = *v1;
  if ( *v1 )
  {
    while ( v2 != v3 )
    {
      v1 = (struct tagWND **)((char *)v2 + 240);
      v2 = (struct tagWND *)*((_QWORD *)v2 + 30);
      if ( !v2 )
        return;
    }
    *v1 = (struct tagWND *)*((_QWORD *)v3 + 30);
    *((_QWORD *)v3 + 30) = 0LL;
    *((_DWORD *)v3 + 80) &= ~0x800000u;
    HMAssignmentUnlock(&v3);
  }
}
