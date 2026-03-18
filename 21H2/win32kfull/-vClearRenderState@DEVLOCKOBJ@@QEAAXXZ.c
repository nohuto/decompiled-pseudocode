/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00F4784
 * Callers:
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C003FC60 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x1C003FCAC (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00DBA70 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C004033C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00F4808 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v2; // rcx
  __int64 ThreadWin32Thread; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( v2 && *((_BYTE *)this + 81) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*(_DWORD *)(v2 + 36) & 0x200) != 0 )
  {
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v4);
    if ( !*((_QWORD *)this + 11) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( ThreadWin32Thread )
        *(_DWORD *)(ThreadWin32Thread + 328) &= ~1u;
    }
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v4);
  }
}
