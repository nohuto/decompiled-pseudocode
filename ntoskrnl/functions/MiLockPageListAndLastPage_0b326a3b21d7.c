void __fastcall MiLockPageListAndLastPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  _DWORD *v7; // rcx
  __int64 v8; // rdx

  v2 = a1 + 40;
  v3 = a2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
  {
LABEL_16:
    if ( *(_BYTE *)(v3 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v3 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v3 + 24) = 0;
    }
    if ( *(_BYTE *)(v3 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v3 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v3 + 48) = 0;
    }
    if ( *(_BYTE *)(v3 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v3 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v3 + 72) = 0;
    }
    if ( *(_BYTE *)(v3 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v3 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v3 + 96) = 0;
    }
    *(_BYTE *)v3 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(a1 + 24);
        if ( v5 != 0x3FFFFFFFFFLL )
          break;
        v6 = 0LL;
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
        if ( *(_QWORD *)(a1 + 24) == 0x3FFFFFFFFFLL )
          goto LABEL_14;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      }
      v6 = 48 * v5 - 0x220000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_16;
      }
      v7 = (_DWORD *)(a1 + 32);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v7, a2);
      }
      else if ( !ExpTryAcquireSpinLockShared(v7) )
      {
        ExpWaitForSpinLockSharedAndAcquire(a1 + 32, 0xFFu);
      }
      if ( v5 == *(_QWORD *)(a1 + 24) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( 48 * v5 != 0x220000000000LL )
    {
      v8 = 48 * v5 - 0x220000000000LL;
      goto LABEL_10;
    }
LABEL_14:
    v5 = 0x3FFFFFFFFFLL;
    v8 = v2;
LABEL_10:
    *(_QWORD *)(v3 + 16) = v8;
    *(_QWORD *)(v3 + 8) = v5;
    *(_BYTE *)(v3 + 24) = 1;
    *(_QWORD *)(v3 + 40) = v2;
    *(_QWORD *)(v3 + 32) = 0x3FFFFFFFFFLL;
    if ( v6 )
      *(_BYTE *)(v3 + 48) = 1;
    *(_BYTE *)v3 = 1;
  }
}
