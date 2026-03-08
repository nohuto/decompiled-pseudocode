/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x140A2A740
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140AD8020 (VfThunkAddSpecialDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v6; // ebx
  ULONG v7; // edi
  struct _KTHREAD *Lock; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 *v14; // rax
  NTSTATUS v15; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v6 = 0;
  if ( !(unsigned int)VfIsVerifierEnabled() || (VfRuleClasses & 0xFF217644) == 0 )
    return -1073741637;
  v7 = ThunkBufferSize >> 4;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741583;
  VfNumberOfClassDriverThunks += v7;
  Lock = MmAcquireLoadLock();
  v10 = MiLookupDataTableEntry(EntryRoutine, 0);
  v11 = v10;
  if ( v10 && (v12 = v10[6], retaddr >= v12) && (v13 = v12 + *((unsigned int *)v10 + 16), retaddr < v13) )
  {
    v14 = (unsigned __int64 *)((char *)ThunkBuffer + 8);
    while ( *v14 >= v12 && *v14 < v13 )
    {
      v14 += 2;
      if ( ++v6 >= v7 )
      {
        v15 = VfThunkAddSpecialDriverThunks(EntryRoutine, ThunkBuffer, ThunkBufferSize, v11);
        goto LABEL_16;
      }
    }
    v15 = -1073741584;
  }
  else
  {
    v15 = -1073741585;
  }
LABEL_16:
  MmReleaseLoadLock((__int64)Lock);
  return v15;
}
