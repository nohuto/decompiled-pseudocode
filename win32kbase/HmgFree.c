/*
 * XREFs of HmgFree @ 0x1C0059850
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0051320 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     FreeObject @ 0x1C00597F0 (FreeObject.c)
 */

void __fastcall HmgFree(__int64 a1)
{
  unsigned int v1; // ebx
  struct OBJECT *v2; // rdi
  unsigned __int8 v3; // si
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v1 = a1;
  v2 = 0LL;
  v3 = 0;
  SGDGetSessionState(a1);
  GreAcquireHmgrSemaphore(v4);
  v8 = 0LL;
  v9 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v8, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v9 )
  {
    v2 = HANDLELOCK::pObj((HANDLELOCK *)&v8);
    v3 = *(_BYTE *)(v8 + 14);
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v8, v6, v7);
    if ( v9 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
  }
  GreReleaseHmgrSemaphore(v5);
  if ( v2 )
    FreeObject(v2, v3);
}
