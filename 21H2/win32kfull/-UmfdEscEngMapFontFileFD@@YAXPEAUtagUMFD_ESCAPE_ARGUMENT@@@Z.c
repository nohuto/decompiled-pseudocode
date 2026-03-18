/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0011304
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0010B54 (UmfdDispatchEscape.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C000D7F0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C000D860 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C000FCB0 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C0010648 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C01017B8 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C01059CC (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015DD8C (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015E120 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rdi
  __int64 v2; // rcx
  int v3; // esi
  int v4; // r14d
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  void **v7; // r15
  void *v8; // r12
  int v9; // r13d
  void *v10; // rcx
  unsigned __int64 v11; // r8
  int v12; // r14d
  enum _SECTION_INHERIT v13; // [rsp+30h] [rbp-118h]
  unsigned int v14; // [rsp+38h] [rbp-110h]
  unsigned int v15; // [rsp+40h] [rbp-108h]
  int v16; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-F0h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-E8h] BYREF
  union _LARGE_INTEGER v19; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-D8h] BYREF
  union _LARGE_INTEGER v21; // [rsp+78h] [rbp-D0h] BYREF
  char *v22; // [rsp+80h] [rbp-C8h]
  void *v23[10]; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+E0h] [rbp-68h]
  __int128 v25; // [rsp+F0h] [rbp-58h]
  __int128 v26; // [rsp+100h] [rbp-48h]

  v1 = (volatile void **)((char *)a1 + 8);
  v22 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v18);
  v17 = 0LL;
  if ( !UmfdFileviewLookup )
    goto LABEL_22;
  v16 = *(_DWORD *)v1;
  if ( !NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v16, &v17) )
    goto LABEL_22;
  memset(v23, 0, sizeof(v23));
  v3 = 1;
  v4 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v6 = v17;
  v7 = (void **)(v17 + 16);
  if ( *(_QWORD *)(v17 + 16) )
  {
    v4 = 0;
    ++*(_DWORD *)(v17 + 100);
  }
  else
  {
    if ( !*(_QWORD *)(v17 + 80) )
    {
      GreReleaseFastMutex(ghfmMemory);
      goto LABEL_22;
    }
    v10 = *(void **)(v17 + 32);
    if ( v10 )
    {
      v17 = 0LL;
      v19.QuadPart = 0LL;
      if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                  v10,
                  v7,
                  v5,
                  0LL,
                  &v19,
                  &v17,
                  v13,
                  v14,
                  v15,
                  (unsigned __int64 *)(v6 + 72)) < 0 )
        v3 = 0;
      else
        *(_DWORD *)(v6 + 100) = 1;
      v4 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( v4 )
  {
    v16 = 0;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    if ( !(unsigned int)bCreateSection(
                          *(PCWSTR *)(v6 + 80),
                          (struct _FILEVIEW *)v23,
                          0,
                          &v16,
                          (*(_DWORD *)(v6 + 40) & 8) != 0) )
      goto LABEL_22;
    v20 = 0LL;
    v21.QuadPart = 0LL;
    if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                v23[4],
                &v23[2],
                v11,
                0LL,
                &v21,
                &v20,
                v13,
                v14,
                v15,
                (unsigned __int64 *)&v23[9]) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)v23);
      goto LABEL_22;
    }
    GreAcquireFastMutex(ghfmMemory);
    ++*(_DWORD *)(v6 + 100);
    if ( *v7 )
    {
      v12 = 0;
    }
    else
    {
      v12 = bMapRoutine(v6, v23, 1LL, (unsigned int)v16);
      v3 = v12;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v12 )
      vUnmapFileFD((struct _FILEVIEW *)v23, 1);
  }
  if ( v3 )
  {
    v8 = *v7;
    v9 = *(_DWORD *)(v6 + 24);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v18);
    ProbeForWrite(v1[1], 8uLL, 8u);
    ProbeForWrite(v1[2], 4uLL, 4u);
    *(_QWORD *)v1[1] = v8;
    *(_DWORD *)v1[2] = v9;
    *(_DWORD *)v1 = 1;
    return;
  }
LABEL_22:
  *(_DWORD *)v1 = 0;
  AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v18);
}
