/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x140240500
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406DAFE8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021B950 (MiVadPureReserve.c)
 *     MiWriteValidPteVolatile @ 0x140240CE0 (MiWriteValidPteVolatile.c)
 *     MiGetWsleProtection @ 0x140240D70 (MiGetWsleProtection.c)
 *     MiUpdatePfnProtection @ 0x14028E950 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiSetProtectionOnTransitionPte @ 0x140363CE4 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r10
  unsigned int v11; // esi
  unsigned int updated; // edi
  unsigned int v13; // r12d
  __int64 v14; // rbx
  ULONG_PTR v15; // r14
  unsigned __int64 v16; // r15
  unsigned __int64 Flink; // rdx
  unsigned __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r15
  unsigned __int64 v30; // r12
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // r13d
  struct _LIST_ENTRY *v39; // rdx
  __int64 v40; // rax
  int WsleProtection; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _LIST_ENTRY *v45; // rax
  char v46; // rdx^7
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  int v54; // eax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rbx
  unsigned __int8 v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh]
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v62; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v66; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v67; // [rsp+68h] [rbp-98h]
  unsigned __int64 v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v70; // [rsp+80h] [rbp-80h]
  unsigned __int64 v71; // [rsp+88h] [rbp-78h]
  int v72; // [rsp+90h] [rbp-70h] BYREF
  __int16 v73; // [rsp+94h] [rbp-6Ch]
  __int16 v74; // [rsp+96h] [rbp-6Ah]
  __int64 v75; // [rsp+98h] [rbp-68h]
  __int64 v76; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+A8h] [rbp-58h]
  __int128 v78; // [rsp+B0h] [rbp-50h]
  __int128 v79; // [rsp+C0h] [rbp-40h]
  __int128 v80; // [rsp+D0h] [rbp-30h]
  __int128 v81; // [rsp+E0h] [rbp-20h]
  __int128 v82; // [rsp+F0h] [rbp-10h]
  __int128 v83; // [rsp+100h] [rbp+0h]
  __int128 v84; // [rsp+110h] [rbp+10h]
  __int128 v85; // [rsp+120h] [rbp+20h]
  __int128 v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+140h] [rbp+40h]

  v65 = a2;
  v71 = a3;
  v4 = a2;
  v74 = 0;
  v87 = 0LL;
  v69 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v11 = v6;
  updated = 1;
  v13 = 4;
  v60 = v6;
  v14 = v6;
  v73 = v6;
  v76 = v6;
  v77 = v6;
  v63 = v6;
  v61 = 4;
  v59 = 1;
  v75 = 20LL;
  v72 = 1;
  v68 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = v68;
  v16 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v67 = v16;
  v64 = v9 + 1664;
  v58 = MiLockWorkingSetShared(v9 + 1664, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL, v8);
  if ( v68 <= v16 )
  {
    do
    {
      if ( (v15 & 0xFFF) != 0 )
      {
        if ( v14 )
          goto LABEL_10;
      }
      else if ( v14 )
      {
        MiFlushTbList(&v72);
        MiUnlockPageTableInternal(v64, v14);
      }
      MiMakeSystemAddressValid(v15, 0);
      v63 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_10:
      v18 = *(_QWORD *)v15;
      v19 = MiPteInShadowRange(v15, Flink);
      v22 = v19;
      if ( v19
        && (unsigned int)MiPteHasShadow(v20, Flink, v19, v21)
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v23 = *(_QWORD *)(Flink + 8 * ((v15 >> 3) & 0x1FF));
          Flink = v18 | 0x20;
          if ( (v23 & 0x20) == 0 )
            Flink = v18;
          v18 = Flink;
          if ( (v23 & 0x42) != 0 )
            v18 = Flink | 0x42;
        }
      }
      v62 = v18;
      if ( !v18 )
        goto LABEL_98;
      if ( (v18 & 1) != 0 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v62, Flink)
          && (unsigned int)MiPteHasShadow(v24, Flink, v25, v26)
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v27 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v62 >> 3) & 0x1FF));
            Flink = v18 | 0x20;
            if ( (v27 & 0x20) == 0 )
              Flink = v18;
            v18 = Flink;
            if ( (v27 & 0x42) != 0 )
              v18 = Flink | 0x42;
          }
        }
        v28 = (v18 >> 12) & 0xFFFFFFFFFLL;
        v29 = 48 * v28 - 0x58000000000LL;
        if ( *(_WORD *)(v29 + 32) > 1u && (updated & 7) != 4 )
          goto LABEL_98;
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v28 - 0x58000000000LL) )
        {
          v30 = (__int64)(v15 << 25) >> 16;
          ProtoPteAddress = MiGetProtoPteAddress(v4, v30 >> 12, 0LL, &v69);
          Flink = 0x8000000000000000uLL;
          if ( (*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
            goto LABEL_98;
          v70 = (unsigned __int64 *)(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          LODWORD(v66) = (v30 >> 9) & 0xFFFFFFF8;
          v32 = *v70;
          v33 = *v70;
          v38 = MiPteInShadowRange(v70, 0x8000000000000000uLL);
          if ( v38
            && (unsigned int)MiPteHasShadow(v35, v34, v36, v37)
            && (v33 & 1) != 0
            && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
          {
            v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v39 )
            {
              v33 |= 0x20uLL;
              v40 = *((_QWORD *)&v39->Flink + ((v66 >> 3) & 0x1FF));
              if ( (v40 & 0x20) == 0 )
                v33 = v32;
              if ( (v40 & 0x42) != 0 )
                v33 |= 0x42uLL;
            }
          }
          WsleProtection = MiGetWsleProtection(
                             (__int64)(v15 << 25) >> 16,
                             HIBYTE(v33) & 0xFu | (unsigned __int8)(16 * ((v33 >> 60) & 7)));
          v13 = v61;
          if ( WsleProtection != v61
            && (WsleProtection || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v29 + 16) >> 5) & 0x1F) != v61) )
          {
            v4 = v65;
            goto LABEL_98;
          }
          if ( v38
            && (unsigned int)MiPteHasShadow(v42, Flink, v43, v44)
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v45 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v45 )
            {
              v46 = HIBYTE(v32);
              v47 = *((_QWORD *)&v45->Flink + ((v66 >> 3) & 0x1FF));
              if ( (v47 & 0x20) == 0 )
                v46 = HIBYTE(v32);
              HIBYTE(v32) = v46;
              if ( (v47 & 0x42) != 0 )
                HIBYTE(v32) = v46;
            }
          }
          updated = v59;
          MiWriteValidPteVolatile(v70, 0x80000000LL, HIBYTE(v32) & 0xFu | (unsigned __int8)(16 * (v59 & 7)));
          v4 = v65;
        }
        else
        {
          if ( ((*(_DWORD *)(v29 + 16) >> 5) & 0x1F) != (unsigned __int64)v13 )
            goto LABEL_98;
          updated = MiUpdatePfnProtection(v4, 48 * v28 - 0x58000000000LL, updated);
          v59 = updated;
        }
        MiRevertValidPte(v4, v15, updated, v28, (__int64)&v72);
        v16 = v67;
        v15 += 8LL;
        goto LABEL_79;
      }
      if ( (v18 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_98;
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v18) )
        {
          v49 = MiSwizzleInvalidPte(32 * (updated & 0x1F | 0xFFFFFFFFF8000020uLL));
          v62 = v49;
          Flink = v49;
          if ( (_DWORD)v51 )
          {
            if ( (unsigned int)MiPteHasShadow(v50, v49, v51, v52) )
            {
              v53 = Flink;
              if ( !HIBYTE(word_140C4E008) && (Flink & 1) != 0 )
                v53 = Flink | 0x8000000000000000uLL;
              *(_QWORD *)v15 = v53;
              MiWritePteShadow(v15, v53);
              goto LABEL_98;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              *(_QWORD *)v15 = Flink;
              goto LABEL_98;
            }
            v49 = Flink;
            if ( (Flink & 1) != 0 )
              v49 = Flink | 0x8000000000000000uLL;
          }
          *(_QWORD *)v15 = v49;
LABEL_98:
          v57 = v63;
          if ( v63 != ((v71 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
          {
            MiFlushTbList(&v72);
            if ( v57 )
            {
              MiUnlockPageTableInternal(v64, v57);
              v63 = 0LL;
            }
          }
          v16 = v15 - 8;
          v13 = 1;
          v15 = v68;
          updated = 4;
          v11 = -1073741755;
          v67 = v16;
          v61 = 1;
          v59 = 4;
          v60 = -1073741755;
          goto LABEL_80;
        }
      }
      else
      {
        if ( (v18 & 0x800) != 0 )
        {
          v54 = MiSetProtectionOnTransitionPte(v4, v15, updated, (updated & 7) == 4);
          if ( !v54 )
            goto LABEL_96;
          if ( v54 != 2 )
            goto LABEL_98;
          goto LABEL_79;
        }
        v48 = (v18 >> 5) & 0x1F;
        if ( v48 != v13 )
          goto LABEL_98;
      }
      Flink = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
      v62 = Flink;
      v55 = Flink;
      if ( !(_DWORD)v22 )
        goto LABEL_95;
      if ( (unsigned int)MiPteHasShadow(v48, Flink, v22, v21) )
      {
        v56 = Flink;
        if ( !HIBYTE(word_140C4E008) && (Flink & 1) != 0 )
          v56 = Flink | 0x8000000000000000uLL;
        *(_QWORD *)v15 = v56;
        MiWritePteShadow(v15, v56);
        v15 += 8LL;
        goto LABEL_79;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v55 = Flink;
        if ( (Flink & 1) != 0 )
          v55 = Flink | 0x8000000000000000uLL;
LABEL_95:
        *(_QWORD *)v15 = v55;
LABEL_96:
        v15 += 8LL;
        goto LABEL_79;
      }
      *(_QWORD *)v15 = Flink;
      v15 += 8LL;
LABEL_79:
      v11 = v60;
LABEL_80:
      v14 = v63;
    }
    while ( v15 <= v16 );
  }
  MiFlushTbList(&v72);
  if ( v14 )
    MiUnlockPageTableInternal(v64, v14);
  MiUnlockWorkingSetShared(v64, v58);
  return v11;
}
