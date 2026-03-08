/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02D7070
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C02D533C (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNLOCK@@QEAA@XZ @ 0x1C02D6FD8 (--0DCVISRGNLOCK@@QEAA@XZ.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(void *a1, void *a2, void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v10);
  LOBYTE(v4) = 5;
  v5 = HmgShareLockCheck(a1, v4);
  v7 = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 116) & 0x20) != 0
      && (v8 = *(Gre::Base **)(SGDGetSessionState(v6) + 32),
          ++*((_DWORD *)v8 + 5856),
          *(_DWORD *)(v7 + 116) &= ~0x20u,
          *(_WORD *)(v7 + 100) == 3) )
    {
      v9 = Gre::Base::Globals(v8);
      v11 = *((_QWORD *)v9 + 15);
      GreAcquireSemaphore(v11);
      DCVISRGNLOCK::DCVISRGNLOCK((DCVISRGNLOCK *)&v10);
      v10 = *((_QWORD *)v9 + 14);
      GreAcquireSemaphore(v10);
      DEC_SHARE_REF_CNT(v7);
      pProcessDfbSurfaces2(v7, 1LL, 1LL);
      SEMOBJ::vUnlock((SEMOBJ *)&v10);
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v10);
      SEMOBJ::vUnlock((SEMOBJ *)&v11);
    }
    else
    {
      DEC_SHARE_REF_CNT(v7);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  UserLeaveUserCritSec();
}
