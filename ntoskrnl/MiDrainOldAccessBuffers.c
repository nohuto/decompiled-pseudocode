/*
 * XREFs of MiDrainOldAccessBuffers @ 0x140330C2C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiDrainOldAccessBuffers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 **v4; // rbx
  __int64 SharedVm; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  unsigned __int64 *v11; // rcx
  __int64 v12; // rax

  v4 = (unsigned __int64 **)&unk_140C69E28;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v4 = (unsigned __int64 **)(a1 + 232);
  if ( *v4 )
  {
    SharedVm = MiGetSharedVm(a1, a2, a3, a4);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
    v11 = *v4;
    if ( *v4 )
    {
      v8 = (unsigned __int64 *)*v11;
      v9 = *v4;
      if ( *v11 )
      {
        do
        {
          v9 = v8;
          v8 = (unsigned __int64 *)*v8;
        }
        while ( v8 );
      }
      if ( a2 - v9[2] > PfKernelGlobals )
      {
        MiEmptyPageAccessLog(v11);
        *v4 = 0LL;
      }
    }
    v12 = MiGetSharedVm(a1, v8, v9, v10);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
  }
}
