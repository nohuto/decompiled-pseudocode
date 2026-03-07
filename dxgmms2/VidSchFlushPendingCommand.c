__int64 __fastcall VidSchFlushPendingCommand(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 **v8; // rdi
  __int64 *v9; // rcx
  __int64 *v10; // rax
  struct _VIDSCH_QUEUE_PACKET *v11; // rcx
  int v12; // eax

  v3 = a2;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(a1 + 432) )
    {
      v8 = (__int64 **)(a1 + 680);
      do
      {
        v9 = *v8;
        if ( (__int64 **)(*v8)[1] != v8 || (v10 = (__int64 *)*v9, *(__int64 **)(*v9 + 8) != v9) )
          __fastfail(3u);
        *v8 = v10;
        v11 = (struct _VIDSCH_QUEUE_PACKET *)(v9 - 4);
        v10[1] = (__int64)v8;
        v12 = *(_DWORD *)(a1 + 432) - 1;
        *(_DWORD *)(a1 + 432) = v12;
        if ( v3 || (a2 = *((unsigned int *)v11 + 18), (a2 & 0x40) == 0) )
        {
          VidSchiDiscardQueuePacket(v11, a2, a3);
        }
        else
        {
          if ( !v12 )
            *((_DWORD *)v11 + 18) = a2 & 0xFFFFFF7F | *((_DWORD *)v11 + 68) & 0x80 | 0x4000;
          VidSchiSubmitCommandPacketToQueue((__int64)v11);
        }
      }
      while ( *(_DWORD *)(a1 + 432) );
    }
    *(_DWORD *)(v7 + 504) = -1;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
}
