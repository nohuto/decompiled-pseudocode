void __fastcall ImeCheckTopmost(struct tagWND *a1)
{
  int v2; // r9d
  struct tagWND *v3; // rcx
  struct tagWND *v4; // r8

  v2 = 0;
  v3 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v3 )
  {
    v4 = v3;
    if ( *((_QWORD *)a1 + 2) == gptiForeground )
      v4 = 0LL;
    if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 24LL) & 8) != 0 || *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 1 )
      v2 = 1;
    ImeSetTopmost(a1, v2, v4);
  }
}
