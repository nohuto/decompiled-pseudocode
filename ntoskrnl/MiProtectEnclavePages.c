/*
 * XREFs of MiProtectEnclavePages @ 0x140645C9C
 * Callers:
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14032E62C (MI_TIGHTER_PERMISSIONS.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeCanChangeEnclavePageProtection @ 0x14056DE10 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14056DED0 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x14056E10C (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x140645A50 (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x14064652C (MiUpdateEnclavePfnProtection.c)
 *     MiWriteEnclavePte @ 0x1406465DC (MiWriteEnclavePte.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14093EE68 (VslDebugProtectSecureProcessMemory.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        _QWORD *a11)
{
  unsigned __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  unsigned int v19; // r12d
  int v20; // edx
  int v21; // ecx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  int v24; // r13d
  unsigned __int64 ValidPte; // rdi
  unsigned __int8 v26; // al
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  ULONG_PTR v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rbx
  unsigned __int64 v36; // rsi
  int v37; // eax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r15
  unsigned __int8 v40; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 *v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+58h] [rbp-A8h]
  unsigned int v46; // [rsp+5Ch] [rbp-A4h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  unsigned __int64 v52; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v53; // [rsp+90h] [rbp-70h]
  _QWORD *v54; // [rsp+98h] [rbp-68h]
  unsigned __int64 v55; // [rsp+A0h] [rbp-60h]
  _DWORD *v56; // [rsp+A8h] [rbp-58h]
  _QWORD v57[24]; // [rsp+B0h] [rbp-50h] BYREF

  v53 = a10;
  v51 = a3;
  v14 = a4;
  v54 = a11;
  v43 = a4;
  v56 = a9;
  memset(v57, 0, 0xB8uLL);
  v15 = *(_DWORD *)(a3 + 64);
  if ( (v15 & 1) == 0 )
  {
    v16 = *(_QWORD *)(a3 + 72);
    v17 = a5 - v14 + 1;
    v48 = v17;
    if ( *(_BYTE *)(v16 + 76) && (a8 & 0x20000000) != 0 )
    {
      *a9 = 4;
      result = 0LL;
    }
    else
    {
      result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v43, (unsigned int)&v48, a6, (__int64)a9);
      if ( (int)result < 0 )
        return result;
      v17 = v48;
      v14 = v43;
    }
    *v53 = v14;
    *v54 = v17;
    return result;
  }
  LOBYTE(v19) = 0;
  v20 = a8 & 0x20000000;
  if ( (a8 & 0x20000000) != 0 )
  {
    if ( (a8 & 0x90000000) != 0 )
      return 3221225541LL;
  }
  else
  {
    if ( (v15 & 2) == 0 || (*(_DWORD *)(a3 + 72) & 1) == 0 )
      return 3221225496LL;
    if ( a8 < 0 )
    {
      if ( a8 == 0x80000000 && !a6 )
      {
        LOBYTE(v19) = 8;
LABEL_15:
        v21 = a7;
        goto LABEL_30;
      }
      return 3221225541LL;
    }
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( a8 == 0x10000000 && !a6 )
      {
        LOBYTE(v19) = 0x80;
        goto LABEL_15;
      }
      return 3221225541LL;
    }
  }
  v21 = a7;
  if ( a7 <= 7 )
  {
    if ( (a7 & 5) == 5 )
      return 3221225541LL;
    v19 = (a7 & 4 | 2) >> 1;
    if ( (a7 & 2) != 0 )
      LOBYTE(v19) = v19 | 4;
  }
  else if ( a7 != 24 || v20 )
  {
    return 3221225541LL;
  }
LABEL_30:
  v22 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = v22;
  v23 = 0LL;
  v48 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = 0xFFFFFFFFLL;
  v24 = 0;
  v50 = 0LL;
  v41 = -1LL;
  v44 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  if ( !v20 )
  {
    v21 = v21 & 2 | 4;
    a7 = v21;
  }
  LODWORD(v57[0]) = 1;
  WORD2(v57[0]) = 0;
  LODWORD(v57[1]) = 20;
  v57[2] = 0LL;
  v57[3] = 0LL;
  v45 = v20 != 0 ? 2 : 4;
  ValidPte = MiMakeValidPte(v22, -1LL, v21 | 0x80000000);
  v26 = MiLockWorkingSetShared((__int64)v44);
  v27 = 0;
  v28 = v45;
  v29 = v43 & 0xFFFFFFFFFFFFF000uLL;
  v40 = v26;
  v30 = v48;
  v52 = v43 & 0xFFFFFFFFFFFFF000uLL;
  v46 = 0;
  while ( 2 )
  {
    v43 = v29;
    v31 = v22;
    BugCheckParameter1 = v22;
    if ( v22 > v30 )
      goto LABEL_74;
    do
    {
      if ( (v31 & 0x78) != 0 || v31 == v22 )
      {
        if ( v23 )
          goto LABEL_46;
      }
      else
      {
        if ( MiWorkingSetIsContended((__int64)v44) || KeShouldYieldProcessor() )
          goto LABEL_40;
        if ( v23 )
        {
          if ( !(unsigned int)MiPageTableLockIsContended((__int64)v44, v23) )
          {
            v31 = BugCheckParameter1;
LABEL_46:
            if ( (v31 & 0xFFF) != 0 )
              goto LABEL_50;
            goto LABEL_47;
          }
LABEL_40:
          MiFlushEnclaveTb((int *)v57, v41, a8);
          v41 = -1LL;
          if ( v23 )
          {
            MiUnlockPageTableInternal((__int64)v44, v23);
            v23 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)v44, v40);
          MiLockWorkingSetShared((__int64)v44);
        }
      }
LABEL_47:
      MiFlushEnclaveTb((int *)v57, v41, a8);
      v41 = -1LL;
      if ( v23 )
        MiUnlockPageTableInternal((__int64)v44, v23);
      v23 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v50 = v23;
      MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(v51 + 48) >> 12) & 0x7F, v40, 0);
      v31 = BugCheckParameter1;
LABEL_50:
      if ( !v46 )
      {
        v49 = MI_READ_PTE_LOCK_FREE(v31);
        if ( (v49 & 1) == 0 )
          goto LABEL_61;
        v32 = BugCheckParameter1;
        if ( BugCheckParameter1 == v22 )
        {
          v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v49);
          v32 = BugCheckParameter1;
          v34 = (*(_DWORD *)(48 * ((v33 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
          v47 = v34;
LABEL_70:
          v38 = v41;
          goto LABEL_71;
        }
LABEL_69:
        v34 = v47;
        goto LABEL_70;
      }
      if ( v46 != v45 - 1 )
      {
        if ( v46 == 1 )
        {
          v24 = KeCanChangeEnclavePageProtection();
          if ( v24 < 0 )
          {
LABEL_61:
            v24 = -1073741800;
            goto LABEL_62;
          }
        }
        else
        {
          KeChangeEnclavePageProtection(v43, v19);
          KeTrackEnclaveTbFlush();
        }
        v32 = BugCheckParameter1;
        goto LABEL_69;
      }
      v49 = MI_READ_PTE_LOCK_FREE(v31);
      v35 = v49;
      v36 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v49) >> 12) & 0xFFFFFFFFFFLL;
      MiUpdateEnclavePfnProtection(48 * v36 - 0x220000000000LL, a7);
      ValidPte = (v36 << 12) | ValidPte & 0xFFF0000000000FFFuLL;
      MiWriteEnclavePte(BugCheckParameter1, 0);
      if ( (MiFlags & 0x300) == 0 || (LOBYTE(v37) = MI_TIGHTER_PERMISSIONS(v35, ValidPte), v37) )
        MiInsertTbFlushEntry((__int64)v57, v43, 1LL, 0);
      v38 = v43;
      v22 = v55;
      v32 = BugCheckParameter1;
      v34 = v47;
      v41 = v43;
LABEL_71:
      v43 += 4096LL;
      v31 = v32 + 8;
      v23 = v50;
      BugCheckParameter1 = v31;
    }
    while ( v31 <= v48 );
    v47 = v34;
    v41 = v38;
    v30 = v48;
    v27 = v46;
    v28 = v45;
LABEL_74:
    v46 = ++v27;
    if ( v27 < v28 )
    {
      v29 = v52;
      continue;
    }
    break;
  }
LABEL_62:
  MiFlushEnclaveTb((int *)v57, v41, a8);
  if ( v23 )
    MiUnlockPageTableInternal((__int64)v44, v23);
  MiUnlockWorkingSetShared((__int64)v44, v40);
  if ( v24 >= 0 )
  {
    *v56 = MmProtectToValue[(unsigned int)v47];
    v39 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v52 + 4096;
    *v53 = v52;
    v24 = 0;
    *v54 = v39;
  }
  return (unsigned int)v24;
}
