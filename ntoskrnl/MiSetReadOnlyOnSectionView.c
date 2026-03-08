/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x14020AAF0
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406A0D38 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiSetWsleProtection @ 0x1402296A0 (MiSetWsleProtection.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x140229ECC (MiGetWsleProtection.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402EC490 (MiSetProtectionOnTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiUpdatePfnProtection @ 0x140344B44 (MiUpdatePfnProtection.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // r14
  int v9; // r12d
  unsigned int updated; // r15d
  ULONG_PTR v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r12
  __int64 v17; // rbx
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int WsleProtection; // eax
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // r10d
  unsigned __int64 v29; // rbx
  int v30; // r8d
  unsigned __int64 v31; // rdx
  unsigned __int8 v32; // r10
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // r9d
  __int64 v37; // rdx
  int v38; // r10d
  unsigned __int8 v39; // r8
  unsigned __int8 v40; // r10
  bool v41; // zf
  int v42; // eax
  char v43; // [rsp+30h] [rbp-D0h]
  __int64 v45; // [rsp+40h] [rbp-C0h]
  unsigned int v46; // [rsp+48h] [rbp-B8h]
  unsigned int v47; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  _QWORD v52[24]; // [rsp+70h] [rbp-90h] BYREF

  v50 = a3;
  v7 = 0LL;
  v49 = 0LL;
  memset(v52, 0, 0xB8uLL);
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v47 = 0;
  LODWORD(v52[0]) = 1;
  v9 = 4;
  v46 = 4;
  WORD2(v52[0]) = 0;
  updated = 1;
  v52[2] = 0LL;
  LODWORD(v52[1]) = 20;
  v52[3] = 0LL;
  v51 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v51;
  v12 = a1 + 1664;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = v12;
  v43 = MiLockWorkingSetShared(v12);
  while ( v11 <= v13 )
  {
    if ( (v11 & 0xFFF) == 0 || !v7 )
    {
      if ( v7 )
      {
        MiFlushTbList(v52);
        MiUnlockPageTableInternal(v12, v7);
      }
      MiMakeSystemAddressValid(v11, 0);
      v7 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v14 = MI_READ_PTE_LOCK_FREE(v11);
    v48 = v14;
    v15 = v14;
    if ( !v14 )
      goto LABEL_25;
    if ( (v14 & 1) != 0 )
    {
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v48) >> 12) & 0xFFFFFFFFFFLL;
      v17 = 48 * v16 - 0x220000000000LL;
      if ( *(_WORD *)(v17 + 32) > 1u && (updated & 7) != 4 )
        goto LABEL_29;
      if ( *(__int64 *)(v17 + 40) < 0 )
      {
        ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 0LL, &v49);
        v19 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
        if ( v19 != ProtoPteAddress )
          goto LABEL_29;
        LOBYTE(v20) = MiGetWsleContents(v19, (__int64)(v11 << 25) >> 16);
        WsleProtection = MiGetWsleProtection((__int64)(v11 << 25) >> 16, v20);
        if ( WsleProtection != v46 && (WsleProtection || ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F) != v46) )
          goto LABEL_29;
        MiSetWsleProtection(v22, (__int64)(v11 << 25) >> 16, updated);
        v23 = a2;
LABEL_13:
        MiRevertValidPte(v23, v11, updated, v16, (__int64)v52);
        v9 = v46;
LABEL_14:
        v12 = v45;
        goto LABEL_15;
      }
      v23 = a2;
      if ( ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F) == (unsigned __int64)v46 )
      {
        updated = MiUpdatePfnProtection(a2, 48 * v16 - 0x220000000000LL, updated);
        goto LABEL_13;
      }
      v12 = v45;
LABEL_25:
      if ( v7 != ((v50 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        MiFlushTbList(v52);
        if ( v7 )
        {
          MiUnlockPageTableInternal(v12, v7);
          v7 = 0LL;
        }
      }
      v47 = -1073741755;
      v13 = v11 - 8;
      v46 = 1;
      v11 = v51;
      v9 = 1;
      updated = 4;
    }
    else
    {
      if ( (v14 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_25;
        v26 = updated & 0x1F;
        MiPteInShadowRange(v11);
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v15) )
        {
          v34 = MiSwizzleInvalidPte(32 * (v26 | 0xFFFFFFFFF8000020uLL));
          v36 = 0;
          v48 = v34;
          v37 = v34;
          if ( v38 )
          {
            if ( (unsigned int)MiPteHasShadow(v35, v34, v34) )
            {
              v40 = ++v36;
              if ( !HIBYTE(word_140C6697C) )
              {
                v41 = (v39 & v40) == 0;
LABEL_53:
                if ( !v41 )
                  v37 |= 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v41 = (v39 & 1) == 0;
              goto LABEL_53;
            }
          }
          *(_QWORD *)v11 = v37;
          if ( v36 )
            MiWritePteShadow(v11, v37);
LABEL_29:
          v12 = v45;
          goto LABEL_25;
        }
        v29 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32 * v26);
        v30 = 0;
        v48 = v29;
        v31 = v29;
        if ( v28 )
        {
          if ( (unsigned int)MiPteHasShadow(v27, v29, 0LL) )
          {
            v32 = ++v30;
            if ( !HIBYTE(word_140C6697C) )
            {
              v33 = ((unsigned __int8)v29 & v32) == 0;
LABEL_42:
              if ( !v33 )
                v31 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v33 = (v29 & 1) == 0;
            goto LABEL_42;
          }
        }
        *(_QWORD *)v11 = v31;
        if ( v30 )
          MiWritePteShadow(v11, v31);
        goto LABEL_14;
      }
      if ( (v14 & 0x800) != 0 )
      {
        v42 = MiSetProtectionOnTransitionPte(a2, v11, updated, (updated & 7) == 4);
        if ( !v42 )
          goto LABEL_15;
        if ( v42 != 2 )
          goto LABEL_25;
      }
      else
      {
        if ( ((v14 >> 5) & 0x1F) != v9 )
          goto LABEL_25;
        v48 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
        *(_QWORD *)v11 = v48;
LABEL_15:
        v11 += 8LL;
      }
    }
  }
  MiFlushTbList(v52);
  if ( v7 )
    MiUnlockPageTableInternal(v12, v7);
  LOBYTE(v24) = v43;
  MiUnlockWorkingSetShared(v12, v24);
  return v47;
}
