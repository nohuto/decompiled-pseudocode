/*
 * XREFs of MmProtectVirtualMemory @ 0x1407C77B0
 * Callers:
 *     KiTpWriteUmMemory @ 0x14057CC10 (KiTpWriteUmMemory.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1407C7210 (NtProtectVirtualMemory.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiGetVadPageSize @ 0x14031F9B4 (MiGetVadPageSize.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiVadMapsLargeImage @ 0x140327280 (MiVadMapsLargeImage.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiAllowProtectionChange @ 0x140367C88 (MiAllowProtectionChange.c)
 *     xHalUnmaskInterrupt @ 0x14036D7F0 (xHalUnmaskInterrupt.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiCheckSecuredVad @ 0x1406A0F38 (MiCheckSecuredVad.c)
 *     MiIsRangeFullyCommitted @ 0x1407C4160 (MiIsRangeFullyCommitted.c)
 *     MiCommitVadMetadataBits @ 0x1407D2944 (MiCommitVadMetadataBits.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v7; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r14d
  char v10; // dl
  unsigned __int64 v11; // r8
  __int64 v12; // r11
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  int ProtectionMask; // ecx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r15
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rdi
  char v20; // r9
  unsigned int v21; // r13d
  unsigned int v22; // edx
  int v23; // r8d
  unsigned int v24; // ecx
  int v25; // ecx
  int v26; // r14d
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rcx
  int v29; // ecx
  void *v30; // rcx
  int v31; // r13d
  __int64 result; // rax
  unsigned int v33; // ebx
  int v34; // ecx
  __int16 v35; // ax
  unsigned __int64 v36; // rcx
  __int64 VadPageSize; // rax
  int v38; // ebx
  int v39; // edx
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rcx
  char v42; // [rsp+60h] [rbp-C8h]
  int v43; // [rsp+64h] [rbp-C4h]
  unsigned int v44; // [rsp+68h] [rbp-C0h]
  int v45; // [rsp+6Ch] [rbp-BCh]
  int v46; // [rsp+70h] [rbp-B8h] BYREF
  int v47; // [rsp+74h] [rbp-B4h] BYREF
  int v48; // [rsp+78h] [rbp-B0h] BYREF
  _QWORD *v49; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+88h] [rbp-A0h]
  int v51; // [rsp+90h] [rbp-98h]
  int v52; // [rsp+94h] [rbp-94h]
  PVOID P; // [rsp+98h] [rbp-90h]
  unsigned __int64 v54; // [rsp+A0h] [rbp-88h]
  unsigned int v55; // [rsp+ACh] [rbp-7Ch]
  __int64 v56; // [rsp+B0h] [rbp-78h]
  _QWORD *Teb; // [rsp+B8h] [rbp-70h]
  ULONG_PTR v58; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v59; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v60; // [rsp+D0h] [rbp-58h]
  _QWORD v61[10]; // [rsp+D8h] [rbp-50h] BYREF
  char v66[8]; // [rsp+150h] [rbp+28h]

  v7 = a2;
  v8 = a5;
  v9 = 0;
  v47 = 0;
  v46 = 0;
  *a6 = 1;
  v48 = 0;
  v10 = 0;
  v43 = 0;
  v42 = 1;
  v11 = *a3;
  v54 = v11;
  v61[0] = v11;
  v12 = *a4;
  v56 = v12;
  v58 = v12;
  v45 = a5 & 0x7F800;
  if ( (a5 & 0x7F800) != 0 )
  {
    result = xHalUnmaskInterrupt();
    v47 = result;
    if ( (int)result < 0 )
      return result;
  }
  v52 = a5 >> 31;
  LODWORD(P) = a5 >> 31;
  v13 = a5 & 0xB0000000;
  v55 = a5 & 0xB0000000;
  v14 = a5 & 0x4FF807FF;
  if ( (a5 & 0x40000000) != 0 )
  {
    if ( (v8 & 0xF0) == 0 )
      return 3221225714LL;
    v42 = v10;
    v14 = v8 & 0xFF807FF;
  }
  if ( v14 )
  {
    ProtectionMask = MiMakeProtectionMask(v14);
    v44 = ProtectionMask;
    v51 = ProtectionMask;
    if ( ProtectionMask != -1 )
      goto LABEL_5;
    return 3221225541LL;
  }
  if ( v13 != 0x80000000 && v13 != 0x10000000 )
    return 3221225541LL;
  ProtectionMask = 24;
  v44 = 24;
  v51 = 24;
LABEL_5:
  v16 = (v12 + v11 - 1) | 0xFFF;
  v60 = v16;
  v17 = v11 & 0xFFFFFFFFFFFFF000uLL;
  v59 = v11 & 0xFFFFFFFFFFFFF000uLL;
  Teb = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1
      || *(_QWORD *)(v7 + 1408) && ((v35 = *(_WORD *)(v7 + 2412), v35 == 332) || v35 == 452) )
    {
      v36 = v50;
    }
    else
    {
      Teb = KeGetCurrentThread()->Teb;
      v49 = Teb;
      v36 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
      v50 = v36;
    }
    v49 = (_QWORD *)v36;
  }
  P = 0LL;
  v18 = MiObtainReferencedVadEx(v17, 0, &v47);
  v19 = v18;
  v58 = v18;
  if ( !v18 )
  {
    v31 = v47;
    if ( v47 != -1073741664 )
      goto LABEL_118;
    goto LABEL_76;
  }
  P = (PVOID)v18;
  if ( v16 >> 12 > (*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) )
  {
    v31 = -1073741800;
    goto LABEL_118;
  }
  if ( (*(_DWORD *)(v18 + 48) & 0x2200000) == 0x2200000 )
  {
    if ( !v45 )
    {
      v31 = -1073741755;
      goto LABEL_118;
    }
  }
  else if ( v45 )
  {
    v31 = -1073741755;
    goto LABEL_118;
  }
  v20 = 0;
  v66[0] = 0;
  v21 = v44;
  if ( (v44 & 2) != 0 )
  {
    v31 = MiAllowProtectionChange(a2, a1, v18, v44, v17, v16);
    if ( v31 < 0 )
      goto LABEL_118;
    v34 = *(_DWORD *)(v19 + 48);
    if ( (v34 & 0x100) == 0 && v42 )
    {
      LOBYTE(v9) = *(_QWORD *)(*(_QWORD *)(a2 + 1680) + 432LL) != 0LL;
      if ( !(unsigned int)PdcCreateWatchdogAroundClientCall() )
      {
LABEL_49:
        if ( v9 )
        {
          if ( (v34 & 8) != 0 )
          {
            v31 = MiCheckSecuredVad(v19, v54, v56, v44, KeGetCurrentThread()->PreviousMode);
            if ( v31 < 0 )
              goto LABEL_118;
            v66[0] = 1;
            v49 = (_QWORD *)v50;
          }
          v61[0] = v17;
          v61[1] = v16;
          v31 = MiCommitVadMetadataBits(v19, v61, v9);
          if ( v31 < 0 )
            goto LABEL_118;
          v20 = v66[0];
          v21 = v44;
        }
        else
        {
          v20 = 0;
          v21 = v44;
        }
        goto LABEL_11;
      }
      v43 = v9 | 4;
    }
    v9 = v43;
    goto LABEL_49;
  }
LABEL_11:
  v22 = *(_DWORD *)(v19 + 48);
  v23 = v22 & 0x200000;
  if ( (v22 & 0x200000) != 0 && ((v22 & 0x800000) != 0 || (v22 & 0x180000) >= 0x100000)
    || (v24 = v22 >> 4, ((v22 >> 4) & 7) == 5) )
  {
    if ( (v22 & 0xA00000) == 0xA00000 )
    {
      VadPageSize = MiGetVadPageSize(v19);
      if ( ((v54 | (v16 + 1)) & ((VadPageSize << 12) - 1)) != 0 )
      {
        v31 = -1073741800;
        goto LABEL_118;
      }
      v24 = v22 >> 4;
      goto LABEL_13;
    }
    if ( v21 == ((v22 >> 7) & 0x1F) )
    {
      MiUnlockAndDereferenceVad((PVOID)v19);
      goto LABEL_90;
    }
LABEL_76:
    v31 = -1073741800;
    goto LABEL_118;
  }
LABEL_13:
  if ( (v22 & 0x6200000) == 0x4200000 )
  {
    v33 = MiProtectEnclavePages(a2, a1, v19, v17, v16, v14, v21, v13, a6, a3, a4);
    MiUnlockAndDereferenceVad((PVOID)v19);
    return v33;
  }
  if ( (v13 & 0x5FFFFFFF) != 0 )
  {
    v31 = -1073741755;
    goto LABEL_118;
  }
  if ( !v14 )
  {
    v31 = -1073741755;
    goto LABEL_118;
  }
  v25 = v24 & 7;
  if ( v25 == 3 )
  {
    v38 = MiProtectAweRegion(v17, v16, v21, v45, &v46);
    if ( v38 >= 0 )
    {
      MiUnlockAndDereferenceVad((PVOID)v19);
      *a4 = v16 - v17 + 1;
      *a3 = v17;
      *a6 = v46;
      return (unsigned int)v38;
    }
    v31 = -1073741800;
    goto LABEL_118;
  }
  if ( v25 == 1 )
  {
    v31 = -1073741800;
    goto LABEL_118;
  }
  v26 = v52;
  if ( v52 && (v23 || (*(_DWORD *)(**(_QWORD **)(v19 + 72) + 56LL) & 0x20) != 0) )
    goto LABEL_117;
  if ( (v22 & 8) == 0 || v20 )
  {
    v27 = (unsigned __int64)v49;
  }
  else
  {
    v31 = MiCheckSecuredVad(v19, v54, v56, v21, KeGetCurrentThread()->PreviousMode);
    if ( v31 < 0 )
      goto LABEL_118;
    v27 = v50;
    v21 = v44;
  }
  v28 = *(unsigned int *)(v19 + 48);
  if ( (v28 & 0x200000) == 0 )
  {
    if ( (v14 & 0x600) == 0 )
    {
      if ( (v28 & 0x70) == 0x20 )
      {
        if ( (v14 & 4) != 0 )
          v14 = v14 & 0xFFFFFFF3 | 8;
        if ( (v14 & 0x40) != 0 )
          v14 = v14 & 0xFFFFFF3F | 0x80;
      }
      v29 = MmCompatibleProtectionMask[(v28 >> 7) & 7] | 0x700;
      if ( (v14 | v29) != v29 )
      {
        v31 = -1073741746;
        goto LABEL_118;
      }
      if ( (*(_DWORD *)(**(_QWORD **)(v19 + 72) + 56LL) & 0xA0) == 0x80 )
        goto LABEL_32;
      if ( !(unsigned int)MiVadMapsLargeImage(v19) )
      {
        if ( !(unsigned int)MiIsRangeFullyCommitted((__int64)v30, v17, v16) )
        {
          v31 = -1073741779;
          goto LABEL_118;
        }
LABEL_32:
        v31 = MiSetProtectionOnSection(a2, v19, v17, v16, v14, v26, &v46, (__int64)&v48);
        if ( v31 >= 0 )
        {
LABEL_33:
          MiUnlockAndDereferenceVad((PVOID)v19);
          *a4 = v16 - v17 + 1;
          *a3 = v17;
          *a6 = v46;
          return v48 != 0 ? 0x40000017 : 0;
        }
        goto LABEL_118;
      }
      if ( v14 != 128 && v14 != 8 )
      {
        v31 = -1073741746;
        goto LABEL_118;
      }
      MiUnlockAndDereferenceVad(v30);
LABEL_90:
      *a4 = v16 - v17 + 1;
      *a3 = v17;
      *a6 = MmProtectToValue[v21];
      return 0LL;
    }
LABEL_117:
    v31 = -1073741582;
    goto LABEL_118;
  }
  if ( (v14 & 0x88) != 0 || v26 )
    goto LABEL_117;
  if ( (v28 & 0x70) == 0x40 )
  {
    if ( (v14 & 0xFFFFF9F9) != 0 )
    {
      v31 = -1073741755;
      goto LABEL_118;
    }
    v14 &= 0x7FFFF9FFu;
    v39 = *(_DWORD *)(v19 + 48) & 0xC00;
    if ( (*(_DWORD *)(v19 + 48) & 0x380) != 0 && v39 == 3072 )
    {
      v14 |= 0x400u;
    }
    else if ( v39 == 1024 )
    {
      v14 |= 0x200u;
    }
    v21 = MiMakeProtectionMask(v14);
  }
  v31 = MiProtectPrivateMemory(v19, v17, v16, v21, v14, v45, &v46, &v48);
  if ( v31 >= 0 )
  {
    if ( v27 )
    {
      if ( v27 < v16 )
      {
        v40 = v27 >> 12;
        if ( v40 >= (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) )
        {
          v41 = *(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32);
          if ( v40 <= v41 && (v16 + 1) >> 12 <= v41 )
            Teb[2] = v16 + 1;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_118:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  return (unsigned int)v31;
}
