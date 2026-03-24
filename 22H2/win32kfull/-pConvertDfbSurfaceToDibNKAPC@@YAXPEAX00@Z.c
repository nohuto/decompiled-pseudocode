/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C0158930
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0158AC0 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(HSURF a1, void *a2, void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  _BYTE v10[32]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+10h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v12);
  SURFREF::SURFREF((SURFREF *)v10, a1);
  v5 = v11;
  if ( v11 )
  {
    v6 = *(_DWORD *)(v11 + 116);
    if ( (v6 & 0x20) != 0 )
    {
      ++glpConvertDfbSurfaceToDibNKAPC;
      *(_DWORD *)(v11 + 116) = v6 & 0xFFFFFFDF;
      v5 = v11;
      if ( *(_WORD *)(v11 + 100) == 3 )
      {
        v13 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        GreAcquireSemaphore(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
        v12 = ghsemSprite;
        GreAcquireSemaphore(ghsemSprite);
        v7 = v11;
        DEC_SHARE_REF_CNT(v11, v8);
        v11 = 0LL;
        pProcessDfbSurfaces2(v7, 1LL, 1LL);
        SEMOBJ::vUnlock((SEMOBJ *)&v12);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        SEMOBJ::vUnlock((SEMOBJ *)&v13);
        v5 = v11;
      }
    }
    if ( v5 )
      DEC_SHARE_REF_CNT(v5, v4);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  UserLeaveUserCritSec();
}
