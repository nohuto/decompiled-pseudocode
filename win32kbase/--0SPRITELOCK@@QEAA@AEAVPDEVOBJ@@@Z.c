SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rbx
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d

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
    v12 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v13 = *(struct _ERESOURCE **)(v12 + 112);
    if ( v13 )
    {
      PsEnterPriorityRegion(v11);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
    }
    v14 = *(_QWORD *)(v12 + 112);
    v16 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
    if ( *(_DWORD *)(v16 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(v16, v15, v17, v14, 5, (__int64)L"GreBaseGlobals.hsemSprite");
  }
  return this;
}
