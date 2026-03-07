__int64 __fastcall MiMakeCombineCandidateClean(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v7;
  v5 = MI_READ_PTE_LOCK_FREE(&v7);
  MiWriteValidPteNewProtection(a1, v4 & 0xFFFFFFFFFFFFFFBDuLL);
  result = MiLockPageAndSetDirty(48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1LL);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x600000;
    if ( (_DWORD)result == 6291456 )
      return MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, a1 << 25 >> 16, a2);
  }
  return result;
}
