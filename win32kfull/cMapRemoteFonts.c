/*
 * XREFs of cMapRemoteFonts @ 0x1C028E420
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C028E05C (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C028E180 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C00BBFE8 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     Win32CreateSection @ 0x1C00D4B5C (Win32CreateSection.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0118E20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
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
  __int64 v13; // r8
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // r8
  _DWORD *v19; // r12
  _DWORD *v20; // r15
  __int64 v21; // rax
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  ULONG64 v25; // rcx
  ULONG64 v26; // rdx
  _DWORD *v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // rcx
  unsigned int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // r12
  int v34; // ebx
  __int64 v35; // r8
  char *v36; // rbx
  int v37; // ecx
  union _LARGE_INTEGER *v38; // [rsp+20h] [rbp-C8h]
  enum _SECTION_INHERIT v39; // [rsp+30h] [rbp-B8h]
  unsigned int v40; // [rsp+38h] [rbp-B0h]
  unsigned int v41; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  int v43; // [rsp+60h] [rbp-88h]
  void *v44; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-78h] BYREF
  int v46; // [rsp+78h] [rbp-70h]
  unsigned __int64 v47; // [rsp+80h] [rbp-68h] BYREF
  int v48; // [rsp+88h] [rbp-60h]
  void *v49; // [rsp+90h] [rbp-58h]
  union _LARGE_INTEGER v50; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v51[8]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = a2;
  v48 = a4;
  v46 = 0;
  v7 = *a1;
  v47 = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v44 = 0LL;
  if ( !a3 )
    return 0LL;
  memset_0((void *)a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = *(_DWORD *)(v7 + 4);
    if ( v10 > 3 || (unsigned int)v6 > 0x10000000 || v7 < 0x10000 || v7 > (unsigned __int64)MmHighestUserAddress )
      return 0LL;
    if ( !v10 )
    {
      v46 = 1;
      v10 = 2;
    }
  }
  else
  {
    v10 = 1;
  }
  if ( (unsigned int)v6 < ((4 * v10 + 15) & 0xFFFFFFF8) )
    return 0LL;
  v51[0] = v6;
  if ( (int)Win32CreateSection(&Object, v8, v9, (__int64)v51, (__int64)v38, 0x8000000) < 0 )
    return 0LL;
  v50.QuadPart = 0LL;
  v45 = v6;
  CurrentProcess = PsGetCurrentProcess(v12, v11, v13);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v44, 0LL, v6, &v50, &v45, 2, 0x400000, 4) < 0 )
  {
LABEL_16:
    ObfDereferenceObject(Object);
    return 0LL;
  }
  v19 = v44;
  v49 = v44;
  v20 = v44;
  if ( (unsigned __int64)v44 > v7 )
    goto LABEL_21;
  v16 = (char *)v44 + v45;
  if ( v7 < (unsigned __int64)v44 + v45 )
  {
LABEL_22:
    v21 = PsGetCurrentProcess(v16, v15, v17);
    MmUnmapViewOfSection(v21, v19);
    goto LABEL_16;
  }
  if ( (unsigned __int64)v44 >= v7 )
  {
LABEL_21:
    if ( (unsigned __int64)v44 < v7 + v6 )
      goto LABEL_22;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v44 = (char *)v44 + 16;
    v22 = v19;
    if ( (unsigned __int64)v19 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = 0;
    v23 = v19 + 1;
    if ( (unsigned __int64)(v19 + 1) >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = v10;
    v24 = v19 + 2;
    if ( (unsigned __int64)(v19 + 2) >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = v6;
    v43 = 1;
  }
  if ( (_DWORD)v6 )
  {
    v25 = v7 + (unsigned int)v6;
    if ( v25 > MmUserProbeAddress || v25 < v7 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v44, (const void *)v7, (unsigned int)v6);
  v43 = 1;
  if ( v46 )
  {
    v26 = MmUserProbeAddress;
    v29 = v20;
    if ( (unsigned __int64)v20 >= MmUserProbeAddress )
      v29 = (_DWORD *)MmUserProbeAddress;
    *v29 = 0;
    v27 = v20 + 1;
    if ( (unsigned __int64)(v20 + 1) >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *v27 = v10;
    v30 = (4 * v10 + 15) & 0xFFFFFFF8;
  }
  else
  {
    v30 = (4 * v10 + 15) & 0xFFFFFFF8;
  }
  v31 = PsGetCurrentProcess(v27, v26, v28);
  if ( (int)MmUnmapViewOfSection(v31, v19) < 0 )
    goto LABEL_16;
  v44 = 0LL;
  v45 = 0LL;
  v50.QuadPart = 0LL;
  v33 = 0LL;
  v47 = 0LL;
  v34 = -1073741823;
  if ( UmfdHostLifeTimeManager::EnsureUmfdHost(v32) )
  {
    v34 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v44, v35, v45, &v50, &v45, v39, v40, v41, &v47);
    v33 = v47;
  }
  if ( v34 < 0 )
    goto LABEL_16;
  v36 = (char *)v44;
  *(_QWORD *)(a3 + 104) = v44;
  *(_QWORD *)(a3 + 16) = &v36[v30];
  v37 = v6 + 16;
  if ( v48 != 2 )
    v37 = v6;
  *(_DWORD *)(a3 + 24) = v37 - v30;
  *(_QWORD *)(a3 + 88) = v45;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v33;
  *a1 = (unsigned __int64)v36;
  return v10;
}
