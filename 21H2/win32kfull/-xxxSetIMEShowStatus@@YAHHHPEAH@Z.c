/*
 * XREFs of ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x1C0120DDC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UpdateWinIniInt @ 0x1C0158014 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01DE204 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(unsigned int a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  if ( HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) == a1 )
    return 1LL;
  if ( !(_DWORD)a2 )
    goto LABEL_4;
  v16 = 0LL;
  v17 = 0LL;
  v7 = CreateProfileUserName(&v16, a2, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    *a3 = UpdateWinIniInt(v7, 35LL, 236LL, a1);
    FreeProfileUserName(v8, &v16);
  }
  if ( *a3 )
  {
LABEL_4:
    HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = a1;
    if ( (*gpsi & 4) != 0 )
    {
      if ( gpqForeground )
      {
        v9 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 16);
          v17 = 0LL;
          v11 = *(_QWORD *)(v10 + 784);
          if ( v11 )
          {
            if ( (*(_DWORD *)(v10 + 488) & 1) == 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = &v16;
              *((_QWORD *)&v16 + 1) = v11;
              HMLockObject(v11);
              xxxNotifyImeShowStatus(*(struct tagWND **)(v10 + 784));
              ThreadUnlock1(v14, v13, v15);
            }
          }
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
