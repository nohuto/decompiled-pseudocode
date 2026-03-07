__int64 __fastcall MonitorGetDisplayIDFromMonitor(__int64 a1, unsigned int a2, unsigned int *a3, void *a4)
{
  char *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  void *v11; // rsi
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&Src, a1);
    v7 = (char *)Src;
    if ( Src )
    {
      v8 = *(_QWORD *)(*((_QWORD *)Src + 27) + 136LL);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, void **, unsigned int *))(*(_QWORD *)v8 + 232LL))(v8, &Src, a3);
        v11 = Src;
        if ( Src )
        {
          if ( a4 && a2 && a2 >= *a3 )
          {
            memmove(a4, Src, *a3);
            Src = 0LL;
            if ( v11 )
              operator delete(v11);
            v9 = 0;
          }
          else
          {
            wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::~unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>(&Src);
            v9 = -1073741789;
          }
        }
        else
        {
          wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::~unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>(&Src);
          v9 = -1073741801;
        }
      }
      else
      {
        *a3 = 0;
        v9 = -1071841279;
      }
    }
    else
    {
      v9 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v7 )
    {
      ExReleaseResourceLite((PERESOURCE)(v7 + 24));
      KeLeaveCriticalRegion();
    }
    return v9;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
