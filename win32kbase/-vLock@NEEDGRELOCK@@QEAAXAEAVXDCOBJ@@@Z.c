/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00210C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct XDCOBJ *a2)
{
  NEEDGRELOCK *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  struct _ERESOURCE *v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx

  *(_QWORD *)this = 0LL;
  v3 = this;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( *(_QWORD *)a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x8200) == 0x200
      || (v7 = *(_DWORD *)(v4 + 40), (v7 & 1) == 0)
      || (v7 & 0x1000000) != 0
      || *(_DWORD *)(v4 + 2588) != 5
      && (v7 & 0x20000) == 0
      && ((this = *(NEEDGRELOCK **)(v4 + 2552), (((unsigned __int64)this + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*((_DWORD *)this + 40) & 0x800000) == 0)
      || (v8 = *(_QWORD *)(v4 + 24),
          v9 = *(_QWORD *)(SGDGetSessionState(this) + 24),
          (*(_DWORD *)(v4 + 2096) & 0x400) != 0)
      || (*(_DWORD *)(v4 + 40) & 0x48000000) != 0
      || (*(_DWORD *)(v4 + 1792) & 0x8000000) != 0
      || (*(_DWORD *)(v8 + 40) & 0x1000000) != 0
      || !*(_DWORD *)(v9 + 6360) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      if ( (*(_DWORD *)(v5 + 40) & 0x8000) == 0 )
      {
        v6 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 120LL);
        *(_QWORD *)v3 = v6;
        if ( v6 )
        {
          PsEnterPriorityRegion();
          ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
        }
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)v3, 2LL);
      }
    }
  }
}
