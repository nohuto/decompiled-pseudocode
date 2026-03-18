/*
 * XREFs of ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151E84
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v1; // edi
  __int64 v3; // rax
  struct tagWND *v5; // rbx
  unsigned __int16 v6; // cx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
  if ( !v3 )
  {
    v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
    if ( !v3 )
      return 0LL;
    v1 = 1;
  }
  v5 = (struct tagWND *)HMValidateHandleNoSecure(v3, 1);
  if ( v5 )
  {
    v10 = 0LL;
    v11 = 0LL;
    ThreadLock((__int64)v5, (__int64 *)&v10);
    if ( v1 )
      v6 = *(_WORD *)(gpsi + 1378LL);
    else
      v6 = *(_WORD *)(gpsi + 900LL);
    InternalRemoveProp((__int64)v5, v6, 1u);
    xxxHideGhostWindow(a1, v5);
    ThreadUnlock1(v8, v7, v9);
  }
  return 0LL;
}
