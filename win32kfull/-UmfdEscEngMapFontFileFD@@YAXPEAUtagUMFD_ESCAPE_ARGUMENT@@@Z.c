void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  __int64 v1; // r15
  int v2; // r12d
  volatile void **v3; // rbx
  __int64 v4; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v5; // rcx
  int v6; // esi
  int v7; // r14d
  Gre::Base *v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdi
  void *v11; // rcx
  unsigned __int64 v12; // r8
  struct Gre::Base::SESSION_GLOBALS *v13; // r14
  int v14; // eax
  enum _SECTION_INHERIT v15; // [rsp+30h] [rbp-128h]
  unsigned int v16; // [rsp+38h] [rbp-120h]
  unsigned int v17; // [rsp+40h] [rbp-118h]
  int v18; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-100h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v20; // [rsp+60h] [rbp-F8h]
  _BYTE v21[8]; // [rsp+68h] [rbp-F0h] BYREF
  union _LARGE_INTEGER v22; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-E0h] BYREF
  union _LARGE_INTEGER v24; // [rsp+80h] [rbp-D8h] BYREF
  char *v25; // [rsp+88h] [rbp-D0h]
  _BYTE v26[16]; // [rsp+A0h] [rbp-B8h] BYREF
  void *v27[7]; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v29; // [rsp+F0h] [rbp-68h]
  __int128 v30; // [rsp+100h] [rbp-58h]
  __int128 v31; // [rsp+110h] [rbp-48h]

  v1 = 0LL;
  v2 = 0;
  v3 = (volatile void **)((char *)a1 + 8);
  v25 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v21);
  v19 = 0LL;
  v5 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SGDGetSessionState(v4) + 32) + 23472LL);
  if ( !v5 )
    goto LABEL_21;
  v18 = *(_DWORD *)v3;
  if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v5) )
    goto LABEL_21;
  memset_0(v26, 0, 0x50uLL);
  v6 = 1;
  v7 = 1;
  v20 = Gre::Base::Globals(v8);
  GreAcquireFastMutex(*((_QWORD *)v20 + 18));
  v10 = v19;
  if ( *(_QWORD *)(v19 + 16) )
  {
    v7 = 0;
    ++*(_DWORD *)(v19 + 100);
  }
  else
  {
    if ( !*(_QWORD *)(v19 + 80) )
    {
      GreReleaseFastMutex(*((_QWORD *)v20 + 18));
      goto LABEL_21;
    }
    v11 = *(void **)(v19 + 32);
    if ( v11 )
    {
      v19 = 0LL;
      v22.QuadPart = 0LL;
      v14 = UmfdHostLifeTimeManager::MmMapViewOfSection(
              v11,
              (void **)(v10 + 16),
              v9,
              0LL,
              &v22,
              &v19,
              v15,
              v16,
              v17,
              (unsigned __int64 *)(v10 + 72));
      v6 = v14 >= 0;
      if ( v14 >= 0 )
        *(_DWORD *)(v10 + 100) = 1;
      v7 = 0;
    }
  }
  GreReleaseFastMutex(*((_QWORD *)v20 + 18));
  if ( v7 )
  {
    v18 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    if ( !(unsigned int)bCreateSection(
                          *(PCWSTR *)(v10 + 80),
                          (struct _FILEVIEW *)v26,
                          0,
                          &v18,
                          (*(_DWORD *)(v10 + 40) & 8) != 0) )
    {
      v6 = 0;
      goto LABEL_8;
    }
    v23 = 0LL;
    v24.QuadPart = 0LL;
    if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(v27[2], v27, v12, 0LL, &v24, &v23, v15, v16, v17, &v28) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)v26);
      goto LABEL_21;
    }
    v13 = v20;
    GreAcquireFastMutex(*((_QWORD *)v20 + 18));
    ++*(_DWORD *)(v10 + 100);
    if ( *(_QWORD *)(v10 + 16) )
    {
      v18 = 0;
    }
    else
    {
      v18 = bMapRoutine(v10, v26, 1LL, (unsigned int)v18);
      v6 = v18;
    }
    GreReleaseFastMutex(*((_QWORD *)v13 + 18));
    if ( !v18 )
      vUnmapFileFD((struct _FILEVIEW *)v26, 1u);
  }
  if ( !v6 )
    goto LABEL_21;
  v1 = *(_QWORD *)(v10 + 16);
  v2 = *(_DWORD *)(v10 + 24);
LABEL_8:
  if ( v6 )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v21);
    ProbeForWrite(v3[1], 8uLL, 8u);
    ProbeForWrite(v3[2], 4uLL, 4u);
    *(_QWORD *)v3[1] = v1;
    *(_DWORD *)v3[2] = v2;
    *(_DWORD *)v3 = 1;
    return;
  }
LABEL_21:
  *(_DWORD *)v3 = 0;
  AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v21);
}
