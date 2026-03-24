/*
 * XREFs of ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C0288CC0
 * Callers:
 *     EngMapFontFile @ 0x1C0289CA0 (EngMapFontFile.c)
 * Callees:
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C00A8328 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     vUnmapFile @ 0x1C00E632C (vUnmapFile.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     bMapFile @ 0x1C028A12C (bMapFile.c)
 */

__int64 __fastcall EngMapFontFileInternal(__int64 a1, unsigned int **a2, unsigned int *a3)
{
  unsigned int v6; // edi
  int v7; // esi
  unsigned int **v8; // r14
  void *v9; // rcx
  const WCHAR *v10; // rcx
  unsigned int v11; // esi
  PVOID v13[10]; // [rsp+20h] [rbp-68h] BYREF
  ULONG_PTR ViewSize; // [rsp+90h] [rbp+8h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = 1;
  v7 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v8 = (unsigned int **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v7 = 0;
    ++*(_DWORD *)(a1 + 96);
  }
  else if ( *(_QWORD *)(a1 + 80) )
  {
    v9 = *(void **)(a1 + 32);
    if ( v9 )
    {
      ViewSize = 0LL;
      if ( MmMapViewInSessionSpace(v9, (PVOID *)(a1 + 8), &ViewSize) < 0 )
        v6 = 0;
      else
        *(_DWORD *)(a1 + 96) = 1;
      v7 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( v7 )
  {
    v10 = *(const WCHAR **)(a1 + 80);
    LODWORD(ViewSize) = 0;
    if ( !(unsigned int)bMapFile(v10) )
      return 0;
    GreAcquireFastMutex(ghfmMemory);
    ++*(_DWORD *)(a1 + 96);
    if ( *v8 )
    {
      v11 = 0;
    }
    else
    {
      v11 = bMapRoutine((__int64 *)a1, (__int64 *)v13, 0, ViewSize);
      v6 = v11;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v11 )
      vUnmapFile(v13);
  }
  if ( v6 )
  {
    if ( a2 )
      *a2 = *v8;
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 24);
  }
  return v6;
}
