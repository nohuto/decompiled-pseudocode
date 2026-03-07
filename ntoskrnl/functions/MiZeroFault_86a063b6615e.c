__int64 __fastcall MiZeroFault(__int64 a1, _BYTE *a2, int *a3, __int64 *a4)
{
  unsigned int v4; // ebx
  _BYTE *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // r10
  ULONG_PTR v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rax
  _KPROCESS *v17; // rcx
  _DWORD *v18; // r8
  _KPROCESS *v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  int v23; // ecx
  __int64 ProtoPteAddress; // r14
  int v25; // edi
  _QWORD *v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 LockedVadEvent; // rcx
  __int64 v33; // rcx
  signed __int32 v34; // [rsp+30h] [rbp-69h]
  signed __int32 v35; // [rsp+34h] [rbp-65h]
  signed __int32 v36; // [rsp+34h] [rbp-65h]
  _QWORD v37[2]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v38; // [rsp+50h] [rbp-49h]
  __int128 v39; // [rsp+60h] [rbp-39h]
  __int64 v40; // [rsp+70h] [rbp-29h]
  unsigned __int64 v41; // [rsp+78h] [rbp-21h]
  __int64 v42; // [rsp+80h] [rbp-19h]
  __int64 v43; // [rsp+88h] [rbp-11h]
  unsigned __int64 v44; // [rsp+90h] [rbp-9h]
  __int64 v45; // [rsp+98h] [rbp-1h] BYREF
  _QWORD *v46; // [rsp+A0h] [rbp+7h]
  _KPROCESS *Process; // [rsp+A8h] [rbp+Fh]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = 0;
  *a2 = 1;
  v37[0] = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v5 = a2;
  v40 = 0LL;
  v6 = a1;
  v42 = 0LL;
  v7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *(_QWORD *)(a1 + 56);
  v43 = 0LL;
  if ( (*(_BYTE *)(v8 + 184) & 7) == 0 )
  {
    v7 = 64LL;
    LODWORD(v37[0]) = 64;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v9 & 1) != 0 )
  {
    switch ( *(_BYTE *)v10 )
    {
      case 2:
        v7 = (unsigned int)v7 | 1;
        LODWORD(v37[0]) = v7;
        break;
      case 1:
        v7 = (unsigned int)v7 | 2;
        LODWORD(v37[0]) = v7;
        break;
      case 5:
        v7 = (unsigned int)v7 | 8;
        LODWORD(v37[0]) = v7;
        break;
    }
    if ( *(_BYTE *)v10 == 4 )
      goto LABEL_66;
  }
  if ( (v7 & 0xB) != 0 )
  {
LABEL_66:
    v44 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    v11 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v9 & 1) != 0 && *(_BYTE *)v10 == 4 )
      v43 = *(_QWORD *)(v10 + 48);
    if ( (v7 & 2) != 0 && (*(_DWORD *)(v10 + 80) & 0x4000) != 0 )
    {
      v7 = (unsigned int)v7 | 4;
      LODWORD(v37[0]) = v7;
    }
    if ( (v7 & 8) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) > 0x1000uLL )
      {
        v7 = (unsigned int)v7 | 0x10;
        LODWORD(v37[0]) = v7;
      }
      if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
      {
        LODWORD(v7) = v7 | 0x10000;
        LODWORD(v37[0]) = v7;
      }
    }
  }
  else
  {
    v11 = 0LL;
    v44 = 0LL;
  }
  v12 = *(_QWORD *)v6;
  v13 = *(_QWORD *)v6;
  v41 = v11;
  v37[1] = v6;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v46 = (_QWORD *)v14;
  if ( v12 >= 0xFFFF800000000000uLL )
  {
    if ( (v7 & 2) != 0 )
      return 0LL;
    if ( v12 >= 0xFFFFF68000000000uLL
      && v12 <= 0xFFFFF6FFFFFFFFFFuLL
      && v9
      && ((v9 & 1) == 0 || *(_BYTE *)v10 != 7 && *(_BYTE *)v10 != 8) )
    {
      KeBugCheckEx(0x50u, v12, *(_QWORD *)(v6 + 8), v14, 6uLL);
    }
  }
  v15 = 0LL;
  if ( v12 > 0x7FFFFFFEFFFFLL )
  {
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v25 = 4;
      ProtoPteAddress = 0LL;
      goto LABEL_35;
    }
    goto LABEL_96;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v16 = v12 & 0x7FFFFFFFF000LL;
    if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      ProtoPteAddress = qword_140C656A8;
      v25 = 1;
      v7 = LODWORD(v37[0]);
      goto LABEL_35;
    }
    if ( v16 == qword_140C656B8 && v16 )
    {
      ProtoPteAddress = qword_140C656B0;
      v25 = 1;
      v7 = LODWORD(v37[0]);
      goto LABEL_35;
    }
  }
  v17 = KeGetCurrentThread()->ApcState.Process;
  v18 = (_DWORD *)(v17[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v7) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v17[1].ActiveProcessors.StaticBitmap[28] + 284, v7);
  }
  else
  {
    _m_prefetchw(v18);
    v35 = *v18 & 0x7FFFFFFF;
    v34 = _InterlockedCompareExchange(v18, v35 + 1, v35);
    if ( v34 != v35 )
    {
      while ( v34 >= 0 )
      {
        v36 = v34;
        v34 = _InterlockedCompareExchange(v18, v34 + 1, v34);
        if ( v34 == v36 )
          goto LABEL_13;
      }
      LOBYTE(v7) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v18, v7);
    }
  }
LABEL_13:
  v19 = KeGetCurrentThread()->ApcState.Process;
  v20 = *(_QWORD *)&v19[1].Spare2[23];
  if ( !v20 )
    goto LABEL_103;
  v21 = v12 >> 12;
  if ( v12 >> 12 >= (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
    && v21 <= (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
  {
    goto LABEL_16;
  }
  v20 = *(_QWORD *)&v19[1].Spare2[15];
  if ( !v20 )
    goto LABEL_103;
  do
  {
    if ( v21 > (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
    {
      v20 = *(_QWORD *)(v20 + 8);
    }
    else
    {
      if ( v21 >= (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) )
        break;
      v20 = *(_QWORD *)v20;
    }
  }
  while ( v20 );
  if ( !v20 )
  {
LABEL_103:
    LOBYTE(v20) = 17;
    MiUnlockVadTree(1LL, v20);
    goto LABEL_96;
  }
  *(_QWORD *)&v19[1].Spare2[23] = v20;
LABEL_16:
  v15 = v20;
  v45 = 0LL;
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) != 0 )
    goto LABEL_49;
  v22 = v12 & 0x7FFFFFFFF000LL;
  if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
  {
    ProtoPteAddress = qword_140C656A8;
    v25 = 1;
    goto LABEL_30;
  }
  if ( v22 != qword_140C656B8 || !v22 )
  {
LABEL_49:
    if ( (*(_DWORD *)(v20 + 48) & 0x70) == 0x20 && (*(_DWORD *)(v20 + 64) & 0x10000000) != 0 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(v20, 32);
      if ( LockedVadEvent )
      {
        if ( *(struct _KTHREAD **)(LockedVadEvent + 8) != KeGetCurrentThread() )
          goto LABEL_120;
      }
    }
    v23 = *(_DWORD *)(v15 + 48);
    if ( (v23 & 4) != 0 )
    {
      v25 = 24;
      ProtoPteAddress = 0LL;
      goto LABEL_29;
    }
    if ( (v23 & 0x200000) == 0 )
    {
      if ( (*(_DWORD *)(v15 + 64) & 0x1000000) == 0 || (*(_BYTE *)(v15 + 48) & 0x70) == 0x50 )
      {
        ProtoPteAddress = MiGetProtoPteAddress(v15, v12 >> 12, 4LL, &v45);
        if ( ProtoPteAddress )
        {
          v25 = (*(_DWORD *)(v15 + 48) >> 7) & 0x1F;
          if ( (*(_DWORD *)(v15 + 48) & 0x70) == 0x20 && v25 == 7 )
            v25 = 256;
        }
        else
        {
          v25 = 24;
        }
        v26 = *(_QWORD **)(v15 + 120);
        if ( (__int64)v26 < 0
          && v21 - (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) > (unsigned __int64)(*v26 - 1LL) >> 12 )
        {
          v25 = 24;
        }
      }
      else
      {
        v25 = 24;
        ProtoPteAddress = 0LL;
      }
      goto LABEL_29;
    }
    if ( (v23 & 0x70) == 0x10
      || (v23 & 0x70) == 0x30
      || (v23 & 0x800000) != 0
      || (v23 & 0x180000u) >= 0x100000
      || (v23 & 0x70) == 0x20 && (*(_DWORD *)(v15 + 64) & 0x1000000) != 0
      || *(int *)(v15 + 52) >= 0 )
    {
LABEL_120:
      v25 = 24;
    }
    else
    {
      v25 = (*(_DWORD *)(v15 + 48) >> 7) & 0x1F;
    }
    ProtoPteAddress = 0LL;
LABEL_29:
    v6 = a1;
    goto LABEL_30;
  }
  ProtoPteAddress = qword_140C656B0;
  v25 = 1;
LABEL_30:
  v27 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v27 + 284, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v27 + 284), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v27 + 284));
  }
  if ( v25 == 24 )
  {
    v11 = v44;
LABEL_96:
    MiCheckFatalAccessViolation(v12);
    if ( (v37[0] & 2) != 0 && v15 )
      MiPrefetchJumpVad(v11, v15, v12);
    return 3221225477LL;
  }
  if ( (v25 & 0xFFFFFFF8) == 0x10 )
  {
    if ( (v37[0] & 2) != 0 )
      return 0LL;
    if ( (unsigned int)MiAllowGuardFault(*(_QWORD *)(v6 + 16)) )
    {
      MiUpdatePageTableUseCount(v12, 1LL);
      v33 = v25 & 0xF;
      if ( ProtoPteAddress )
        v33 |= 0xFFFFFFFFF8000020uLL;
      *v46 = MiSwizzleInvalidPte(32 * v33);
      *a2 = 2;
      return 0LL;
    }
    return 3221225477LL;
  }
  v7 = LODWORD(v37[0]);
  v5 = a2;
LABEL_35:
  v28 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)&v38 = v12;
  v29 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
  LODWORD(v39) = v25;
  if ( (v28 & 1) != 0 && (*(_BYTE *)v29 == 7 || *(_BYTE *)v29 == 2 || *(_BYTE *)v29 == 8 || *(_BYTE *)v29 == 4) )
    v30 = *(_DWORD *)(v29 + 40);
  else
    v30 = 0;
  LODWORD(v40) = v30;
  *((_QWORD *)&v38 + 1) = ProtoPteAddress;
  v42 = v15;
  DWORD1(v39) = 0;
  if ( !ProtoPteAddress )
    return MiResolvePrivateZeroFault(v37, v7);
  if ( (v7 & 2) == 0 )
  {
    if ( v15 )
    {
      if ( *(__int64 *)(v15 + 120) >= 0 )
      {
        v4 = MiCheckVadSequential(v37);
        if ( v4 == -1073741280 )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)(v15 + 36)) )
            __fastfail(0xEu);
          *(_DWORD *)(v6 + 80) |= 1u;
          *(_QWORD *)(v6 + 88) = v15;
        }
      }
    }
  }
  *v5 = 0;
  *a3 = v25;
  *a4 = ProtoPteAddress;
  MiResolveSharedZeroFault(v37);
  *(_BYTE *)(v6 + 81) = BYTE1(v37[0]);
  return v4;
}
