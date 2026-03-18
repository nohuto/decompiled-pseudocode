/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0094C00
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E9C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BC08 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct _ERESOURCE *v14; // rbx
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || (v6 = *ThreadWin32Thread) == 0
    || (v7 = *(_QWORD *)a2, v8 = *(_DWORD *)(*(_QWORD *)a2 + 40LL), (v8 & 1) == 0)
    || (v8 & 0x1000000) != 0
    || *(_DWORD *)(v7 + 2588) != 5
    && (v8 & 0x20000) == 0
    && ((v5 = *(_DWORD **)(v7 + 2552), ((unsigned __int64)(v5 + 1) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
     || (v5[40] & 0x800000) == 0)
    || (v9 = *(_QWORD *)(v7 + 24),
        v10 = SGDGetSessionState(v5),
        v5 = *(_DWORD **)a2,
        (*(_DWORD *)(*(_QWORD *)a2 + 2096LL) & 0x400) != 0)
    || (v5[448] & 0x8000000) != 0
    || (v5[10] & 0x48000000) != 0
    || (*(_DWORD *)(v9 + 40) & 0x1000000) != 0
    || !*(_DWORD *)(*(_QWORD *)(v10 + 24) + 6360LL)
    || !*(_DWORD *)(v6 + 104) && !*(_DWORD *)(v6 + 108) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 80LL;
    v13 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v14 = *(struct _ERESOURCE **)(v13 + 112);
    if ( v14 )
    {
      PsEnterPriorityRegion(v12, v11);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v14);
    }
    v15 = *(_QWORD *)(v13 + 112);
    v17 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
    if ( *(_DWORD *)(v17 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(v17, v16, v18, v15, 5, (__int64)L"GreBaseGlobals.hsemSprite");
  }
  return this;
}
