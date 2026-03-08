/*
 * XREFs of SeSubProcessToken @ 0x14070B29C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140709ED0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140266820 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     SepSetTrustLevelForProcessToken @ 0x140296E90 (SepSetTrustLevelForProcessToken.c)
 *     SepSetTokenBnoIsolation @ 0x140296F14 (SepSetTokenBnoIsolation.c)
 *     SepMandatorySubProcessToken @ 0x140297F20 (SepMandatorySubProcessToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402980AC (SepDesktopAppxSubProcessToken.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x14029894C (SeTokenGetNoChildProcessRestricted.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405B6DD8 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1405B6FD0 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeCreateAccessState @ 0x1406991A0 (SeCreateAccessState.c)
 *     SepFinalizeTokenAcls @ 0x1406D1E60 (SepFinalizeTokenAcls.c)
 *     PsReferenceEffectiveToken @ 0x1406D657C (PsReferenceEffectiveToken.c)
 *     SepSetProcessUniqueAttribute @ 0x14070B6C4 (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenSessionById @ 0x14070BB80 (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x1407398DC (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14074438C (SepDereferenceLowBoxNumberEntry.c)
 *     SepAddTokenOriginClaim @ 0x140794680 (SepAddTokenOriginClaim.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409E6C18 (EtwTimLogProhibitChildProcessCreation.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PVOID *a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        char *a11)
{
  unsigned __int8 v15; // r12
  __int64 v16; // r12
  int inserted; // ebx
  int v18; // ecx
  PVOID v19; // r10
  char v20; // di
  PVOID *v21; // rcx
  char *v22; // rcx
  unsigned int v24; // eax
  unsigned int v25; // esi
  __int64 v26; // rax
  void *v27; // rbx
  PVOID v28; // rcx
  int v29; // eax
  char v30; // [rsp+40h] [rbp-C0h] BYREF
  char v31; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v32; // [rsp+42h] [rbp-BEh] BYREF
  bool v33[5]; // [rsp+43h] [rbp-BDh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  bool v35; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+51h] [rbp-AFh] BYREF
  char v37[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  PVOID *v43; // [rsp+78h] [rbp-88h]
  char *v44; // [rsp+80h] [rbp-80h]
  __int128 v45; // [rsp+88h] [rbp-78h] BYREF
  __int128 v46; // [rsp+98h] [rbp-68h]
  __int128 v47; // [rsp+A8h] [rbp-58h]
  __int128 v48; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v49; // [rsp+C8h] [rbp-38h]
  struct _LIST_ENTRY *Flink; // [rsp+D0h] [rbp-30h]
  struct _ACCESS_STATE AccessState; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v52[28]; // [rsp+180h] [rbp+80h] BYREF

  Object = 0LL;
  v42 = a8;
  v43 = a3;
  HIDWORD(v48) = 0;
  v41 = a2;
  *(_QWORD *)&v47 = 0LL;
  DWORD2(v47) = 0;
  v44 = a11;
  v45 = 0LL;
  v46 = 0LL;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v52, 0, sizeof(v52));
  *a3 = 0LL;
  v32 = 0;
  *(_WORD *)a11 = 0;
  a11[2] = 0;
  v30 = 0;
  v36 = 0;
  v37[0] = 0;
  v31 = 0;
  v40 = 0LL;
  v35 = 0;
  v33[0] = 0;
  SeTokenGetNoChildProcessRestricted(a2, (bool *)&v32, &v35, v33);
  v15 = v32;
  if ( __PAIR16__(v32, 0) != v33[0] )
  {
    v25 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v38 = 0;
      v39 = 0;
      v26 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), 0x74726853u, &v38, v33, (__int64)&v39, 0LL);
      v27 = (void *)v26;
      if ( v38 == 2 && v39 < 2 || (v25 = SeTokenIsNoChildProcessRestrictionEnforced(v26) ? 0xC000049D : 0, v38 != 1) )
      {
        if ( v27 )
          ObfDereferenceObjectWithTag(v27, 0x74726853u);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5],
          (unsigned __int64)v27,
          0x74726853u);
      }
      v15 = v32;
    }
    inserted = 0;
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v25;
    if ( ((*(_DWORD *)(a1 + 2172) & 1) == 0 || *(_QWORD *)(a1 + 2240))
      && inserted < 0
      && (!v35 || !*(_DWORD *)(a6 + 12)) )
    {
      EtwTimLogProhibitChildProcessCreation(
        (unsigned int)(v15 != 0) + 1,
        *(_QWORD *)(a6 + 16),
        (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
        (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
      if ( v15 )
        goto LABEL_47;
    }
  }
  v16 = v41;
  LODWORD(v45) = 48;
  *((_QWORD *)&v45 + 1) = 0LL;
  DWORD2(v46) = 0;
  *(_QWORD *)&v46 = 0LL;
  v47 = 0LL;
  inserted = SepDuplicateToken(v41, (unsigned int)&v45, 0, 1, 0, 0, 1, (__int64)&Object);
  if ( inserted < 0 )
  {
LABEL_47:
    v28 = 0LL;
    Object = 0LL;
LABEL_58:
    v20 = v31;
    goto LABEL_59;
  }
  v18 = (int)Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v24 = *((_DWORD *)Object + 30);
    if ( v24 != a5 )
    {
      SepDereferenceLowBoxNumberEntry(v24, *((_QWORD *)Object + 135));
      *((_QWORD *)Object + 135) = 0LL;
      SepSetTokenSessionById((_DWORD)Object, a5, 0, 0, 0LL);
      *((_DWORD *)Object + 30) = a5;
      v29 = SepSetTokenLowboxNumber(Object, *((_QWORD *)Object + 98));
      inserted = v29;
      if ( v29 < 0 )
        goto LABEL_57;
      v18 = (int)Object;
    }
  }
  SepSetTokenSessionById(v18, a5, 0, 0, 0LL);
  *((_DWORD *)Object + 30) = a5;
  *((_DWORD *)Object + 50) &= ~0x200000u;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    *((_DWORD *)Object + 50) |= 0x80000u;
    if ( (*(_DWORD *)a6 & 4) != 0 )
      *((_DWORD *)Object + 50) |= 0x100000u;
  }
  inserted = SepSetTokenBnoIsolation((__int64)Object, 0, 0LL, 0, 0LL);
  if ( inserted < 0 )
    goto LABEL_57;
  inserted = SepDesktopAppxSubProcessToken((__int64)Object, a1, *(_DWORD *)(a6 + 4), &v36, v37);
  if ( inserted < 0 )
    goto LABEL_57;
  inserted = SepMandatorySubProcessToken((_DWORD *)(v16 & -(__int64)((a4 & 2) != 0)), (__int64)Object, a1, &v40);
  if ( inserted < 0 )
    goto LABEL_57;
  inserted = SepSetTrustLevelForProcessToken((__int64)Object, a1, &v30);
  if ( inserted < 0 )
    goto LABEL_57;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    inserted = SepSetProcessUniqueAttribute(Object);
    if ( inserted < 0 )
      goto LABEL_57;
  }
  v19 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 || (a7 & 1) == 0 )
    goto LABEL_12;
  inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)Object, a7);
  if ( inserted < 0 )
  {
LABEL_57:
    v28 = Object;
    goto LABEL_58;
  }
  v19 = Object;
LABEL_12:
  if ( v42 )
  {
    SepAddTokenOriginClaim(v42, a9, v19, 0LL);
    v19 = Object;
  }
  if ( !a10 )
    goto LABEL_15;
  inserted = SepSetTokenBnoIsolation(
               (__int64)v19,
               *(_BYTE *)(a10 + 32),
               (__int128 *)a10,
               *(_DWORD *)(a10 + 16),
               *(_QWORD *)(a10 + 24));
  if ( inserted < 0 )
    goto LABEL_57;
  v19 = Object;
LABEL_15:
  if ( (a4 & 2) == 0 || v40 )
    v30 = 1;
  if ( v30 )
  {
    v49 = v19;
    *(_QWORD *)&v48 = 0LL;
    DWORD2(v48) = 0;
    Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    SepCreateAccessStateFromSubjectContext(&v48, &AccessState, v52, 0, 0LL);
  }
  else
  {
    SeCreateAccessState((int)&AccessState, (int)v52, 0, 0LL);
  }
  v20 = 1;
  inserted = ObInsertObjectEx(Object, &AccessState, 0, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    SepFinalizeTokenAcls(Object);
    v21 = v43;
    *((_BYTE *)Object + 204) = a4 & 1;
    *v21 = Object;
    v22 = v44;
    *v44 = v30;
    v22[1] = v36;
    v22[2] = v37[0];
LABEL_21:
    SepDeleteAccessState((__int64)&AccessState);
    if ( !v30 )
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    return (unsigned int)inserted;
  }
  v28 = 0LL;
  Object = 0LL;
LABEL_59:
  if ( v28 )
    ObfDereferenceObject(v28);
  if ( v20 )
    goto LABEL_21;
  return (unsigned int)inserted;
}
