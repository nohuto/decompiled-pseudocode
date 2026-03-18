/*
 * XREFs of cMapRemoteFonts @ 0x1C028769C
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C0287318 (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C0287430 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001F138 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C01059CC (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     Win32CreateSection @ 0x1C0111D10 (Win32CreateSection.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall cMapRemoteFonts(unsigned __int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  char *v15; // rcx
  _DWORD *v17; // r12
  _DWORD *v18; // r15
  __int64 v19; // rax
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  ULONG64 v23; // rcx
  ULONG64 v24; // rdx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  unsigned int v27; // r15d
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  int v30; // ebx
  __int64 v31; // r8
  char *v32; // rbx
  int v33; // ecx
  union _LARGE_INTEGER *v34; // [rsp+20h] [rbp-C8h]
  enum _SECTION_INHERIT v35; // [rsp+30h] [rbp-B8h]
  unsigned int v36; // [rsp+38h] [rbp-B0h]
  unsigned int v37; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  int v39; // [rsp+60h] [rbp-88h]
  void *v40; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-78h] BYREF
  int v42; // [rsp+78h] [rbp-70h]
  unsigned __int64 v43; // [rsp+80h] [rbp-68h] BYREF
  int v44; // [rsp+88h] [rbp-60h]
  void *v45; // [rsp+90h] [rbp-58h]
  union _LARGE_INTEGER v46; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v47[8]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = a2;
  v44 = a4;
  v42 = 0;
  v7 = *a1;
  v43 = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v40 = 0LL;
  if ( !a3 )
    return 0LL;
  memset((void *)a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = *(_DWORD *)(v7 + 4);
    if ( v10 > 3 || (unsigned int)v6 > 0x10000000 || v7 < 0x10000 || v7 > (unsigned __int64)MmHighestUserAddress )
      return 0LL;
    if ( !v10 )
    {
      v42 = 1;
      v10 = 2;
    }
  }
  else
  {
    v10 = 1;
  }
  if ( (unsigned int)v6 < ((4 * v10 + 15) & 0xFFFFFFF8) )
    return 0LL;
  v47[0] = v6;
  if ( (int)Win32CreateSection(&Object, v8, v9, (__int64)v47, (__int64)v34, 0x8000000) < 0 )
    return 0LL;
  v46.QuadPart = 0LL;
  v41 = v6;
  CurrentProcess = PsGetCurrentProcess(v12, v11);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v40, 0LL, v6, &v46, &v41, 2, 0x400000, 4) < 0 )
  {
LABEL_16:
    ObfDereferenceObject(Object);
    return 0LL;
  }
  v17 = v40;
  v45 = v40;
  v18 = v40;
  if ( (unsigned __int64)v40 > v7 )
    goto LABEL_21;
  v15 = (char *)v40 + v41;
  if ( v7 < (unsigned __int64)v40 + v41 )
  {
LABEL_22:
    v19 = PsGetCurrentProcess(v15, v14);
    MmUnmapViewOfSection(v19, v17);
    goto LABEL_16;
  }
  if ( (unsigned __int64)v40 >= v7 )
  {
LABEL_21:
    if ( (unsigned __int64)v40 < v7 + v6 )
      goto LABEL_22;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v40 = (char *)v40 + 16;
    v20 = v17;
    if ( (unsigned __int64)v17 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = 0;
    v21 = v17 + 1;
    if ( (unsigned __int64)(v17 + 1) >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    *v21 = v10;
    v22 = v17 + 2;
    if ( (unsigned __int64)(v17 + 2) >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = v6;
    v39 = 1;
  }
  if ( (_DWORD)v6 )
  {
    v23 = v7 + (unsigned int)v6;
    if ( v23 > MmUserProbeAddress || v23 < v7 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v40, (const void *)v7, (unsigned int)v6);
  v39 = 1;
  if ( v42 )
  {
    v24 = MmUserProbeAddress;
    v26 = v18;
    if ( (unsigned __int64)v18 >= MmUserProbeAddress )
      v26 = (_DWORD *)MmUserProbeAddress;
    *v26 = 0;
    v25 = v18 + 1;
    if ( (unsigned __int64)(v18 + 1) >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = v10;
    v27 = (4 * v10 + 15) & 0xFFFFFFF8;
  }
  else
  {
    v27 = (4 * v10 + 15) & 0xFFFFFFF8;
  }
  v28 = PsGetCurrentProcess(v25, v24);
  if ( (int)MmUnmapViewOfSection(v28, v17) < 0 )
    goto LABEL_16;
  v40 = 0LL;
  v41 = 0LL;
  v46.QuadPart = 0LL;
  v29 = 0LL;
  v43 = 0LL;
  v30 = -1073741823;
  if ( UmfdHostLifeTimeManager::EnsureUmfdHost() )
  {
    v30 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v40, v31, v41, &v46, &v41, v35, v36, v37, &v43);
    v29 = v43;
  }
  if ( v30 < 0 )
    goto LABEL_16;
  v32 = (char *)v40;
  *(_QWORD *)(a3 + 104) = v40;
  *(_QWORD *)(a3 + 16) = &v32[v27];
  v33 = v6 + 16;
  if ( v44 != 2 )
    v33 = v6;
  *(_DWORD *)(a3 + 24) = v33 - v27;
  *(_QWORD *)(a3 + 88) = v41;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v29;
  *a1 = (unsigned __int64)v32;
  return v10;
}
