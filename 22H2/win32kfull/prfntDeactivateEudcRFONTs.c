/*
 * XREFs of prfntDeactivateEudcRFONTs @ 0x1C0114FEC
 * Callers:
 *     bUnloadEudcFont @ 0x1C0114E84 (bUnloadEudcFont.c)
 * Callees:
 *     vDeactivateEudcRFONTsWorker @ 0x1C013FC0C (vDeactivateEudcRFONTsWorker.c)
 */

__int64 __fastcall prfntDeactivateEudcRFONTs(Gre::Base *a1)
{
  __int64 v1; // rbp
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v12 = 0LL;
  v3 = Gre::Base::Globals(a1);
  v4 = *((_QWORD *)v3 + 6);
  GreAcquireSemaphore(v4);
  v5 = *((_QWORD *)v3 + 3);
  GreAcquireSemaphore(v5);
  v7 = 0LL;
  v8 = *(_QWORD *)(SGDGetSessionState(v6) + 32);
  v9 = *(_QWORD *)(v8 + 20272);
  if ( *(_DWORD *)(v9 + 24) )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 8 * v7 + 40);
      if ( v10 )
        vDeactivateEudcRFONTsWorker(v8, a1, v10, &v12);
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *(_DWORD *)(v9 + 24) );
    v1 = v12;
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v5);
  }
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v4);
  }
  return v1;
}
