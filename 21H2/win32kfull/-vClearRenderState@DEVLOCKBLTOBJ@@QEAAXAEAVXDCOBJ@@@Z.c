/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0040380
 * Callers:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002CE74 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00421B8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0042384 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E9590 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2)
{
  DC *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v7; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v4 = *a2;
  if ( *a2 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 22);
      if ( !v5
        || !*((_BYTE *)this + 225)
        || (v6 = (_QWORD *)*((_QWORD *)this + 15)) == 0LL
        || !*((_BYTE *)this + 169)
        || *v5 != *v6 )
      {
        v7 = *((_DWORD *)v4 + 9);
        if ( (v7 & 0x200) != 0 )
        {
          if ( (v7 & 0x4000) == 0 )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( ThreadWin32Thread )
            {
              v9 = *ThreadWin32Thread;
              if ( v9 )
                *(_DWORD *)(v9 + 328) &= ~1u;
            }
          }
          v10 = (_QWORD *)*((_QWORD *)this + 15);
          if ( v10 && *((_BYTE *)this + 169) && *(_QWORD *)*a2 == *v10 && !*((_QWORD *)this + 30)
            || (v11 = (_QWORD *)*((_QWORD *)this + 22)) != 0LL
            && *((_BYTE *)this + 225)
            && *(_QWORD *)*a2 == *v11
            && !*((_QWORD *)this + 33) )
          {
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
            DC::vClearRendering(*a2);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          }
        }
      }
    }
  }
}
