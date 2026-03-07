__int64 __fastcall MiPrepareToHotPatchImage(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r14
  unsigned __int8 v6; // r15
  _QWORD *Pool; // rax
  PRTL_BITMAP *v8; // r8
  int v9; // ebx
  unsigned int *v10; // r13
  _QWORD *v11; // rax
  RTL_BITMAP *v12; // rcx
  int v13; // edx
  _DWORD *v14; // rbx
  _DWORD *v15; // r12
  int v16; // r8d
  unsigned int v17; // r12d
  unsigned int *v18; // rcx
  _QWORD *v19; // rax
  RTL_BITMAP *v20; // rcx
  int v21; // r9d
  ULONG v22; // edx
  PRTL_BITMAP *v23; // r12
  int v24; // r15d
  ULONG NextForwardRunClear; // eax
  ULONG v26; // r14d
  __int64 v27; // rcx
  int v29; // [rsp+20h] [rbp-128h]
  int v30; // [rsp+40h] [rbp-108h]
  int v31; // [rsp+48h] [rbp-100h]
  int v32; // [rsp+50h] [rbp-F8h]
  int v33; // [rsp+58h] [rbp-F0h]
  __int64 v34; // [rsp+78h] [rbp-D0h]
  unsigned int *v35; // [rsp+80h] [rbp-C8h]
  __int128 v36; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE *v37; // [rsp+A0h] [rbp-A8h]
  _BYTE *v38; // [rsp+A8h] [rbp-A0h]
  PRTL_BITMAP *v39; // [rsp+B0h] [rbp-98h]
  _BYTE v40[136]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned int *v41; // [rsp+150h] [rbp+8h]
  _BYTE *StartingRunIndex; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int8 v44; // [rsp+168h] [rbp+20h]

  StartingRunIndex = a3;
  v3 = a3;
  v36 = 0LL;
  memset(v40, 0, 0x48uLL);
  if ( v3 )
  {
    v6 = 0;
  }
  else
  {
    v3 = v40;
    StartingRunIndex = v40;
    v6 = 1;
  }
  v44 = v6;
  v38 = v3;
  v35 = (unsigned int *)(a1 + 32);
  Pool = MiAllocatePool(
           256,
           8 * ((unsigned int)((*(_DWORD *)(a1 + 32) & 0x3F000) != 0) + 2 + (*(_DWORD *)(a1 + 32) >> 18)),
           0x20206D4Du);
  v8 = (PRTL_BITMAP *)(a1 + 48);
  v39 = (PRTL_BITMAP *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = *(_DWORD *)(a1 + 32) >> 12;
    Pool[1] = Pool + 2;
  }
  if ( !*v8 )
    return (unsigned int)-1073741670;
  RtlSetAllBits(*v8);
  v10 = (unsigned int *)(v3 + 16);
  v37 = v3 + 16;
  *(_DWORD *)(a1 + 36) = 16 * *((_DWORD *)v3 + 4);
  if ( !a2 )
  {
    v11 = MiAllocatePool(64, 8 * (((*v10 & 0x3F) != 0) + 2 + (*v10 >> 6)), 0x20206D4Du);
    *(_QWORD *)(a1 + 40) = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = *v10;
      v11[1] = v11 + 2;
    }
    v12 = *(RTL_BITMAP **)(a1 + 40);
    if ( v12 )
    {
      RtlClearAllBits(v12);
      MiProcessHotPatchUndoTable(a1, v3);
      v14 = 0LL;
      v15 = (_DWORD *)a2;
      goto LABEL_23;
    }
    return (unsigned int)-1073741670;
  }
  v34 = a2 + *(unsigned int *)(RtlFindHotPatchBase(a2) + 24);
  v9 = RtlCountRequiredHotPatchAddressTableEntries(
         *(_QWORD *)(a1 + 8),
         *v35,
         v16,
         *(_QWORD *)(a1 + 24),
         *v10,
         a2,
         v34,
         v6);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v17 = *v10;
  v18 = (unsigned int *)(v38 + 20);
  v41 = (unsigned int *)(v38 + 20);
  if ( !v6 )
  {
    v19 = MiAllocatePool(64, 8 * ((v17 >> 6) + ((v17 & 0x3F) != 0) + 2), 0x20206D4Du);
    *(_QWORD *)(a1 + 40) = v19;
    if ( v19 )
    {
      *(_DWORD *)v19 = v17;
      v19[1] = v19 + 2;
    }
    v20 = *(RTL_BITMAP **)(a1 + 40);
    if ( !v20 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v20);
    MiProcessHotPatchUndoTable(a1, v3);
    v18 = v41;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    v9 = MiPrepareImagePagesForHotPatch((__int64 *)a1, *(_QWORD *)(a1 + 24), *v18);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  *(_QWORD *)&v36 = a1;
  *((_QWORD *)&v36 + 1) = v6;
  v15 = (_DWORD *)a2;
  RtlEnumerateHotPatchPatches(a2, v34, MiPrepareToHotPatchImagePatchCallback, &v36);
  v9 = MiCheckUnsupportedSections((PRTL_BITMAP *)a1);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v14 = (_DWORD *)v34;
LABEL_23:
  if ( !v6 )
  {
    if ( !(unsigned int)RtlCheckCurrentPatchesApplied(
                          *(_QWORD *)(a1 + 8),
                          v13,
                          *(_QWORD *)(a1 + 24),
                          *((_QWORD *)v3 + 3),
                          *v10) )
      return (unsigned int)-1073740628;
    LOBYTE(StartingRunIndex) = 0;
    RtlHotPatchSynchronizationRequired(
      *(_QWORD *)(a1 + 8),
      v15,
      v14,
      v21,
      v29,
      *(_QWORD *)(a1 + 24),
      *((_QWORD *)v3 + 3),
      *(PRTL_BITMAP *)(a1 + 40),
      v30,
      v31,
      v32,
      v33,
      &StartingRunIndex);
    RtlClearAllBits(*(PRTL_BITMAP *)(a1 + 40));
    if ( (_BYTE)StartingRunIndex )
      *(_DWORD *)(a1 + 140) |= 1u;
  }
  LODWORD(StartingRunIndex) = 0;
  v22 = 0;
  v23 = v39;
  while ( 1 )
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(*v23, v22, (PULONG)&StartingRunIndex);
    v26 = NextForwardRunClear;
    if ( !NextForwardRunClear )
      break;
    v24 = (int)StartingRunIndex;
    v9 = MiPrepareImagePagesForHotPatch(
           (__int64 *)a1,
           *(_QWORD *)(a1 + 8) + (unsigned int)((_DWORD)StartingRunIndex << 12),
           NextForwardRunClear);
    if ( v9 < 0 )
      return (unsigned int)v9;
    LODWORD(StartingRunIndex) = v26 + v24;
    v22 = v26 + v24;
  }
  v9 = MiMapHotPatchImageInSystemSpace((_QWORD *)a1);
  if ( v9 >= 0 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
    *(_QWORD *)(a1 + 72) = v27;
    *(_QWORD *)(a1 + 80) = v27 + *v35;
    return 0;
  }
  return (unsigned int)v9;
}
