__int64 __fastcall EngMapFontFileFDInternal(__int64 a1, _QWORD *a2, _DWORD *a3, DWORD a4)
{
  unsigned int v6; // edi
  int v7; // r14d
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // r15
  __int64 v10; // r8
  _QWORD *v11; // r13
  PCWSTR *v12; // rsi
  void *v13; // rcx
  const WCHAR *v14; // r12
  unsigned __int8 v15; // r14
  void *HandleFromFilePath; // rsi
  __int64 v17; // r8
  int v18; // esi
  unsigned int v20; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  enum _SECTION_INHERIT v22; // [rsp+30h] [rbp-D0h]
  unsigned int v23; // [rsp+38h] [rbp-C8h]
  unsigned int v24; // [rsp+40h] [rbp-C0h]
  union _LARGE_INTEGER v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  union _LARGE_INTEGER v27; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v28; // [rsp+68h] [rbp-98h]
  _DWORD *v29; // [rsp+70h] [rbp-90h]
  _BYTE v30[16]; // [rsp+80h] [rbp-80h] BYREF
  void *v31[3]; // [rsp+90h] [rbp-70h] BYREF
  char v32; // [rsp+A8h] [rbp-58h]
  HANDLE Handle; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v34; // [rsp+C8h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-30h] BYREF

  v28 = a2;
  v29 = a3;
  v25.LowPart = a4;
  memset_0(v30, 0, 0x50uLL);
  v6 = 1;
  v7 = 1;
  v9 = Gre::Base::Globals(v8);
  GreAcquireFastMutex(*((_QWORD *)v9 + 18));
  v11 = (_QWORD *)(a1 + 16);
  v12 = (PCWSTR *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 16) )
  {
    ++*(_DWORD *)(a1 + 100);
    v7 = 0;
  }
  else
  {
    if ( !*v12 )
    {
      GreReleaseFastMutex(*((_QWORD *)v9 + 18));
      return 0LL;
    }
    v13 = *(void **)(a1 + 32);
    if ( v13 )
    {
      v26 = 0LL;
      v27.QuadPart = 0LL;
      if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                  v13,
                  (void **)(a1 + 16),
                  v10,
                  0LL,
                  &v27,
                  &v26,
                  v22,
                  v23,
                  v24,
                  (unsigned __int64 *)(a1 + 72)) < 0 )
        v6 = 0;
      else
        *(_DWORD *)(a1 + 100) = 1;
      v7 = 0;
    }
  }
  GreReleaseFastMutex(*((_QWORD *)v9 + 18));
  if ( !v7 )
  {
LABEL_23:
    if ( v6 )
    {
      if ( v28 )
        *v28 = *v11;
      if ( v29 )
        *v29 = *(_DWORD *)(a1 + 24);
    }
    return v6;
  }
  LODWORD(v26) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a4 )
  {
    CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
    KeStackAttachProcess(CurrentThreadProcess, &ApcState);
  }
  v14 = *v12;
  v15 = (*(_DWORD *)(a1 + 40) & 8) != 0;
  HandleFromFilePath = hGetHandleFromFilePath(*v12, 0);
  if ( HandleFromFilePath )
  {
    if ( (unsigned int)bCreateSectionFromHandle(HandleFromFilePath, v14, (struct _FILEVIEW *)v30, 0, (int *)&v26, v15) )
    {
      if ( (v32 & 0x10) != 0 )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      v18 = 1;
      goto LABEL_9;
    }
    ZwClose(HandleFromFilePath);
  }
  v18 = 0;
LABEL_9:
  if ( v25.LowPart )
    KeUnstackDetachProcess(&ApcState);
  if ( !v18 )
    return 0;
  v27.QuadPart = 0LL;
  v25.QuadPart = 0LL;
  if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
              v31[2],
              v31,
              v17,
              0LL,
              &v25,
              (unsigned __int64 *)&v27.QuadPart,
              v22,
              v23,
              v24,
              &v34) >= 0 )
  {
    GreAcquireFastMutex(*((_QWORD *)v9 + 18));
    ++*(_DWORD *)(a1 + 100);
    if ( *v11 )
    {
      v20 = 0;
    }
    else
    {
      v20 = bMapRoutine(a1, (__int64)v30, 1, v26);
      v6 = v20;
    }
    GreReleaseFastMutex(*((_QWORD *)v9 + 18));
    if ( !v20 )
      vUnmapFileFD((struct _FILEVIEW *)v30, 1);
    goto LABEL_23;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v30);
  return 0LL;
}
