/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C000D7B0
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C000D9A0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BE530 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     HmgQueryAltLock @ 0x1C000CA10 (HmgQueryAltLock.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C000CA70 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C000DB10 (HmgSafeNextObjt.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00204F8 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002CD50 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002E210 (HmgDecrementShareReferenceCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  DC *Objt; // rax
  DC *v6; // rdi
  __int64 v7; // rbx
  struct OBJECT *v8; // rsi

  v2 = 0LL;
  GreAcquireHmgrSemaphore();
  while ( 1 )
  {
    LOBYTE(v4) = 1;
    Objt = (DC *)HmgSafeNextObjt(v2, v4);
    v6 = Objt;
    if ( !Objt )
      break;
    v7 = *((_QWORD *)Objt + 62);
    if ( v7 )
    {
      v8 = *(struct OBJECT **)(v7 + 560);
      if ( v8 )
      {
        DC::pSurface(Objt, *(struct SURFACE **)(v7 + 560));
        *((_DWORD *)v6 + 79) |= 0xFu;
        HmgIncrementShareReferenceCount(v8);
        if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v7) == 1 )
        {
          *(_QWORD *)(v7 + 560) = 0LL;
          SURFACE::bDeleteSurface(v7, 0, 0);
          if ( v7 == a2 )
            return GreReleaseHmgrSemaphore();
        }
        else
        {
          HmgDecrementShareReferenceCountEx(v7, 0LL);
        }
      }
    }
    v2 = *(_QWORD *)v6;
  }
  return GreReleaseHmgrSemaphore();
}
