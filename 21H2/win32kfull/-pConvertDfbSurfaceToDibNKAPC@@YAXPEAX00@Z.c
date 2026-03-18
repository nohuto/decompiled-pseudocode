/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02B93C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C004033C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C02B7800 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(HSURF a1, void *a2, void *a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  _BYTE v7[32]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+88h] [rbp+28h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v9);
  SURFREF::SURFREF((SURFREF *)v7, a1);
  v4 = v8;
  if ( v8 )
  {
    v5 = *(_DWORD *)(v8 + 116);
    if ( (v5 & 0x20) != 0 )
    {
      ++glpConvertDfbSurfaceToDibNKAPC;
      *(_DWORD *)(v8 + 116) = v5 & 0xFFFFFFDF;
      v4 = v8;
      if ( *(_WORD *)(v8 + 100) == 3 )
      {
        v10 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        GreAcquireSemaphore(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
        v9 = ghsemSprite;
        GreAcquireSemaphore(ghsemSprite);
        v6 = v8;
        DEC_SHARE_REF_CNT(v8);
        v8 = 0LL;
        pProcessDfbSurfaces2(v6, 1LL, 1LL);
        SEMOBJ::vUnlock((SEMOBJ *)&v9);
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v9);
        SEMOBJ::vUnlock((SEMOBJ *)&v10);
        v4 = v8;
      }
    }
    if ( v4 )
      DEC_SHARE_REF_CNT(v4);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v7);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  UserLeaveUserCritSec();
}
