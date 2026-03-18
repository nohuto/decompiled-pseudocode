/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008F330
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct XDCOBJ *a2)
{
  NEEDGRELOCK *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _ERESOURCE *v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx

  *(_QWORD *)this = 0LL;
  v3 = this;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( *(_QWORD *)a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x8200) == 0x200
      || (v9 = *(_DWORD *)(v4 + 40), (v9 & 1) == 0)
      || (v9 & 0x1000000) != 0
      || *(_DWORD *)(v4 + 2588) != 5
      && (v9 & 0x20000) == 0
      && ((this = *(NEEDGRELOCK **)(v4 + 2552), (((unsigned __int64)this + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*((_DWORD *)this + 40) & 0x800000) == 0)
      || (v10 = *(_QWORD *)(v4 + 24),
          v11 = *(_QWORD *)(SGDGetSessionState(this) + 24),
          (*(_DWORD *)(v4 + 2096) & 0x400) != 0)
      || (*(_DWORD *)(v4 + 40) & 0x48000000) != 0
      || (*(_DWORD *)(v4 + 1792) & 0x8000000) != 0
      || (*(_DWORD *)(v10 + 40) & 0x1000000) != 0
      || !*(_DWORD *)(v11 + 6360) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      if ( (*(_DWORD *)(v5 + 40) & 0x8000) == 0 )
      {
        v7 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
        v8 = *(struct _ERESOURCE **)(v7 + 120);
        *(_QWORD *)v3 = v8;
        if ( v8 )
        {
          PsEnterPriorityRegion(v7, v6);
          ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
        }
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsem", *(_QWORD *)v3, 2);
      }
    }
  }
}
