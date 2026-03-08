/*
 * XREFs of ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00D8280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxWrapSendNotifyMessage(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    if ( a1 != (struct tagWND *)-1LL )
      ThreadLockAlways(a1, &v13);
    v10 = (int)xxxSendNotifyMessage(a1, a2, a3, a4, 0);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v9, v8, v11);
    return v10;
  }
}
