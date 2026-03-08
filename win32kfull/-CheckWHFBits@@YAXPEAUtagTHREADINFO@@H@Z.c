/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C001D504
 * Callers:
 *     FreeHook @ 0x1C0039160 (FreeHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C001D640 (PhkFirstGlobalValid.c)
 *     PhkFirstValid @ 0x1C00368A8 (PhkFirstValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C003794C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

void __fastcall CheckWHFBits(PRKPROCESS **a1, unsigned int a2)
{
  int v4; // r15d
  BOOL v5; // esi
  __int64 v6; // r8
  __int64 Valid; // rax
  __int64 CurrentProcessWin32Process; // rax
  PRKPROCESS *v9; // rcx
  int v10; // edx

  LockRefactorStagingAssertAny(gDomainHookLock);
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
      v5 = PhkFirstGlobalValid(a1, a2) == 0;
    }
  }
  if ( v4 )
  {
    *((_DWORD *)a1 + 170) &= ~(1 << (a2 + 1));
    if ( a1[60] )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a2 + 1);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v9 = a1[53];
      if ( v9 == (PRKPROCESS *)CurrentProcessWin32Process )
      {
        v10 = 0;
      }
      else
      {
        KeAttachProcess(*v9);
        v10 = 1;
      }
      *((_DWORD *)a1[60] + 14) = *((_DWORD *)a1 + 170);
      if ( v10 )
        KeDetachProcess();
    }
  }
  if ( v5 )
    *((_DWORD *)*a1[58] + 4) &= ~(1 << (a2 + 1));
}
