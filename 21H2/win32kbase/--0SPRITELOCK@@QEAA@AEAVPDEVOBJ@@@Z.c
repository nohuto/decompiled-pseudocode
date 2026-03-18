/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0030400
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0030540 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0178CB8 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 *ThreadWin32Thread; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rbx
  struct _ERESOURCE *v9; // rbx

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || (v8 = *ThreadWin32Thread) == 0
    || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(v8 + 104) && !*(_DWORD *)(v8 + 108) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 80LL;
    v9 = ghsemSprite;
    if ( ghsemSprite )
    {
      PsEnterPriorityRegion(v6);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(v6, v5, v7, (_DWORD)ghsemSprite, 5, (__int64)L"ghsemSprite");
  }
  return this;
}
