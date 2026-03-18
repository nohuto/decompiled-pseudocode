/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C010945C
 * Callers:
 *     xxxClientShutdown @ 0x1C01093D0 (xxxClientShutdown.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     DestroyWindowsTimers @ 0x1C0060DA4 (DestroyWindowsTimers.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, int a2, __int16 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r15
  ULONG_PTR v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]

  v3 = (_QWORD *)((char *)a1 + 32);
  v13 = 0LL;
  v14 = 0LL;
  v4 = a3 & 0x108;
  while ( 1 )
  {
    if ( *v3 == 1LL )
      return 1LL;
    v6 = HMValidateHandleNoSecure(*v3, 1);
    if ( v6 )
      break;
LABEL_3:
    ++v3;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v13 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v13;
  *((_QWORD *)&v13 + 1) = v6;
  HMLockObject(v6);
  if ( a2 != 17 )
  {
    xxxSendMessage(v6);
    v11 = 1;
    if ( v4 != 264 )
      goto LABEL_2;
    DestroyWindowsTimers();
    goto LABEL_9;
  }
  if ( gptiCurrent == gptiShutdownNotify || xxxSendMessage(v6) )
  {
LABEL_9:
    ThreadUnlock1(v9, v8, v10);
    goto LABEL_3;
  }
  v11 = 0;
LABEL_2:
  ThreadUnlock1(v9, v8, v10);
  if ( v11 )
    goto LABEL_3;
  return 3LL;
}
