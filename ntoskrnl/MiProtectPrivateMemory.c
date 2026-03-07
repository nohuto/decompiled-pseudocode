__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        int *a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // r13
  ULONG_PTR v11; // r14
  unsigned int v12; // edi
  unsigned __int64 v13; // r12
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int8 v19; // cl
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rsi
  int PageProtection; // eax
  ULONG_PTR v23; // rdi
  int v24; // ecx
  int v25; // r8d
  int v26; // eax
  unsigned __int64 v27; // r15
  ULONG_PTR v28; // rax
  ULONG_PTR v29; // rdi
  unsigned __int64 v30; // r15
  __int64 v31; // rcx
  int updated; // eax
  __int64 v33; // rax
  __int64 result; // rax
  ULONG_PTR v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 UsedPtesHandle; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  int ProtoPrivate; // eax
  __int64 v42; // rax
  unsigned __int8 v43; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v46; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  __int16 v49; // [rsp+68h] [rbp-98h] BYREF
  int v50; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v51; // [rsp+70h] [rbp-90h]
  unsigned __int64 v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v58; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h]
  _KPROCESS *Process; // [rsp+B8h] [rbp-48h]
  _DWORD *v61; // [rsp+C0h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v63; // [rsp+D4h] [rbp-2Ch]
  __int16 v64; // [rsp+D6h] [rbp-2Ah]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  __int64 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  _BYTE v68[152]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = 0LL;
  v61 = a8;
  v64 = 0;
  v58 = 0LL;
  v49 = 0;
  v50 = 0;
  memset(v68, 0, sizeof(v68));
  v65 = 20LL;
  v62 = 1;
  v63 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v55 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v48 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 3;
  v13 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = 0;
  v53 = 1LL;
  v46 = 0LL;
  v14 = *(_DWORD *)(a1 + 48);
  v52 = 0LL;
  if ( (v14 & 0xA00000) == 0xA00000 )
  {
    v15 = (v14 >> 19) & 3;
    v16 = MiVadPageSizes[v15];
    v12 = MiVadPageIndices[v15];
    v17 = 16LL;
    v54 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v53 = v17;
    v51 = (v14 & 0x2200000) == 35651584;
  }
  else
  {
    v54 = 1LL;
  }
  v45 = 0;
  v59 = (v14 >> 12) & 0x7F;
  v43 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  if ( MiComputePageCommitment(a2, a3, a1, v43, 0, (__int64)&v55, 0LL) != ((__int64)(v13 - v11) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v48, v43);
    return 3221225517LL;
  }
  v18 = v55;
  v57 = v55;
  if ( v55 )
  {
    MiUnlockWorkingSetShared(v48, v43);
    result = MiChargeFullProcessCommitment(Process, v18);
    if ( (int)result < 0 )
      return result;
    v19 = MiLockWorkingSetShared(v48);
    v43 = v19;
  }
  else
  {
    v19 = v43;
  }
  v20 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v12 <= 1 )
  {
    v39 = 2 - v12;
    do
    {
      v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v39;
    }
    while ( v39 );
    v19 = v43;
  }
  v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v20, 0LL, v59, v19, 0);
    if ( !MI_READ_PTE_LOCK_FREE(v20) )
      break;
    PageProtection = MiGetPageProtection(a1, v20, (__int64 **)&v58, &v50, &v49);
    v23 = v58;
    if ( !v58 )
    {
      v24 = 1;
      v45 = 1;
      v25 = MmProtectToValue[PageProtection];
      v26 = v50;
      goto LABEL_13;
    }
    MiUnlockPageTableInternal(v48, v21);
    MiUnlockWorkingSetShared(v48, v43);
    MiFaultInPagedPool(v23);
    MiLockWorkingSetShared(v48);
    v19 = v43;
  }
  v26 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1);
  v50 = v26;
  v24 = 0;
LABEL_13:
  for ( *a7 = v26 | v25; v20 <= v13; v24 = v45 )
  {
    if ( (v20 & 0xFFF) == 0 || v24 )
    {
      v45 = 0;
      if ( v21 )
        MiFlushTbList(&v62);
      if ( v8 )
      {
        MiFlushGraphicsPtes(v8, ((__int64)(v52 - v8) >> 3) + 1);
        v8 = 0LL;
        v46 = 0LL;
      }
      if ( v21 )
        MiUnlockPageTableInternal(v48, v21);
      if ( (unsigned int)MiWorkingSetIsContended(v48) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v48, v43);
        MiLockWorkingSetShared(v48);
      }
      v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v20, (__int64)&v62, v59, v43, 0);
    }
    v27 = v8;
    v28 = MI_READ_PTE_LOCK_FREE(v20);
    v56 = v28;
    v29 = v28;
    if ( (v28 & 1) != 0 )
    {
      v30 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v56) >> 12) & 0xFFFFFFFFFFLL;
      v31 = a1;
      if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 )
      {
        if ( (unsigned int)MiRotatedToFrameBuffer(v20) )
        {
          updated = a4;
          goto LABEL_21;
        }
        v31 = a1;
      }
      if ( *(__int64 *)(48 * v30 - 0x220000000000LL + 40) < 0 )
      {
        MiFlushTbList(&v62);
        v8 = v46;
        if ( v46 )
        {
          MiFlushGraphicsPtes(v46, ((__int64)(v52 - v46) >> 3) + 1);
          v8 = 0LL;
          v46 = 0LL;
        }
        ProtoPrivate = MiMakeProtoPrivate(v48, v43, v20);
        if ( ProtoPrivate )
        {
          if ( ProtoPrivate == 1 )
          {
            v55 = --v57;
          }
          else
          {
            v21 = 0LL;
            v45 = 1;
            MiLockWorkingSetShared(v48);
          }
        }
        continue;
      }
      if ( (a5 & 0x101) == 0 )
      {
        updated = MiUpdatePfnProtection(v31, 48 * v30 - 0x220000000000LL, a4);
        a4 = updated;
LABEL_21:
        MiRevertValidPte(a1, v20, updated, v30, (__int64)&v62);
LABEL_22:
        v33 = 8 * v53;
        if ( v51 )
        {
          v52 = v20 + v33 - 8;
          v40 = v20;
          if ( v8 )
            v40 = v8;
          v46 = v40;
        }
        v20 += v33;
        v11 += 8 * v54;
        goto LABEL_24;
      }
      if ( (unsigned int)MiMakeVaRangeNoAccess(v31, v20, v13, (__int64)&v62, v61) )
        goto LABEL_22;
    }
    else
    {
      if ( (v28 & 0x400) != 0 )
      {
        MiFlushTbList(&v62);
        v8 = v46;
        if ( v46 )
        {
          MiFlushGraphicsPtes(v46, ((__int64)(v52 - v46) >> 3) + 1);
          v8 = 0LL;
          v46 = 0LL;
        }
        if ( (int)MiMakeProtoLeafValid(v20, 1LL, v43) < 0 )
        {
          v11 += 8LL;
          v20 += 8LL;
        }
        v45 = 1;
        continue;
      }
      if ( (v28 & 0x800) != 0 )
      {
        v37 = MiSetProtectionOnTransitionPte(a1, (unsigned __int64 *)v20, a4, 1);
        if ( v54 != 1 )
        {
          v42 = 8 * v53;
          if ( v51 )
          {
            v8 = v20;
            v52 = v20 + v42 - 8;
            if ( v27 )
              v8 = v27;
            v46 = v8;
          }
          else
          {
            v8 = v46;
          }
          v11 += 8 * v54;
          v20 += v42;
          continue;
        }
        if ( v37 )
          goto LABEL_24;
      }
      else
      {
        if ( v54 != 1 )
          KeBugCheckEx(0x1Au, 0x44000uLL, v11, v28, 0LL);
        if ( v28 )
        {
          v35 = v28 >> 5;
        }
        else
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
          LODWORD(v35) = *(_DWORD *)(a1 + 48) >> 7;
        }
        a4 = MiSanitizePfnProtection(a1, v35 & 0x1F, a4);
        v36 = 32LL * (a4 & 0x1F);
        if ( !v29 )
        {
          v56 = MiSwizzleInvalidPte(v36);
          *(_QWORD *)v11 = v56;
          v11 += 8LL;
          v20 += 8LL;
          goto LABEL_24;
        }
        v56 = v36 | v29 & 0xFFFFFFFFFFFFFC1FuLL;
        *(_QWORD *)v11 = v56;
      }
      v11 += 8LL;
      v20 += 8LL;
    }
LABEL_24:
    v8 = v46;
  }
  MiFlushTbList(&v62);
  if ( v8 )
    MiFlushGraphicsPtes(v8, ((__int64)(v52 - v8) >> 3) + 1);
  if ( v21 )
    MiUnlockPageTableInternal(v48, v21);
  MiUnlockWorkingSetShared(v48, v43);
  if ( v57 )
    MiReturnFullProcessCommitment(Process, v57);
  return 0LL;
}
