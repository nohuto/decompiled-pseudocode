/*
 * XREFs of MmGetImageInformation @ 0x14077582C
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14039DB7C (RtlpLookupUserFunctionTable.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1405AF9E0 (RtlGetImageBaseAndLoadConfig.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140775328 (EtwpLocateDbgIdForRegEntry.c)
 *     KiCheckUserAddressCetCompat @ 0x14097262C (KiCheckUserAddressCetCompat.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E6400 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiCheckForConflictingVad @ 0x14034C30C (MiCheckForConflictingVad.c)
 */

__int64 __fastcall MmGetImageInformation(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v9; // edi
  int v10; // r14d
  __int64 Process; // rsi
  __int64 **v12; // rax

  if ( a1 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( ((__int64)CurrentThread[1].Queue & 3) == 0 )
  {
    v10 = 1;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
  }
  v12 = MiCheckForConflictingVad(Process, a1, a1);
  if ( v12 )
  {
    if ( ((_DWORD)v12[6] & 0x70) == 0x20 )
    {
      *a2 = (*((unsigned int *)v12 + 6) | ((unsigned __int64)*((unsigned __int8 *)v12 + 32) << 32)) << 12;
      *a3 = ((*((unsigned int *)v12 + 7) | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32))
           - (*((unsigned int *)v12 + 6) | ((unsigned __int64)*((unsigned __int8 *)v12 + 32) << 32))
           + 1) << 12;
      *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)*v12[9] + 56LL) + 76LL) & 1;
    }
    else
    {
      v9 = -1073741751;
    }
  }
  else
  {
    v9 = -1073741800;
  }
  if ( v10 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v9;
}
