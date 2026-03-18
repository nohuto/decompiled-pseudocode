/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00ACCB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  unsigned int v5; // edi
  _BYTE *v7; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v14[2]; // [rsp+58h] [rbp-50h]
  __int128 v15; // [rsp+68h] [rbp-40h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h]

  v5 = a2;
  v15 = 0LL;
  v16 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[15] = v7[15];
    *(_OWORD *)v14 = *(_OWORD *)a5;
    if ( a1 != (struct tagWND *)-1LL )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v15 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v15;
      *((_QWORD *)&v15 + 1) = a1;
      HMLockObject(a1);
    }
    v11 = (int)xxxSendMessageCallback(a1, v5, v14[0], v14[1], 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v10, v9, v12);
    return v11;
  }
}
