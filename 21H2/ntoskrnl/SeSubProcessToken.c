/*
 * XREFs of SeSubProcessToken @ 0x1406F328C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406AD6E0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14026A7A0 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402F4D04 (SepDesktopAppxSubProcessToken.c)
 *     SepSetTrustLevelForProcessToken @ 0x1402F5F68 (SepSetTrustLevelForProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x1402F5FEC (SepMandatorySubProcessToken.c)
 *     SepSetTokenBnoIsolation @ 0x1402F6178 (SepSetTokenBnoIsolation.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402F6208 (SeTokenGetNoChildProcessRestricted.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140597488 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140597680 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x140651B70 (PsReferenceEffectiveToken.c)
 *     SeCreateAccessState @ 0x1406566A0 (SeCreateAccessState.c)
 *     SepSetTokenLowboxNumber @ 0x1406C65AC (SepSetTokenLowboxNumber.c)
 *     SepSetProcessUniqueAttribute @ 0x1406F3748 (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenSessionById @ 0x1406F3A30 (SepSetTokenSessionById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406FF29C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14072FA00 (EtwTimLogProhibitChildProcessCreation.c)
 *     SepAddTokenOriginClaim @ 0x140922CB0 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PADAPTER_OBJECT *a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        _BYTE *a11)
{
  _BYTE *v11; // r14
  int inserted; // edi
  int v17; // ecx
  PADAPTER_OBJECT v18; // r10
  PADAPTER_OBJECT *v19; // rcx
  unsigned int DmaOperations; // eax
  unsigned int v22; // r14d
  bool v23; // bl
  struct _DMA_ADAPTER *v24; // rax
  struct _DMA_ADAPTER *v25; // rbx
  int v26; // eax
  char v27; // [rsp+40h] [rbp-C0h] BYREF
  bool v28; // [rsp+41h] [rbp-BFh] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-B8h] BYREF
  bool v30; // [rsp+50h] [rbp-B0h] BYREF
  bool v31; // [rsp+51h] [rbp-AFh] BYREF
  char v32; // [rsp+52h] [rbp-AEh] BYREF
  char v33; // [rsp+53h] [rbp-ADh] BYREF
  char v34; // [rsp+54h] [rbp-ACh]
  bool v35; // [rsp+55h] [rbp-ABh] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  PADAPTER_OBJECT *v42; // [rsp+80h] [rbp-80h]
  __int128 v43; // [rsp+88h] [rbp-78h] BYREF
  PADAPTER_OBJECT v44; // [rsp+98h] [rbp-68h]
  struct _LIST_ENTRY *Flink; // [rsp+A0h] [rbp-60h]
  __int128 v46; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-48h]
  __int128 v48; // [rsp+C8h] [rbp-38h]
  struct _ACCESS_STATE AccessState; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v50[28]; // [rsp+180h] [rbp+80h] BYREF

  v11 = a11;
  v41 = a8;
  v42 = a3;
  v39 = a2;
  DmaAdapter = 0LL;
  HIDWORD(v43) = 0;
  v38 = (__int64)a11;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v50, 0, sizeof(v50));
  *a3 = 0LL;
  *(_WORD *)a11 = 0;
  a11[2] = 0;
  v35 = 0;
  v37 = 0;
  v36 = 0;
  v28 = 0;
  v31 = 0;
  v30 = 0;
  v27 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v40 = 0LL;
  SeTokenGetNoChildProcessRestricted(a2, &v28, &v31, &v30);
  if ( v30 || v28 )
  {
    v22 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v24 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v36, &v35, &v37, 0LL);
      v25 = v24;
      if ( v36 == 2 && v37 < 2
        || (v22 = SeTokenIsNoChildProcessRestrictionEnforced((__int64)v24) ? 0xC000049D : 0, v36 != 1) )
      {
        if ( v25 )
          HalPutDmaAdapter(v25);
      }
      else
      {
        ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v25);
      }
    }
    inserted = 0;
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v22;
    if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
      inserted = *(_QWORD *)(a1 + 2240) != 0LL ? inserted : 0;
    if ( inserted >= 0 )
      goto LABEL_46;
    if ( v31 && *(_DWORD *)(a6 + 12) )
      inserted = 0;
    if ( inserted >= 0 )
    {
LABEL_46:
      v11 = (_BYTE *)v38;
    }
    else
    {
      v23 = v28;
      EtwTimLogProhibitChildProcessCreation(
        (unsigned int)v28 + 1,
        *(_QWORD *)(a6 + 16),
        (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
        (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
      if ( v23 )
      {
LABEL_22:
        if ( inserted >= 0 )
          goto LABEL_23;
        goto LABEL_61;
      }
      v11 = (_BYTE *)v38;
    }
  }
  LODWORD(v46) = 48;
  *((_QWORD *)&v46 + 1) = 0LL;
  DWORD2(v47) = 0;
  *(_QWORD *)&v47 = 0LL;
  v48 = 0LL;
  inserted = SepDuplicateToken(v39, (unsigned int)&v46, 0, 1, 0, 0, 1, (__int64)&DmaAdapter);
  if ( inserted < 0 )
  {
LABEL_54:
    DmaAdapter = 0LL;
    goto LABEL_22;
  }
  v17 = (int)DmaAdapter;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0 )
  {
    DmaOperations = (unsigned int)DmaAdapter[7].DmaOperations;
    if ( DmaOperations != a5 )
    {
      SepDereferenceLowBoxNumberEntry(DmaOperations);
      DmaAdapter[67].DmaOperations = 0LL;
      SepSetTokenSessionById((_DWORD)DmaAdapter, a5, 0, 0, 0LL);
      LODWORD(DmaAdapter[7].DmaOperations) = a5;
      v26 = SepSetTokenLowboxNumber((__int64)DmaAdapter, *(_QWORD *)&DmaAdapter[49].Version);
      inserted = v26;
      if ( v26 < 0 )
        goto LABEL_61;
      v17 = (int)DmaAdapter;
    }
  }
  SepSetTokenSessionById(v17, a5, 0, 0, 0LL);
  LODWORD(DmaAdapter[7].DmaOperations) = a5;
  LODWORD(DmaAdapter[12].DmaOperations) &= ~0x200000u;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    LODWORD(DmaAdapter[12].DmaOperations) |= 0x80000u;
    if ( (*(_DWORD *)a6 & 4) != 0 )
      LODWORD(DmaAdapter[12].DmaOperations) |= 0x100000u;
  }
  inserted = SepSetTokenBnoIsolation((__int64)DmaAdapter, 0, 0LL, 0, 0LL);
  if ( inserted < 0 )
    goto LABEL_61;
  inserted = SepDesktopAppxSubProcessToken((PERESOURCE *)DmaAdapter, a1, *(_DWORD *)(a6 + 4), &v32, &v33);
  if ( inserted < 0 )
    goto LABEL_61;
  inserted = SepMandatorySubProcessToken((_DWORD *)(v39 & -(__int64)((a4 & 2) != 0)), (__int64)DmaAdapter, a1, &v40);
  if ( inserted < 0 )
    goto LABEL_61;
  inserted = SepSetTrustLevelForProcessToken((__int64)DmaAdapter, a1, &v27);
  if ( inserted < 0 )
    goto LABEL_61;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    inserted = SepSetProcessUniqueAttribute(DmaAdapter);
    if ( inserted < 0 )
      goto LABEL_61;
  }
  v18 = DmaAdapter;
  if ( ((__int64)DmaAdapter[12].DmaOperations & 0x4000) != 0 && (a7 & 1) != 0 )
  {
    inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)DmaAdapter, a7);
    if ( inserted < 0 )
      goto LABEL_61;
    v18 = DmaAdapter;
  }
  if ( v41 )
  {
    SepAddTokenOriginClaim(v41, a9, v18);
    v18 = DmaAdapter;
  }
  if ( !a10 )
  {
LABEL_16:
    if ( (a4 & 2) == 0 || v40 )
      v27 = 1;
    if ( v27 )
    {
      v44 = v18;
      *(_QWORD *)&v43 = 0LL;
      DWORD2(v43) = 0;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      SepCreateAccessStateFromSubjectContext(&v43, &AccessState, v50, 0, 0LL);
    }
    else
    {
      SeCreateAccessState((int)&AccessState, (int)v50, 0, 0LL);
    }
    v34 = 1;
    inserted = ObInsertObjectEx(DmaAdapter, &AccessState, 0, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      SepFinalizeTokenAcls(DmaAdapter);
      v19 = v42;
      BYTE4(DmaAdapter[12].DmaOperations) = a4 & 1;
      *v19 = DmaAdapter;
      *v11 = v27;
      v11[1] = v32;
      v11[2] = v33;
      goto LABEL_22;
    }
    goto LABEL_54;
  }
  inserted = SepSetTokenBnoIsolation(
               (__int64)v18,
               *(_BYTE *)(a10 + 32),
               (__int128 *)a10,
               *(_DWORD *)(a10 + 16),
               *(_QWORD *)(a10 + 24));
  if ( inserted >= 0 )
  {
    v18 = DmaAdapter;
    goto LABEL_16;
  }
LABEL_61:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_23:
  if ( v34 )
  {
    SepDeleteAccessState((__int64)&AccessState);
    if ( !v27 )
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
  }
  return (unsigned int)inserted;
}
