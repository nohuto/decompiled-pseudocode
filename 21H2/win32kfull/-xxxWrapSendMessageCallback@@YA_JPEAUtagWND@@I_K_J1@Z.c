/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0040480
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageCallback @ 0x1C00405E4 (xxxSendMessageCallback.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(struct tagWND *a1, int a2, int a3, int a4, ULONG64 a5)
{
  _BYTE *v9; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-50h]
  __int128 v15; // [rsp+68h] [rbp-40h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h]

  v15 = 0LL;
  v16 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[15] = v9[15];
    *(_OWORD *)BugCheckParameter3 = *(_OWORD *)a5;
    if ( a1 != (struct tagWND *)-1LL )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v15 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v15;
      *((_QWORD *)&v15 + 1) = a1;
      HMLockObject(a1);
    }
    v12 = (int)xxxSendMessageCallback((int)a1, a2, a3, a4, BugCheckParameter3[0], BugCheckParameter3[1], 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v11);
    return v12;
  }
}
