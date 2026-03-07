void __fastcall IOCPDispatcher::CleanupThreadDispatcherObjects(IOCPDispatcher *this)
{
  char *v1; // rbx
  char *v3; // rsi
  void *v4; // rcx

  v1 = (char *)this + 2576;
  v3 = (char *)this + 2896;
  while ( v1 != v3 )
  {
    v4 = (void *)*((_QWORD *)v1 + 1);
    if ( v4 )
    {
      ZwClose(v4);
      *((_QWORD *)v1 + 1) = 0LL;
      *(_QWORD *)v1 = 0LL;
    }
    v1 += 32;
  }
  *((_DWORD *)this + 724) = 0;
}
