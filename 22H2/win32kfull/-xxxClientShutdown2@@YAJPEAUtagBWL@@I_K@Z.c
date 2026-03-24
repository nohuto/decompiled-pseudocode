/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C000B354
 * Callers:
 *     xxxClientShutdown @ 0x1C000B2CC (xxxClientShutdown.c)
 * Callees:
 *     DestroyWindowsTimers @ 0x1C000B4B8 (DestroyWindowsTimers.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, __int64 a2, int a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r15
  int v5; // r13d
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  BOOL v10; // edi
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]

  v3 = (_QWORD *)((char *)a1 + 32);
  v12 = 0LL;
  v13 = 0LL;
  v4 = a3 & 0x108;
  v5 = a2;
  v6 = a3 & 0xC0000001;
  v7 = a3 & 0x100;
  while ( 1 )
  {
    if ( *v3 == 1LL )
      return 1LL;
    LOBYTE(a2) = 1;
    v8 = HMValidateHandleNoSecure(*v3, a2);
    if ( v8 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v12 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v12;
      *((_QWORD *)&v12 + 1) = v8;
      HMLockObject(v8);
      if ( v5 == 17 )
      {
        v10 = gptiCurrent == gptiShutdownNotify || xxxSendMessage(v8, 17LL, 0LL, v6) != 0;
      }
      else
      {
        xxxSendMessage(v8, 22LL, v7 != 0, v6);
        v10 = 1;
        if ( v4 == 264 )
          DestroyWindowsTimers(v8);
      }
      ThreadUnlock1();
      if ( !v10 )
        break;
    }
    ++v3;
  }
  return 3LL;
}
