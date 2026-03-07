char __fastcall VidSchIsVSyncEnabled(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rdi
  char v4; // si
  int v5; // eax
  struct _ERESOURCE *v6; // rcx
  char VSyncSuspended; // r14
  char v8; // al
  char v10; // cl
  enum _DXGK_INTERRUPT_TYPE v11; // edx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // edx

  v2 = a2;
  if ( a1 )
  {
    if ( a2 >= *((_DWORD *)a1 + 10) )
    {
      WdLogSingleEntry1(1LL, a2);
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      return 0;
    }
    else
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1088), 1u);
      v4 = 0;
      if ( (unsigned int)v2 >= *((_DWORD *)a1 + 10) )
      {
        WdLogSingleEntry1(1LL, v2);
        DxgkLogInternalTriageEvent(v15, 0x40000LL);
      }
      else
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1088), 1u);
        v5 = *((_DWORD *)a1 + 552);
        v6 = (struct _ERESOURCE *)((char *)a1 + 1088);
        if ( _bittest(&v5, v2) )
        {
          ExReleaseResourceLite(v6);
          VSyncSuspended = VidSchiGetVSyncSuspended((__int64)a1, v2);
          if ( VSyncSuspended )
          {
            v10 = *((_BYTE *)a1 + 2212);
            if ( v10 )
              v11 = *((_DWORD *)a1 + v2 + 456);
            else
              v11 = *((_DWORD *)a1 + 456);
            if ( v11 )
            {
              if ( v10 )
                v12 = v2;
              else
                v12 = -3;
              LOBYTE(v11) = 1;
              VidSchiControlVSync((__int64)a1, v11, 65539, v12);
            }
            else
            {
              VidSchiSetVSyncSuspended((__int64)a1, v2, 0);
            }
          }
          v8 = *((_BYTE *)a1 + 2212);
          if ( v8 )
            v4 = *((_BYTE *)a1 + v2 + 1808);
          else
            v4 = *((_BYTE *)a1 + 1808);
          if ( v4 && !VSyncSuspended )
          {
            if ( v8 )
              _InterlockedExchange((volatile __int32 *)a1 + v2 + 568, 1);
            else
              _InterlockedExchange((volatile __int32 *)a1 + 568, 1);
          }
          if ( *((_BYTE *)a1 + 59) && v4 )
          {
            if ( (unsigned int)DXGADAPTER::NumberOfVSyncWaiter(*((DXGADAPTER **)a1 + 2), v2) )
              VidSchiSetInterruptTargetPresentId(a1, v16, 0, 0LL, 1, 0);
          }
        }
        else
        {
          ExReleaseResourceLite(v6);
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1088));
      return v4;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 0;
  }
}
