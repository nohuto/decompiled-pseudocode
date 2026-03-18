/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00EA5C0
 * Callers:
 *     FreeHook @ 0x1C0070000 (FreeHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C004DAB0 (PhkFirstGlobalValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C004DBCC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     PhkFirstValid @ 0x1C00EA6F4 (PhkFirstValid.c)
 */

void __fastcall CheckWHFBits(PRKPROCESS **a1, unsigned int a2)
{
  int v4; // r15d
  BOOL v5; // esi
  __int64 v6; // r8
  __int64 Valid; // rax
  PRKPROCESS *v8; // r15
  int v9; // edx

  LockRefactorStagingAssertAny((PERESOURCE *)gDomainHookLock);
  v4 = 1;
  v5 = 1;
  Valid = PhkFirstValid(a1, a2, v6);
  if ( Valid )
  {
    if ( (*(_DWORD *)(Valid + 64) & 1) != 0 )
    {
      v5 = 0;
    }
    else
    {
      v4 = 0;
      v5 = PhkFirstGlobalValid((__int64)a1, a2) == 0;
    }
  }
  if ( v4 )
  {
    *((_DWORD *)a1 + 170) &= ~(1 << (a2 + 1));
    if ( a1[60] )
    {
      v8 = a1[53];
      if ( v8 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(a2 + 1) )
      {
        v9 = 0;
      }
      else
      {
        KeAttachProcess(*v8);
        v9 = 1;
      }
      *((_DWORD *)a1[60] + 14) = *((_DWORD *)a1 + 170);
      if ( v9 )
        KeDetachProcess();
    }
  }
  if ( v5 )
    *((_DWORD *)*a1[58] + 4) &= ~(1 << (a2 + 1));
}
