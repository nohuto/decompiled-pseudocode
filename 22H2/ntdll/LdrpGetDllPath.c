/*
 * XREFs of LdrpGetDllPath @ 0x18001147C
 * Callers:
 *     LdrGetDllPath @ 0x180011450 (LdrGetDllPath.c)
 *     LdrpComputeLazyDllPath @ 0x180061470 (LdrpComputeLazyDllPath.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x1800116AC (LdrpLogDllStateEx2.c)
 *     RtlpGetCachedPath @ 0x180011708 (RtlpGetCachedPath.c)
 *     RtlDetermineDosPathNameType_U @ 0x180077290 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007E294 (LdrpLogRelativePathWithAlteredSearchError.c)
 */

__int64 __fastcall LdrpGetDllPath(
        PCWSTR DosFileName,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _OWORD *a6,
        _QWORD *a7)
{
  bool v9; // r12
  bool v10; // di
  unsigned int v11; // ebx
  char v12; // r14
  PCWSTR v13; // r13
  RTL_PATH_TYPE v14; // eax
  __int64 result; // rax
  __int64 (__fastcall *v16)(); // rdx
  PCWSTR v17; // r8
  void *v18; // rcx
  PCWSTR v19; // r9
  __int64 CachedPath; // rax
  __int64 v21; // rcx
  __int64 v22; // rax

  v9 = (a2 & 0x2000) != 0;
  v10 = 0;
  v11 = a2 & 0xFFFFDFFF;
  if ( (a2 & 8) != 0 )
  {
    if ( v11 != 8 )
      return 3221225485LL;
    v11 = 0;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( v11 )
      goto LABEL_11;
  }
  if ( LdrpDefaultDllDirectories )
  {
    v9 = (a2 & 0x2000) != 0 || (LdrpDefaultDllDirectories & 0x2000) != 0;
    v11 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_11:
  v13 = 0LL;
  if ( (v11 & 0x100) == 0 && !v12 )
    goto LABEL_25;
  v14 = RtlDetermineDosPathNameType_U(DosFileName);
  if ( (unsigned int)(v14 - 1) > 1 )
    v10 = v14 != RtlPathTypeLocalDevice
       || DosFileName[2] != 63
       || RtlDetermineDosPathNameType_U(DosFileName + 4) != RtlPathTypeDriveAbsolute;
  v13 = DosFileName;
  if ( !v10 )
    goto LABEL_25;
  if ( v12 )
  {
    LdrpLogRelativePathWithAlteredSearchError(DosFileName);
    if ( (LdrpPolicyBits & 0x40) != 0 )
    {
      v12 = 0;
      v10 = (v11 & 0x100) != 0;
    }
  }
  if ( v10 )
  {
    if ( v11 )
      return 3221225485LL;
  }
  else
  {
LABEL_25:
    if ( v11 )
    {
      if ( (v11 & 0x1000) != 0 )
      {
        v11 |= 0xA00u;
        if ( (LdrpPolicyBits & 4) != 0 )
          v11 |= 0x400u;
      }
      v17 = (PCWSTR)v11;
      v16 = RtlpComputeDllPathWithOptions;
      LODWORD(v17) = v11 | 0x100;
      v18 = &RtlpDllSearchPathWithOptions;
      v19 = v13;
      if ( !v12 )
        v17 = (PCWSTR)v11;
      goto LABEL_33;
    }
  }
  v19 = 0LL;
  v16 = RtlpComputeDllPath;
  v17 = v13;
  v18 = &RtlpDllSearchPath;
LABEL_33:
  CachedPath = RtlpGetCachedPath(v18, v16, v17, v19);
  v21 = CachedPath;
  if ( CachedPath )
  {
    *a7 = *(_QWORD *)(CachedPath + 104);
    if ( a6 )
    {
      *a6 = *(_OWORD *)CachedPath;
      a6[1] = *(_OWORD *)(CachedPath + 16);
      a6[2] = *(_OWORD *)(CachedPath + 32);
      a6[3] = *(_OWORD *)(CachedPath + 48);
      a6[4] = *(_OWORD *)(CachedPath + 64);
    }
    *a3 = CachedPath + 128;
    if ( a4 )
    {
      if ( v9 )
        v22 = *(_QWORD *)(CachedPath + 120);
      else
        v22 = 0LL;
      *a4 = v22;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v21 + 112);
    LdrpLogDllStateEx2(v21, DosFileName, *a3, 5313LL);
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    if ( a4 )
      *a4 = 0LL;
    result = 3221225495LL;
    *a7 = 0LL;
  }
  return result;
}
