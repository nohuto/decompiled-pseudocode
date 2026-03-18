/*
 * XREFs of EngMapFontFileFDInternal @ 0x1C000FAC4
 * Callers:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C000FA44 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     EngMapFontFileFD @ 0x1C02871B0 (EngMapFontFileFD.c)
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x1C02A62E4 (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ.c)
 *     GreMakeFontDir @ 0x1C02B99A8 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02BA5F0 (NtGdiGetFontFileData.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C0F2C (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C000D7F0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C000D860 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C000FCB0 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C01017B8 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C01059CC (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(__int64 a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // edi
  int v9; // esi
  unsigned __int64 v10; // r8
  _QWORD *v11; // r14
  void *v12; // rcx
  int Section; // esi
  unsigned __int64 v14; // r8
  unsigned int v16; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  enum _SECTION_INHERIT v18; // [rsp+30h] [rbp-A9h]
  unsigned int v19; // [rsp+38h] [rbp-A1h]
  unsigned int v20; // [rsp+40h] [rbp-99h]
  unsigned __int64 v21; // [rsp+50h] [rbp-89h] BYREF
  union _LARGE_INTEGER v22; // [rsp+58h] [rbp-81h] BYREF
  union _LARGE_INTEGER v23; // [rsp+60h] [rbp-79h] BYREF
  void *v24[10]; // [rsp+70h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-19h] BYREF

  memset(v24, 0, sizeof(v24));
  v8 = 1;
  v9 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v11 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 16) )
  {
    ++*(_DWORD *)(a1 + 100);
    v9 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 80) )
    {
      GreReleaseFastMutex(ghfmMemory);
      return 0LL;
    }
    v12 = *(void **)(a1 + 32);
    if ( v12 )
    {
      v21 = 0LL;
      v22.QuadPart = 0LL;
      if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                  v12,
                  (void **)(a1 + 16),
                  v10,
                  0LL,
                  &v22,
                  &v21,
                  v18,
                  v19,
                  v20,
                  (unsigned __int64 *)(a1 + 72)) < 0 )
        v8 = 0;
      else
        *(_DWORD *)(a1 + 100) = 1;
      v9 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( !v9 )
  {
LABEL_17:
    if ( v8 )
    {
      if ( a2 )
        *a2 = *v11;
      if ( a3 )
        *a3 = *(_DWORD *)(a1 + 24);
    }
    return v8;
  }
  LODWORD(v21) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a4 )
  {
    CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
    KeStackAttachProcess(CurrentThreadProcess, &ApcState);
  }
  Section = bCreateSection(
              *(PCWSTR *)(a1 + 80),
              (struct _FILEVIEW *)v24,
              0,
              (int *)&v21,
              (*(_DWORD *)(a1 + 40) & 8) != 0);
  if ( a4 )
    KeUnstackDetachProcess(&ApcState);
  if ( !Section )
    return 0;
  v22.QuadPart = 0LL;
  v23.QuadPart = 0LL;
  if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
              v24[4],
              &v24[2],
              v14,
              0LL,
              &v23,
              (unsigned __int64 *)&v22.QuadPart,
              v18,
              v19,
              v20,
              (unsigned __int64 *)&v24[9]) >= 0 )
  {
    GreAcquireFastMutex(ghfmMemory);
    ++*(_DWORD *)(a1 + 100);
    if ( *v11 )
    {
      v16 = 0;
    }
    else
    {
      v16 = bMapRoutine(a1, v24, 1LL, (unsigned int)v21);
      v8 = v16;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v16 )
      vUnmapFileFD((struct _FILEVIEW *)v24, 1);
    goto LABEL_17;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v24);
  return 0LL;
}
