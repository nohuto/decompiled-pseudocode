/*
 * XREFs of ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00ACAD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxWrapSendNotifyMessage(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v6 = a2;
  v14 = 0LL;
  v15 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  else
  {
    if ( a1 != (struct tagWND *)-1LL )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v14 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v14;
      *((_QWORD *)&v14 + 1) = a1;
      HMLockObject(a1);
    }
    v11 = (int)xxxSendNotifyMessage(a1, v6, a3, a4, 0);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v10, v9, v12);
    return v11;
  }
}
