/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00A7F20
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00A76B0 (UmfdDispatchEscape.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00A6F84 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C00A8208 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C00A8328 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A8408 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00A8B64 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00A8BAC (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C016AF30 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C016B1A0 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // esi
  int v4; // r14d
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdi
  __int64 v7; // r12
  int v8; // r13d
  void *v9; // rcx
  unsigned __int64 v10; // r8
  int v11; // r14d
  enum _SECTION_INHERIT v12; // [rsp+30h] [rbp-118h]
  unsigned int v13; // [rsp+38h] [rbp-110h]
  unsigned int v14; // [rsp+40h] [rbp-108h]
  int v15; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-F0h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-E8h] BYREF
  union _LARGE_INTEGER v18; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-D8h] BYREF
  union _LARGE_INTEGER v20; // [rsp+78h] [rbp-D0h] BYREF
  char *v21; // [rsp+80h] [rbp-C8h]
  void *v22[10]; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+E0h] [rbp-68h]
  __int128 v24; // [rsp+F0h] [rbp-58h]
  __int128 v25; // [rsp+100h] [rbp-48h]

  v1 = (volatile void **)((char *)a1 + 8);
  v21 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v17);
  v16 = 0LL;
  if ( !UmfdFileviewLookup )
    goto LABEL_22;
  v15 = *(_DWORD *)v1;
  if ( !NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v15, &v16) )
    goto LABEL_22;
  memset(v22, 0, sizeof(v22));
  v3 = 1;
  v4 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v6 = v16;
  if ( *(_QWORD *)(v16 + 16) )
  {
    v4 = 0;
    ++*(_DWORD *)(v16 + 100);
  }
  else
  {
    if ( !*(_QWORD *)(v16 + 80) )
    {
      GreReleaseFastMutex(ghfmMemory);
      goto LABEL_22;
    }
    v9 = *(void **)(v16 + 32);
    if ( v9 )
    {
      v16 = 0LL;
      v18.QuadPart = 0LL;
      if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                  v9,
                  (void **)(v6 + 16),
                  v5,
                  0LL,
                  &v18,
                  &v16,
                  v12,
                  v13,
                  v14,
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
    v15 = 0;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    if ( !(unsigned int)bCreateSection(
                          *(PCWSTR *)(v6 + 80),
                          (struct _FILEVIEW *)v22,
                          0,
                          &v15,
                          (*(_DWORD *)(v6 + 40) & 8) != 0) )
      goto LABEL_22;
    v19 = 0LL;
    v20.QuadPart = 0LL;
    if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                v22[4],
                &v22[2],
                v10,
                0LL,
                &v20,
                &v19,
                v12,
                v13,
                v14,
                (unsigned __int64 *)&v22[9]) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)v22);
      goto LABEL_22;
    }
    GreAcquireFastMutex(ghfmMemory);
    ++*(_DWORD *)(v6 + 100);
    if ( *(_QWORD *)(v6 + 16) )
    {
      v11 = 0;
    }
    else
    {
      v11 = bMapRoutine(v6, v22, 1LL, (unsigned int)v15);
      v3 = v11;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v11 )
      vUnmapFileFD((struct _FILEVIEW *)v22, 1u);
  }
  if ( v3 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(_DWORD *)(v6 + 24);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v17);
    ProbeForWrite(v1[1], 8uLL, 8u);
    ProbeForWrite(v1[2], 4uLL, 4u);
    *(_QWORD *)v1[1] = v7;
    *(_DWORD *)v1[2] = v8;
    *(_DWORD *)v1 = 1;
    return;
  }
LABEL_22:
  *(_DWORD *)v1 = 0;
  AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v17);
}
