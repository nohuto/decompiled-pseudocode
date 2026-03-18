/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C015AC60
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C015AAD0 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0049D88 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C005F78C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00B41E0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0159DF4 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C015A1C0 (bMigrateSurfaceForConversion.c)
 */

SURFACE *__fastcall pProcessDfbSurfacesInternal(struct OBJECT *a1, int a2)
{
  SURFACE *v2; // rsi
  SURFACE *v3; // rbx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  SURFACE *v12; // [rsp+60h] [rbp-69h] BYREF
  char v13; // [rsp+68h] [rbp-61h]
  int v14; // [rsp+6Ch] [rbp-5Dh]
  _DWORD v15[4]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v16; // [rsp+80h] [rbp-49h]
  __int64 v17; // [rsp+88h] [rbp-41h]
  struct _ERESOURCE v18; // [rsp+90h] [rbp-39h] BYREF
  int v19; // [rsp+130h] [rbp+67h] BYREF
  __int64 v20; // [rsp+140h] [rbp+77h] BYREF

  v2 = (SURFACE *)*((_QWORD *)a1 + 70);
  v3 = 0LL;
  v19 = 0;
  SGDGetSessionState(a1);
  v6 = *((_DWORD *)a1 + 28);
  if ( (v6 & 0x80100000) != 0 )
    return 0LL;
  v7 = *((_DWORD *)a1 + 29) & 1;
  if ( !v7 && (v6 & 0x800) != 0 && *((_WORD *)a1 + 50) == 3 )
    return 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( !v2 )
  {
    v15[0] = *((_DWORD *)a1 + 24);
    v15[1] = *((_DWORD *)a1 + 14);
    v15[2] = *((_DWORD *)a1 + 15);
    v15[3] = 0;
    v17 = 1LL;
    v16 = 0LL;
    if ( v7 )
    {
      v8 = 1;
      if ( (*((_WORD *)a1 + 51) & 0x800) != 0 )
        v8 = 2049;
      LODWORD(v17) = v8;
    }
    if ( !(unsigned int)SURFMEM::bCreateDIB(
                          (SURFMEM *)&v12,
                          (struct _DEVBITMAPINFO *)v15,
                          0LL,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          0,
                          1,
                          0,
                          0) )
      goto LABEL_21;
    v20 = *((_QWORD *)a1 + 6);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)&v18.SharedWaiters);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v18, (struct PDEVOBJ *)&v20);
    GreAcquireHmgrSemaphore(v9);
    v2 = v12;
    if ( (*((_DWORD *)a1 + 29) & 1) != 0 )
      *((_DWORD *)v12 + 28) |= 0x800u;
    SURFACE::hdev(v2, *((HDEV *)a1 + 6));
    GreReleaseHmgrSemaphore(v10);
    DEVLOCKOBJ::vDestructor(&v18);
    DLODCOBJ::~DLODCOBJ((DLODCOBJ *)&v18.SharedWaiters);
    if ( !v2 )
      goto LABEL_21;
  }
  if ( (unsigned int)bMigrateSurfaceForConversion(a1, v2, (*((_DWORD *)v2 + 29) >> 13) & 1, &v19) )
  {
    if ( v19 && a2 )
      vDynamicConvertNewSurfaceDCs(*((_QWORD *)a1 + 6), (int *)a1);
    if ( v12 )
      v13 |= 1u;
    v3 = v2;
  }
  else
  {
LABEL_21:
    if ( (*((_DWORD *)a1 + 29) & 1) != 0 )
      vCleanupRedirectionSurface((HSURF *)a1, 0);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v12);
  return v3;
}
