/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C0209148
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C01F7B40 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C003727C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // ebx

  v6 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0, a3) )
  {
    UserSetLastError(5LL, v4, v5);
  }
  else
  {
    v6 = 1;
    SetOrClrWF(1, (__int64)a1, 0xDA01u, 0);
  }
  return v6;
}
