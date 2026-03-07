__int64 __fastcall SkipWindowOnMonitor(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 *v3; // rsi
  struct tagMONITOR *v4; // rbp
  __int64 *i; // rdi

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  if ( v1 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) == 1 && *(_QWORD *)(v1 + 280) )
  {
    v3 = (__int64 *)(v1 + 304);
    v4 = _MonitorFromWindowInternal(a1, 0, 0);
    for ( i = *(__int64 **)(v1 + 304); i != v3; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && _MonitorFromWindowInternal((struct tagWND *)i[2], 0, 0) == v4 )
        return 1;
    }
  }
  return v2;
}
