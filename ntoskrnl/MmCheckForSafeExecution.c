/*
 * XREFs of MmCheckForSafeExecution @ 0x140A3989C
 * Callers:
 *     KiEmulateAtlThunk @ 0x14057E514 (KiEmulateAtlThunk.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MmValidateUserCallTarget @ 0x140A410E4 (MmValidateUserCallTarget.c)
 */

bool __fastcall MmCheckForSafeExecution(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v9; // di
  __int64 Process; // r14
  __int64 **Address; // rax
  __int64 v12; // r10
  __int64 **v13; // rax

  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( !a4
    && ((MiLocateAddress(a1), Address = MiLocateAddress(a2), !v12)
     || !Address
     || (__int64 **)v12 == Address
     || (*(_DWORD *)(v12 + 48) & 0x70) == 0x20)
    || (v13 = MiLocateAddress(a3)) == 0LL
    || ((_DWORD)v13[6] & 0x70) != 0x20 )
  {
    v9 = 0;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( v9 )
    return (unsigned int)MmValidateUserCallTarget(a3, 1LL) != 0;
  return v9;
}
