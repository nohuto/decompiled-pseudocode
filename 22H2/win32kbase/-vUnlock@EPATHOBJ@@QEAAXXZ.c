/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0154170
 * Callers:
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00D3288 (--1EPATHOBJGC@@QEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0152DC0 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C0154150 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD90 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C016AE70 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0152AE8 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0153F10 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  int *v3; // rcx
  struct HOBJ__ *v4; // rbx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 84) & 1) != 0 )
    {
      EPATHOBJ::vFreeBlocks(this);
    }
    else
    {
      *(_DWORD *)(v2 + 92) = *((_DWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 88LL) = *(_DWORD *)this;
      v3 = (int *)*((_QWORD *)this + 1);
      v4 = *(struct HOBJ__ **)v3;
      HmgDecrementShareReferenceCountEx(v3, 0LL);
      if ( HmgRemoveObjectImpl(v4, 0, 0, 1, 7, 0LL) )
      {
        EPATHOBJ::vFreeBlocks(this);
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(*((_QWORD *)this + 1));
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
