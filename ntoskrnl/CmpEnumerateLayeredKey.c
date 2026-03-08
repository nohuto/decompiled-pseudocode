/*
 * XREFs of CmpEnumerateLayeredKey @ 0x140A13774
 * Callers:
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpIsRegistryLockContended @ 0x140613E50 (CmpIsRegistryLockContended.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140614E8C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1406B7CA4 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     CmpQueryKeyDataFromNode @ 0x1407AD510 (CmpQueryKeyDataFromNode.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpKeyEnumStackAdvance @ 0x140A209E8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140A20CD0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A20D38 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A21354 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackInitialize @ 0x140A21424 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A2163C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140A21738 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        PPRIVILEGE_SET *a7,
        char a8)
{
  __int64 KcbAtLayerHeight; // r13
  _DWORD *KeyNodeForKcb; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PPRIVILEGE_SET v17; // rbx
  int started; // edi
  __int16 v19; // dx
  __int16 v20; // dx
  char v21; // r8
  _DWORD *v22; // r9
  __int16 v23; // r10
  int v24; // esi
  int v25; // r9d
  int ResumeContext; // eax
  __int64 v27; // rcx
  ULONG_PTR v28; // rcx
  __int64 CellFlat; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char v36; // [rsp+40h] [rbp-C0h]
  PPRIVILEGE_SET v37[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  PPRIVILEGE_SET v43; // [rsp+80h] [rbp-80h]
  __int128 v44; // [rsp+88h] [rbp-78h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int128 v48; // [rsp+B8h] [rbp-48h] BYREF
  PPRIVILEGE_SET *v49; // [rsp+C8h] [rbp-38h]
  __int16 v50[176]; // [rsp+D0h] [rbp-30h] BYREF

  v41 = a3;
  v46 = a6;
  v49 = a7;
  v47 = a4;
  memset(v50, 0, sizeof(v50));
  v40 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v39 = 0LL;
  v44 = 0LL;
  WORD1(v44) = -1;
  v48 = 0LL;
  v36 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpKeyEnumStackInitialize(v50);
  KcbAtLayerHeight = 0LL;
  KeyNodeForKcb = 0LL;
  HvpGetCellContextReinitialize(&v40);
  v42 = 0LL;
  HvpGetCellContextReinitialize(&v39);
  v43 = 0LL;
  CmpInitializeDelayDerefContext(&v48);
  v17 = *a7;
  *a7 = 0LL;
  v37[0] = v17;
  if ( a3 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v14, v13, v15, v16);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v44, *(_QWORD *)(a1 + 8));
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)&v44);
    v36 = 1;
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started >= 0 )
    {
      v19 = WORD1(v44);
      if ( SWORD1(v44) <= 0 )
        goto LABEL_33;
      do
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v44, v19);
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
          v21 = 1;
        v19 = v23 + v20;
      }
      while ( v19 > 0 );
      KeyNodeForKcb = v22;
      if ( v21 )
      {
        if ( v17
          || (v17 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), 0LL), (v37[0] = v17) != 0LL) )
        {
          if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(&v44, v17) == -1073741735 || v17->Control > a2 )
          {
            v43 = v17;
            v17 = 0LL;
            v37[0] = 0LL;
          }
        }
        started = CmpKeyEnumStackStartFromKcbStack(v50, &v44, a1, v17);
        if ( started >= 0 )
        {
          if ( v17 )
          {
            LODWORD(KeyNodeForKcb) = v17->Control;
            v43 = v17;
            v17 = 0LL;
            v37[0] = 0LL;
          }
          started = CmpKeyEnumStackAdvance(v50);
          if ( started < 0 )
          {
            KeyNodeForKcb = 0LL;
          }
          else
          {
            v24 = (int)KeyNodeForKcb;
            if ( (unsigned int)KeyNodeForKcb >= a2 )
            {
LABEL_26:
              ResumeContext = CmpKeyEnumStackCreateResumeContext(
                                (unsigned int)&v44,
                                (unsigned int)v50,
                                v24,
                                0,
                                (__int64)v37);
              v17 = v37[0];
              if ( ResumeContext >= 0 )
                v17 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), (__int64)v37[0]);
              started = CmpQueryKeyDataFromKeyNodeStack(&v50[4], v41, v47, a5, v46);
              KeyNodeForKcb = 0LL;
              if ( started >= 0 )
                started = 0;
            }
            else
            {
              while ( !CmpIsRegistryLockContended() || (unsigned int)(v24 - (_DWORD)KeyNodeForKcb) < 0xA || !a8 )
              {
                started = CmpKeyEnumStackAdvance(v50);
                if ( started < 0 )
                {
                  KeyNodeForKcb = 0LL;
                  goto LABEL_36;
                }
                if ( ++v24 >= a2 )
                  goto LABEL_26;
              }
              LOBYTE(v25) = 1;
              started = CmpKeyEnumStackCreateResumeContext(
                          (unsigned int)&v44,
                          (unsigned int)v50,
                          v24,
                          v25,
                          (__int64)v37);
              KeyNodeForKcb = 0LL;
              if ( started < 0 )
              {
                v17 = v37[0];
              }
              else
              {
                v17 = 0LL;
                started = -1073741267;
                *v49 = v37[0];
              }
            }
          }
        }
      }
      else
      {
LABEL_33:
        KcbAtLayerHeight = *((_QWORD *)&v44 + 1);
        KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(*((__int64 *)&v44 + 1), (__int64)&v40, 0);
        started = CmpFindSubKeyByNumber(*(_QWORD *)(KcbAtLayerHeight + 32), KeyNodeForKcb, a2, &BugCheckParameter4);
        if ( started >= 0 )
        {
          if ( (_DWORD)BugCheckParameter4 == -1 )
          {
            started = -2147483622;
          }
          else
          {
            v28 = *(_QWORD *)(KcbAtLayerHeight + 32);
            if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v28, (unsigned int)BugCheckParameter4, &v39);
            else
              CellFlat = HvpGetCellPaged(v28, BugCheckParameter4, (unsigned int *)&v39);
            v42 = CellFlat;
            started = CmpQueryKeyDataFromNode(
                        *(_QWORD *)(KcbAtLayerHeight + 32),
                        CellFlat,
                        a3,
                        v47,
                        a5,
                        (unsigned int *)v46,
                        0LL,
                        0LL);
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
LABEL_36:
  CmpKeyEnumStackCleanup(v50);
  if ( v42 )
  {
    v27 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v27, &v39);
    else
      HvpReleaseCellPaged(v27, (unsigned int *)&v39);
  }
  if ( KeyNodeForKcb )
  {
    v30 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v30, &v40);
    else
      HvpReleaseCellPaged(v30, (unsigned int *)&v40);
  }
  if ( v36 )
    CmpUnlockKcbStack((__int64)&v44);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v17 )
    CmpKeyEnumStackFreeResumeContext(v17);
  if ( v43 )
    CmpKeyEnumStackFreeResumeContext(v43);
  CmpDrainDelayDerefContext((_QWORD **)&v48);
  CmpUnlockRegistry(v32, v31, v33, v34);
  return (unsigned int)started;
}
