/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C00BE880
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C00BE790 (pProcessDfbSurfaces2.c)
 * Callees:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C000EC20 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0027C60 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0031B30 (--1SURFMEM@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C003C4C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003C54C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     bMigrateSurfaceForConversion @ 0x1C00BA100 (bMigrateSurfaceForConversion.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00BEA44 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E4C4 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C013FAA4 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

__int64 __fastcall pProcessDfbSurfacesInternal(SURFACE *this, int a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  __int64 v18; // [rsp+60h] [rbp-69h] BYREF
  char v19; // [rsp+68h] [rbp-61h]
  int v20; // [rsp+6Ch] [rbp-5Dh]
  _DWORD v21[4]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v22; // [rsp+80h] [rbp-49h]
  __int64 v23; // [rsp+88h] [rbp-41h]
  _BYTE v24[32]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v25[2]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v26[12]; // [rsp+C0h] [rbp-9h] BYREF
  int v27; // [rsp+130h] [rbp+67h] BYREF
  __int64 v28; // [rsp+140h] [rbp+77h] BYREF

  v2 = *((_DWORD *)this + 28);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 70);
  v27 = 0;
  if ( (v2 & 0x80100000) == 0 )
  {
    v7 = *((_DWORD *)this + 29) & 1;
    if ( v7 || (v2 & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    {
      v18 = 0LL;
      v19 = 0;
      v20 = 0;
      if ( !v4 )
      {
        v21[0] = *((_DWORD *)this + 24);
        v21[1] = *((_DWORD *)this + 14);
        v21[2] = *((_DWORD *)this + 15);
        v21[3] = 0;
        v23 = 1LL;
        v22 = 0LL;
        if ( v7 )
        {
          v8 = 1;
          if ( (*((_WORD *)this + 51) & 0x800) != 0 )
            v8 = 2049;
          LODWORD(v23) = v8;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v18,
                              (struct _DEVBITMAPINFO *)v21,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_23;
        v28 = *((_QWORD *)this + 6);
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v28);
        GreAcquireHmgrSemaphore(v12, v11, v13);
        v4 = v18;
        if ( (*((_DWORD *)this + 29) & 1) != 0 )
          *(_DWORD *)(v18 + 112) |= 0x800u;
        *(_QWORD *)(v4 + 48) = *((_QWORD *)this + 6);
        GreReleaseHmgrSemaphore(v15, v14, v16);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
        if ( v25[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v25);
        PopThreadGuardedObject(v26);
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(this, (SURFACE *)v4, (*(_DWORD *)(v4 + 116) >> 13) & 1, &v27) )
      {
        if ( v27 && a2 )
          vDynamicConvertNewSurfaceDCs(*((_QWORD *)this + 6), (__int64)this);
        if ( v18 )
          v19 |= 1u;
        v3 = v4;
LABEL_25:
        SURFMEM::~SURFMEM((SURFMEM *)&v18, v9, v10);
        return v3;
      }
LABEL_23:
      if ( (*((_DWORD *)this + 29) & 1) != 0 )
        vCleanupRedirectionSurface(this, 0);
      goto LABEL_25;
    }
  }
  return 0LL;
}
