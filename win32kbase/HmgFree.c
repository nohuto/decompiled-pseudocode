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
