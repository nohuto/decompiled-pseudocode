__int64 __fastcall HmgQueryRemoveAttempted(struct HOBJ__ *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v1 = (unsigned int)a1;
  v2 = 0;
  GreAcquireHmgrSemaphore((__int64)a1);
  v5 = 0LL;
  v6 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v6 )
  {
    HANDLELOCK::pObj((HANDLELOCK *)&v5);
    if ( *(_BYTE *)(v5 + 14) == 1 && *(_WORD *)(v5 + 12) == HIWORD(v1) )
      v2 = (*(unsigned __int8 *)(v5 + 15) >> 3) & 1;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    if ( v6 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  }
  GreReleaseHmgrSemaphore(v3);
  return v2;
}
