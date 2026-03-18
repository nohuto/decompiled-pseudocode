/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C0061570
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C00617A0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     HmgQueryAltLock @ 0x1C00C1310 (HmgQueryAltLock.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00CB950 (HmgIncrementShareReferenceCount.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00CBE2C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  DC *Objt; // rax
  int v7; // ecx
  int v8; // r8d
  DC *v9; // rdi
  struct SURFACE **v10; // rbx
  struct OBJECT *v11; // rsi

  v3 = 0LL;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  while ( 1 )
  {
    LOBYTE(v5) = 1;
    Objt = (DC *)HmgSafeNextObjt(v3, v5);
    v9 = Objt;
    if ( !Objt )
      break;
    v10 = (struct SURFACE **)*((_QWORD *)Objt + 62);
    if ( v10 )
    {
      v11 = v10[70];
      if ( v11 )
      {
        DC::pSurface(Objt, v10[70]);
        *((_DWORD *)v9 + 79) |= 0xFu;
        HmgIncrementShareReferenceCount(v11);
        if ( (unsigned int)HmgQueryAltLock(*v10) == 1 )
        {
          v10[70] = 0LL;
          SURFACE::bDeleteSurface((SURFACE *)v10, 0, 0);
          if ( v10 == (struct SURFACE **)a2 )
            return GreReleaseHmgrSemaphore(v7, v5, v8);
        }
        else
        {
          HmgDecrementShareReferenceCountEx((unsigned int *)v10, 0LL);
        }
      }
    }
    v3 = *(_QWORD *)v9;
  }
  return GreReleaseHmgrSemaphore(v7, v5, v8);
}
