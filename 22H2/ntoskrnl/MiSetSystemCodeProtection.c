/*
 * XREFs of MiSetSystemCodeProtection @ 0x140357D78
 * Callers:
 *     MiSetImageProtection @ 0x140357D28 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x1407A1ABC (MiProtectSystemImage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiOffsetToProtos @ 0x1402A11E0 (MiOffsetToProtos.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140310124 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140358424 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v7; // esi
  unsigned __int64 v8; // r12
  unsigned int v9; // r15d
  int v10; // ebx
  unsigned __int64 v11; // rdi
  __int64 SessionVm; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 v16; // r8
  __int64 v18; // rbx
  _KPROCESS *v19; // rdx
  unsigned int *v20; // r8
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  unsigned int *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  ULONG_PTR v29; // rcx
  __int64 v30; // r8
  _DWORD *v31; // r9
  unsigned __int64 v32; // rbx
  unsigned __int64 ValidPte; // rbx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbx
  BOOL v42; // eax
  __int64 v43; // r8
  int v44; // eax
  char v45; // di
  __int64 v46; // rbx
  BOOL v47; // eax
  __int64 v48; // r8
  int v49; // eax
  unsigned __int8 v50; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v51; // [rsp+28h] [rbp-D8h]
  __int64 v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *i; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  _KPROCESS *v59; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  unsigned __int64 v62; // [rsp+80h] [rbp-80h]
  unsigned __int64 v63; // [rsp+88h] [rbp-78h]
  _QWORD v64[24]; // [rsp+90h] [rbp-70h] BYREF

  v63 = a3;
  v58 = a1;
  v59 = 0LL;
  memset(v64, 0, 0xB8uLL);
  v7 = 1;
  if ( a4 == 24 || (a4 & 0x10) == 0 )
  {
    v53 = 0;
  }
  else
  {
    a4 &= ~0x10u;
    v53 = 1;
  }
  v8 = (__int64)(a2 << 25) >> 16;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
  {
    v9 = a4;
    v10 = 2;
    if ( a4 == 256 )
    {
      v11 = 0LL;
      v62 = MiSectionControlArea(*(_QWORD *)(v58 + 112));
      v60 = 0LL;
    }
    else
    {
      v60 = a3;
      v62 = 0LL;
      v9 = a4 & 0xFFFFFFFE;
      v16 = a3;
      if ( (a4 & 5) != 5 )
        v9 = a4;
      v11 = 0LL;
      if ( (int)MiMakeDriverPagesPrivate(v58, a2, v16, (v9 >> 1) & 2) < 0 )
        return 0LL;
    }
    if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
      SessionVm = MiGetSessionVm();
    else
      SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
    v52 = SessionVm;
    v64[2] = 0LL;
    if ( (_DWORD)v13 != 1 )
      v10 = 0;
    LODWORD(v64[1]) = 20;
    WORD2(v64[0]) = 0;
    LODWORD(v64[0]) = v10;
    v18 = SessionVm;
    v64[3] = 0LL;
    v56 = 0LL;
    v50 = MiLockWorkingSetShared(SessionVm, v13, v14, v15);
    if ( a2 <= v63 )
    {
      v19 = 0LL;
      v20 = 0LL;
      for ( i = 0LL; ; v20 = i )
      {
        if ( !v11 )
          goto LABEL_22;
        if ( (a2 & 0xFFF) == 0 )
          break;
LABEL_23:
        if ( a2 > v60 )
        {
          v21 = v8 - *(_QWORD *)(v58 + 48);
          if ( v20 )
          {
            v25 = (unsigned int *)*((_QWORD *)v20 + 2);
            i = v25;
            v59 = v19;
          }
          else
          {
            MiFlushTbList((__int64)v64, v19);
            MiUnlockPageTableInternal(v52, v11);
            MiUnlockWorkingSetShared(v52, v50);
            i = MiOffsetToProtos(v62, v21, (unsigned __int64 *)&v59);
            MiLockWorkingSetShared(v52, v22, v23, v24);
            MiLockPageTableInternal(v52, v11, 0LL);
            v19 = v59;
            v25 = i;
          }
          v9 = (*((unsigned __int16 *)v25 + 16) >> 1) & 0x1F;
          v60 = a2 + 8 * (v25[11] - (unsigned __int64)(v25[13] & 0x3FFFFFFF) - (_QWORD)v19 - 1);
          if ( (v9 & 5) == 5 )
            v9 &= ~1u;
        }
        v26 = MI_READ_PTE_LOCK_FREE(a2);
        v54 = v26;
        if ( (v26 & 1) != 0 )
        {
          v51 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v54) >> 12) & 0xFFFFFFFFFLL;
          v27 = 48 * v51 - 0x58000000000LL;
          v28 = MI_PFN_IS_PROTO(v27);
          v19 = 0LL;
          if ( v28 )
            goto LABEL_90;
          if ( (MiGetPagePrivilege(v29, 0, 0LL) & 0x40) != 0 )
          {
            if ( (a4 & 6) != 0 )
              goto LABEL_33;
          }
          else if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 && ((*(_QWORD *)(v27 + 40) >> 60) & 7) == 3 )
          {
LABEL_33:
            v11 = v56;
            v7 = 0;
            goto LABEL_34;
          }
          v32 = 0LL;
          v57 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v57, (__int64)v19, v30, (__int64)v31);
            while ( *(__int64 *)(v27 + 24) < 0 );
          }
          *(_QWORD *)(v27 + 16) ^= (*(_DWORD *)(v27 + 16) ^ (32 * v9)) & 0x3E0;
          if ( v53 )
            MiMarkPfnVerified(v27, 4, v30, v31);
          v61 = v54 & 0x42;
          if ( (v54 & 0x42) != 0 )
            v32 = MiCaptureDirtyBitToPfn(v27);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v32 )
            MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v27 + 40) >> 39) & 0x3FFLL)), v32, 1);
          ValidPte = MiMakeValidPte(a2, v51, v9, (__int64)v31);
          if ( (v9 & 5) == 4 && v61 )
            ValidPte |= 0x42uLL;
          MiWriteValidPteNewProtection(a2, ValidPte);
          if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          {
            v34 = MI_TIGHTER_PERMISSIONS(v54, ValidPte);
            v19 = 0LL;
            if ( !v34 )
              goto LABEL_90;
          }
          MiInsertTbFlushEntry((__int64)v64, v8, 1LL, 0);
          goto LABEL_89;
        }
        if ( (v26 & 0x400) != 0 )
          goto LABEL_89;
        v19 = 0LL;
        if ( (v26 & 0x800) != 0 )
        {
          v35 = MiLockTransitionLeafPage(a2);
          v19 = 0LL;
          if ( !v35 )
            goto LABEL_91;
          v36 = MI_READ_PTE_LOCK_FREE(a2);
          v37 = v36;
          if ( qword_140C4DF40 )
          {
            if ( (v36 & 0x10) != 0 )
              v37 = v36 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v37 = v36 & ~qword_140C4DF40;
          }
          v61 = 48 * ((v37 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v38 = 32LL * (v9 & 0x1F);
          v39 = v38 | v36 & 0xFFFFFFFFFFFFFC1FuLL;
          v40 = *(_QWORD *)(v61 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v54 = v39;
          v41 = v39;
          *(_QWORD *)(v61 + 16) = v38 | v40;
          v42 = MiPteInShadowRange(a2);
          v19 = 0LL;
          if ( v42 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v44 = 1;
              if ( HIBYTE(word_140C4E008) == (_BYTE)v19 && (v39 & 1) != 0 )
                v41 = v39 | 0x8000000000000000uLL;
              goto LABEL_73;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v39 & 1) != 0 )
            {
              v41 = v39 | 0x8000000000000000uLL;
            }
          }
          v44 = (int)v19;
LABEL_73:
          *(_QWORD *)a2 = v41;
          if ( v44 )
          {
            MiWritePteShadow(a2, v41, v43);
            v19 = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_90;
        }
        if ( v26 && a4 != 256 )
        {
          v45 = v26 ^ (v26 ^ (32 * v9)) & 0xE0;
          v54 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
          v46 = v54;
          v47 = MiPteInShadowRange(a2);
          v19 = 0LL;
          if ( v47 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v49 = 1;
              if ( HIBYTE(word_140C4E008) == (_BYTE)v19 && (v45 & 1) != 0 )
                v46 |= 0x8000000000000000uLL;
LABEL_87:
              *(_QWORD *)a2 = v46;
              if ( v49 )
              {
                MiWritePteShadow(a2, v46, v48);
LABEL_89:
                v19 = 0LL;
                goto LABEL_90;
              }
              goto LABEL_90;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v45 & 1) != 0 )
            {
              v46 |= 0x8000000000000000uLL;
            }
          }
          v49 = (int)v19;
          goto LABEL_87;
        }
LABEL_90:
        a2 += 8LL;
        v8 += 4096LL;
LABEL_91:
        v11 = v56;
        if ( a2 > v63 )
          goto LABEL_34;
        v18 = v52;
      }
      MiFlushTbList((__int64)v64, v19);
      MiUnlockPageTableInternal(v18, v11);
LABEL_22:
      v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v56 = v11;
      MiLockPageTableInternal(v18, v11, 0LL);
      v20 = i;
      v19 = 0LL;
      goto LABEL_23;
    }
LABEL_34:
    MiFlushTbList((__int64)v64, v19);
    if ( v11 )
      MiUnlockPageTableInternal(v52, v11);
    MiUnlockWorkingSetShared(v52, v50);
  }
  return v7;
}
