/*
 * XREFs of CmpDoBuildVirtualStack @ 0x140A1641C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406B6550 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14078F228 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14078F258 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     CmpAssignSecurityToKcb @ 0x1407A560C (CmpAssignSecurityToKcb.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpStartKcbStack @ 0x1407AF450 (CmpStartKcbStack.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1409C6FC8 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  __int64 v9; // rdx
  int AccessStateFromSubjectContext; // ebx
  unsigned int v11; // esi
  _DWORD *v12; // r15
  __m128i *String1; // r12
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  ULONG_PTR v17; // rdi
  unsigned int v18; // r12d
  __int64 v19; // rbx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // r15d
  ULONG_PTR v24; // r12
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // rdx
  __int64 CellFlat; // rax
  __int64 v28; // rsi
  __int64 CellPaged; // rax
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rcx
  ULONG_PTR v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h] BYREF
  int v41[4]; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET v42[2]; // [rsp+A0h] [rbp-60h]
  int v43[4]; // [rsp+B0h] [rbp-50h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46[38]; // [rsp+E0h] [rbp-20h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v47[5]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v48[28]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v38 = a2;
  v7 = a1;
  v39 = a1;
  v36 = 0LL;
  v37 = 0LL;
  memset(v47, 0, sizeof(v47));
  memset(v48, 0, sizeof(v48));
  LOBYTE(v35) = 0;
  BugCheckParameter2 = 0LL;
  HvpGetCellContextReinitialize(&v36);
  HvpGetCellContextReinitialize(&v37);
  memset(v46, 0, 0x128uLL);
  LODWORD(v46[12]) = -1;
  v46[19] = (__int64)&v46[18];
  v46[18] = (__int64)&v46[18];
  memset(&v46[27], 0, 0x50uLL);
  *(_OWORD *)v41 = 0LL;
  HIWORD(v41[0]) = -1;
  *(_OWORD *)v43 = 0LL;
  HIWORD(v43[0]) = -1;
  *(_OWORD *)v42 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  CmpAttachToRegistryProcess((PRKAPC_STATE)&v46[21]);
  LODWORD(v46[20]) |= 1u;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(a5, v47, v48, 4, (_DWORD *)CmKeyObjectType + 19);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v11 = 0;
    if ( a2 )
    {
      v12 = (_DWORD *)(v7 + 40);
      while ( 1 )
      {
        LODWORD(v46[3]) = 0;
        *(_OWORD *)v43 = 0LL;
        *(_OWORD *)v41 = 0LL;
        *(_OWORD *)Privileges = 0LL;
        HIWORD(v43[0]) = -1;
        *(_OWORD *)v42 = 0LL;
        HIWORD(v41[0]) = -1;
        String1 = (__m128i *)(v7 + 48LL * v11);
        v14 = *((_QWORD *)v12 - 3);
        v45 = v14;
        AccessStateFromSubjectContext = CmpStartKcbStack((__int64)v43, *(_WORD *)(v14 + 66));
        if ( AccessStateFromSubjectContext < 0 )
          break;
        AccessStateFromSubjectContext = CmpStartKcbStackForTopLayerKcb((__int64)v41, v14);
        if ( AccessStateFromSubjectContext < 0 )
          break;
        v15 = CmpHashUnicodeComponent(String1);
        LODWORD(v34) = v15 + 37 * *(_DWORD *)(v14 + 16);
        v16 = CmpWalkOneLevel(
                v14,
                (__int64)v41,
                &BugCheckParameter2,
                (__int64)v43,
                (bool *)&v35,
                String1,
                v15,
                v34,
                0LL,
                1,
                (__int64)v46);
        v17 = BugCheckParameter2;
        AccessStateFromSubjectContext = v16;
        if ( v16 < 0 )
          goto LABEL_23;
        if ( *(_DWORD *)(BugCheckParameter2 + 40) == -1 )
        {
          if ( *v12 == 1 || *(int *)(v45 + 40) < 0 )
            LODWORD(v46[3]) = 1;
          LODWORD(v46[0]) = 1;
          CmpLockKcbStackTopExclusiveRestShared((__int64)v41);
          CmpLockKcbStackTopExclusiveRestShared((__int64)v43);
          AccessStateFromSubjectContext = CmpCreateChild(
                                            (__int64)v41,
                                            (__int64)v43,
                                            (__int64)v47,
                                            (UNICODE_STRING *)String1,
                                            (__int64)v46,
                                            512,
                                            3,
                                            0,
                                            0LL);
          if ( AccessStateFromSubjectContext < 0 )
          {
            CmpUnlockKcbStack((__int64)v43);
            CmpUnlockKcbStack((__int64)v41);
LABEL_23:
            if ( v17 )
              CmpDereferenceKeyControlBlock(v17);
            break;
          }
          CmpUnlockKcbStack((__int64)v43);
          CmpUnlockKcbStack((__int64)v41);
        }
        CmpUnlockHashEntryByKcb(v17);
        v18 = v38;
        *((_QWORD *)v12 - 2) = v17;
        *(v12 - 1) = *(_DWORD *)(v17 + 40);
        v19 = v18 - 1;
        if ( v11++ < (unsigned int)v19 )
        {
          v21 = 6LL * v11;
          *(_QWORD *)(v39 + 8 * v21 + 16) = v17;
          v22 = *(_DWORD *)(v17 + 40);
          v7 = v39;
          *(_DWORD *)(v39 + 8 * v21 + 32) = v22;
        }
        else
        {
          v7 = v39;
        }
        BugCheckParameter2 = 0LL;
        if ( Privileges[1] )
          CmSiFreeMemory(Privileges[1]);
        if ( v42[1] )
          CmSiFreeMemory(v42[1]);
        v12 += 12;
        if ( v11 >= v18 )
          goto LABEL_30;
      }
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      if ( v42[1] )
        CmSiFreeMemory(v42[1]);
    }
    else
    {
      v19 = 0xFFFFFFFFLL;
LABEL_30:
      v23 = *(_DWORD *)(v7 + 48 * v19 + 36);
      v24 = *(_QWORD *)(v7 + 48 * v19 + 24);
      AccessStateFromSubjectContext = HvpMarkCellDirty(*(_QWORD *)(a4 + 32), *(unsigned int *)(a4 + 40), 0);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        AccessStateFromSubjectContext = HvpMarkCellDirty(a3, v23, 0);
        if ( AccessStateFromSubjectContext >= 0 )
        {
          v25 = *(_QWORD *)(a4 + 32);
          v26 = *(unsigned int *)(a4 + 40);
          if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v25, v26, &v36);
          else
            CellFlat = HvpGetCellPaged(v25, v26, (unsigned int *)&v36);
          v28 = CellFlat;
          if ( CellFlat )
          {
            if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
              CellPaged = HvpGetCellFlat(a3, v23, &v37);
            else
              CellPaged = HvpGetCellPaged(a3, v23, (unsigned int *)&v37);
            v30 = CellPaged;
            if ( CellPaged )
            {
              CmpLockTwoSecurityCachesExclusiveShared(a3, *(_QWORD *)(a4 + 32));
              AccessStateFromSubjectContext = CmpCopySaclToVirtualKey(*(_QWORD *)(a4 + 32), v23);
              CmpUnlockTwoSecurityCaches(a3, *(_QWORD *)(a4 + 32));
              if ( AccessStateFromSubjectContext >= 0 )
              {
                CmpAssignSecurityToKcb(v24, *(unsigned int *)(v30 + 44), 0LL, 0, 0);
                *(_WORD *)(v24 + 186) |= 0x100u;
                *(_WORD *)(v30 + 2) |= 0x100u;
                *(_WORD *)(a4 + 186) |= 0x80u;
                *(_WORD *)(v28 + 2) |= 0x80u;
                AccessStateFromSubjectContext = 0;
              }
            }
            else
            {
              AccessStateFromSubjectContext = -1073741670;
            }
            v31 = *(_QWORD *)(a4 + 32);
            if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v31, &v36);
            else
              HvpReleaseCellPaged(v31, (unsigned int *)&v36);
            if ( v30 )
            {
              v32 = *(_QWORD *)(v24 + 32);
              if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v32, &v37);
              else
                HvpReleaseCellPaged(v32, (unsigned int *)&v37);
            }
          }
          else
          {
            AccessStateFromSubjectContext = -1073741670;
          }
        }
      }
    }
    SepDeleteAccessState((__int64)v47);
    SeReleaseSubjectContext(&v47[1]);
  }
  if ( (v46[20] & 1) != 0 )
  {
    CmpDetachFromRegistryProcess(&v46[21]);
    LODWORD(v46[20]) &= ~1u;
  }
  LOBYTE(v9) = 1;
  CmpCleanupParseContext(v46, v9);
  return (unsigned int)AccessStateFromSubjectContext;
}
