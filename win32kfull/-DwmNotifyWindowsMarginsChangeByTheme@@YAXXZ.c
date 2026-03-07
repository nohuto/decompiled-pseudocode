void DwmNotifyWindowsMarginsChangeByTheme(void)
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rdi
  __int64 *v2; // rsi
  struct tagWND *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax

  v0 = gSharedInfo[1];
  v1 = v0 + 32LL * giheLast;
  v2 = (__int64 *)gpKernelHandleTable;
  while ( v0 <= v1 )
  {
    if ( *v2 && *(_BYTE *)(v0 + 24) == 1 && (*(_BYTE *)(v0 + 25) & 1) == 0 && !(unsigned int)IsMotherDesktopWindow(*v2) )
    {
      v5 = *((_QWORD *)v3 + 3);
      v6 = 0LL;
      if ( v5 )
        v6 = *(_QWORD *)(v5 + 104);
      if ( *((_QWORD *)v3 + 13) != v6 )
        WindowMargins::CheckForChanges(v3, 2LL, v4);
    }
    v0 += 32LL;
    v2 += 3;
  }
}
