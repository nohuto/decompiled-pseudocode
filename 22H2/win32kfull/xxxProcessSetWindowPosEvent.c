/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C01246C0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 * Callees:
 *     ??9?$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z @ 0x1C00146D0 (--9-$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C006B960 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

void __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  void **v2; // rsi
  int v3; // eax
  unsigned __int64 *v4; // rdi
  int i; // ebp
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r9

  v2 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(v2[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v3 = *(_DWORD *)(a1 + 28);
    v4 = (unsigned __int64 *)v2[5];
    *((_DWORD *)v2 + 7) = v3;
    for ( i = v3 - 1; i >= 0; --i )
    {
      if ( (*((_DWORD *)v4 + 39) & 0x20) != 0 )
      {
        if ( *v4 )
        {
          v6 = HMValidateHandleNoSecure(*v4, 1);
          if ( v6 )
          {
            if ( tagWND::RedirectedFieldhMonitor<HMONITOR__ *>::operator!=(v6 + 215, v4 + 16) )
              *v7 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 256LL);
          }
        }
      }
      v4 += 21;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0);
  }
  Win32FreePool((void *)a1);
}
