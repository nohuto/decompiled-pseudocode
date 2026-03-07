__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 updated; // rbx
  int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  updated = MiUpdateTransitionPteFrame(v6, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4));
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_8;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_8;
    }
    if ( (updated & 1) != 0 )
      updated |= 0x8000000000000000uLL;
  }
LABEL_8:
  *a1 = updated;
  if ( v8 )
    MiWritePteShadow((__int64)a1, updated, v9);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntryEx(a3, (__int128 *)a2);
  v11 = 3LL;
  if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 3 )
    MiSetPfnIdentity(a3, 3);
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  v12 = *(_QWORD *)(a2 + 16);
  if ( (v12 & 4) != 0 )
  {
    v12 &= ~4uLL;
    *(_QWORD *)(a2 + 16) = v12;
  }
  if ( (v12 & 2) != 0 )
    *(_QWORD *)(a2 + 16) = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2, v11, v10) )
    MiPfnReferenceCountIsZero(a2, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  else
    *(_WORD *)(a3 + 32) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
