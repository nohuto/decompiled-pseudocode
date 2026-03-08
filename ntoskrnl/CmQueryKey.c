/*
 * XREFs of CmQueryKey @ 0x1407AE5C0
 * Callers:
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     PsGetCurrentThreadProcess @ 0x1402C0BB0 (PsGetCurrentThreadProcess.c)
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KCBNeedsVirtualImage_0 @ 0x140614000 (KCBNeedsVirtualImage_0.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmGetKeyFlags @ 0x14079C210 (CmGetKeyFlags.c)
 *     CmpLockTwoKcbsShared @ 0x1407ACF00 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1407ACF58 (CmpUnlockTwoKcbs.c)
 *     CmpQueryKeyData @ 0x1407ADD50 (CmpQueryKeyData.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A14D34 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x140A15B68 (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A16968 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, unsigned int *a6)
{
  unsigned int *v6; // rdi
  unsigned int *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // r15
  int KeyData; // edi
  UNICODE_STRING *p_UnicodeString; // rax
  unsigned int v21; // eax
  unsigned int *v22; // r15
  unsigned int v23; // ecx
  unsigned int *v24; // r15
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  int v29; // ecx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v32; // edi
  __int64 v33; // r13
  bool v34; // al
  unsigned int *v35; // r9
  unsigned int v36; // r8d
  unsigned int v37; // r8d
  int v38; // edx
  _DWORD *v39; // r15
  unsigned int v40; // edx
  int v41; // ecx
  int v42; // eax
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int LayeredKey; // ebx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int *v59; // [rsp+58h] [rbp-140h] BYREF
  __int64 v60[2]; // [rsp+60h] [rbp-138h] BYREF
  unsigned int *v61; // [rsp+70h] [rbp-128h] BYREF
  __int64 v62; // [rsp+78h] [rbp-120h] BYREF
  unsigned __int64 *v63; // [rsp+80h] [rbp-118h]
  const void **v64; // [rsp+88h] [rbp-110h]
  __int64 v65[2]; // [rsp+90h] [rbp-108h] BYREF
  unsigned __int64 *v66; // [rsp+A0h] [rbp-F8h]
  unsigned int *v67; // [rsp+A8h] [rbp-F0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-C0h] BYREF
  __int128 v72; // [rsp+F8h] [rbp-A0h] BYREF
  __int128 v73; // [rsp+108h] [rbp-90h]
  __int128 v74; // [rsp+118h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+128h] [rbp-70h] BYREF

  v6 = a4;
  v59 = a4;
  v65[1] = a1;
  v60[1] = a2;
  v61 = a4;
  v10 = a6;
  v67 = a6;
  v60[0] = (__int64)a6;
  v64 = 0LL;
  v11 = 0LL;
  v62 = 0LL;
  UnicodeString = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v69 = 0LL;
  CmpInitializeDelayDerefContext(&v69);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v13, v12, v14, v15);
  v63 = (unsigned __int64 *)(a1 + 8);
  v16 = *(_QWORD *)(a1 + 8);
  v65[0] = v16;
  if ( !*(_WORD *)(v16 + 66) )
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    {
LABEL_4:
      v17 = (unsigned __int64 *)(a2 + 8);
      if ( a2 )
      {
        v16 = *v17;
        v65[0] = *v17;
      }
      v66 = (unsigned __int64 *)(a2 + 8);
      if ( a2 )
        CmpLockTwoKcbsShared(*v17, *v63);
      else
        CmpLockKcbShared(*v63);
      if ( a3 == 3 )
      {
        v18 = *v63;
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v11) )
        {
          KeyData = 0;
          goto LABEL_11;
        }
        if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        {
          KeyData = -1073741444;
LABEL_11:
          if ( !*(_QWORD *)(v18 + 80) )
            goto LABEL_32;
          if ( CmpVEEnabled && (*(_DWORD *)(v18 + 184) & 0x1000000) != 0 )
          {
            if ( (int)CmVirtualKCBToRealPath(v18, &UnicodeString) < 0 )
            {
LABEL_16:
              if ( v64 )
              {
                v21 = *(unsigned __int16 *)v64;
                *a6 = v21 + 4;
                if ( a5 < 4 )
                {
                  KeyData = -1073741789;
                }
                else
                {
                  v22 = v59;
                  *v59 = v21;
                  v23 = a5 - 4;
                  if ( a5 - 4 >= v21 )
                    v23 = v21;
                  else
                    KeyData = -2147483643;
                  memmove(v22 + 1, v64[1], v23);
                }
LABEL_23:
                v24 = v59;
                goto LABEL_24;
              }
LABEL_32:
              KeyData = -1073741670;
              goto LABEL_104;
            }
            p_UnicodeString = &UnicodeString;
          }
          else
          {
            v65[0] = 0LL;
            CmpConstructNameWithStatus(v18, v65);
            p_UnicodeString = (UNICODE_STRING *)v65[0];
          }
          v64 = (const void **)p_UnicodeString;
          goto LABEL_16;
        }
LABEL_51:
        KeyData = -1073740763;
        goto LABEL_104;
      }
      if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v11)
        || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v11) )
      {
        if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        {
          KeyData = -1073741444;
          goto LABEL_104;
        }
        goto LABEL_51;
      }
      if ( a3 == 5 )
      {
        *a6 = 12;
        if ( a5 < 0xC )
        {
          KeyData = -1073741789;
        }
        else
        {
          *v6 = CmGetKeyFlags(v16, v11);
          v6[1] = 0;
          v29 = 0;
          if ( *(int *)(v16 + 40) < 0 )
          {
            v29 = 1;
            v6[1] = 1;
          }
          if ( (*(_DWORD *)(v16 + 184) & 0x100000) != 0 )
            v6[1] = v29 | 2;
          v6[2] = (*(_DWORD *)(v16 + 184) >> 4) & 0xF;
          KeyData = 0;
        }
        goto LABEL_23;
      }
      if ( a3 != 6 )
      {
        if ( a3 == 8 )
        {
          *a6 = 4;
          if ( a5 >= 4 )
          {
            v26 = *(_QWORD *)(v16 + 32);
            v24 = v59;
            v27 = *v59;
            if ( (*(_DWORD *)(v26 + 4112) & 1) != 0 )
              v28 = v27 & 0xFFFFFFFE;
            else
              v28 = v27 | 1;
            *v59 = v28;
            KeyData = 0;
LABEL_25:
            if ( a2 )
            {
              if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
              {
                v43 = *(_QWORD *)(*v66 + 168);
                if ( *(_QWORD *)(*v63 + 168) < v43 )
                  *(_QWORD *)v24 = v43;
              }
              if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
              {
                LODWORD(v60[0]) = 0;
                v67 = 0LL;
                LODWORD(v62) = 0;
                v72 = 0LL;
                v73 = 0LL;
                v74 = 0LL;
                if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                     *v66,
                                     *v63,
                                     -1,
                                     v11,
                                     (__int64)&v69,
                                     (__int64)&v67,
                                     (__int64)&v62,
                                     0LL,
                                     (__int64)v60) == -2147483622 )
                {
                  if ( a3 == 2 )
                    v24[5] = v60[0];
                  else
                    v24[3] = v60[0];
                }
                LOBYTE(v44) = 1;
                if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v44, -1, 0, 0LL, 0, 0LL, (__int64)v60) == -2147483622 )
                {
                  if ( a3 == 2 )
                    v24[8] = v60[0];
                  else
                    v24[5] = v60[0];
                }
                KeyData = CmpQueryKeyData(*v63, a3, (__int64)&v72, 0x30u, v10, v11);
                if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                {
                  if ( a3 == 2 )
                  {
                    if ( DWORD2(v73) > v24[6] )
                      v24[6] = DWORD2(v73);
                    if ( DWORD1(v74) > v24[9] )
                      v24[9] = DWORD1(v74);
                    if ( DWORD2(v74) > v24[10] )
                      v24[10] = DWORD2(v74);
                  }
                  else
                  {
                    if ( (unsigned int)v73 > v24[4] )
                      v24[4] = v73;
                    if ( DWORD2(v73) > v24[6] )
                      v24[6] = DWORD2(v73);
                    if ( HIDWORD(v73) > v24[7] )
                      v24[7] = HIDWORD(v73);
                  }
                }
              }
            }
            else if ( CmpVEEnabled )
            {
              v25 = *v63;
              if ( (*(_DWORD *)(*v63 + 184) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
              {
                LODWORD(v61) = 0;
                v70 = 0LL;
                LODWORD(v59) = 0;
                KeyData = CmpFindSubKeyByNumberFromMergedView(
                            v25,
                            0,
                            -1,
                            v11,
                            (__int64)&v69,
                            (__int64)&v70,
                            (__int64)&v59,
                            0LL,
                            (__int64)&v61);
                if ( KeyData == -2147483622 )
                {
                  if ( a3 == 2 )
                    v24[5] = (unsigned int)v61;
                  else
                    v24[3] = (unsigned int)v61;
                  KeyData = 0;
                }
              }
            }
            goto LABEL_104;
          }
          KeyData = -1073741789;
LABEL_104:
          if ( a2 )
            CmpUnlockTwoKcbs(*v66, *v63);
          else
            CmpUnlockKcb(*v63);
          CmpDrainDelayDerefContext((_QWORD **)&v69);
          CmpUnlockRegistry(v46, v45, v47, v48);
          CmpDetachFromRegistryProcess(&ApcState);
          if ( UnicodeString.Buffer )
          {
            RtlFreeUnicodeString(&UnicodeString);
          }
          else if ( v64 )
          {
            CmpFreeTransientPoolWithTag(v64, 0x624E4D43u);
          }
          return (unsigned int)KeyData;
        }
        KeyData = CmpQueryKeyData(v16, a3, (__int64)v6, a5, a6, v11);
        goto LABEL_23;
      }
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      CurrentThread = KeGetCurrentThread();
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
      v32 = 4;
      *a6 = 4;
      if ( a5 < 4 )
      {
        KeyData = -1073741789;
        v24 = v59;
LABEL_70:
        SeReleaseSubjectContext(&SubjectContext);
        v11 = v62;
LABEL_24:
        if ( KeyData >= 0 )
          goto LABEL_25;
        goto LABEL_104;
      }
      v33 = v65[0];
      v34 = KCBNeedsVirtualImage_0(v65[0]);
      v35 = v59;
      v36 = v34 | *v59 & 0xFFFFFFFE;
      *v59 = v36;
      v37 = v36 & 0xFFFFFFFD;
      *v35 = v37;
      v38 = v37;
      if ( v34 && (*(_DWORD *)(v33 + 184) & 0x20) == 0 )
      {
        v38 = v37 | 2;
        *v35 = v37 | 2;
      }
      if ( CmpVEEnabled )
      {
        v39 = (_DWORD *)(v33 + 184);
        if ( (*(_DWORD *)(v33 + 184) & 0x1000000) != 0 )
        {
LABEL_69:
          v40 = v32 | v38 & 0xFFFFFFFB;
          *v35 = v40;
          v41 = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(*v39 >> 22)) & 8;
          *v35 = v41;
          v42 = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(*v39 >> 19)) & 0x10;
          v24 = v35;
          *v35 = v42;
          KeyData = 0;
          v10 = v67;
          goto LABEL_70;
        }
      }
      else
      {
        v39 = (_DWORD *)(v16 + 184);
      }
      v32 = 0;
      goto LABEL_69;
    }
    CmpLockKcbShared(v16);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(v16);
    }
    else
    {
      CmpUnlockKcb(v16);
      KeyData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v62);
      if ( KeyData >= 0 )
      {
        v11 = v62;
        v6 = v59;
        goto LABEL_4;
      }
    }
    CmpUnlockRegistry(v51, v50, v52, v53);
    CmpDetachFromRegistryProcess(&ApcState);
    return (unsigned int)KeyData;
  }
  LayeredKey = CmQueryLayeredKey(a1, a3, v6, a5, a6);
  CmpUnlockRegistry(v56, v55, v57, v58);
  CmpDetachFromRegistryProcess(&ApcState);
  return LayeredKey;
}
