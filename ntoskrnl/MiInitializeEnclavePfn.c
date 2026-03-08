/*
 * XREFs of MiInitializeEnclavePfn @ 0x140645B58
 * Callers:
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, char a3)
{
  _KPROCESS *Process; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  char v8; // al
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // dl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = (unsigned __int8)MiLockPageInline(v6);
  v8 = *(_BYTE *)(v6 + 34) & 0xF8 | 6;
  *(_QWORD *)v6 ^= (*(_QWORD *)v6 ^ ((unsigned __int64)Process >> 3)) & 0xFFFFFFFFFFELL;
  *(_BYTE *)(v6 + 34) = v8;
  v9 = *(_QWORD *)(v6 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v6 + 32) = 1;
  *(_QWORD *)(v6 + 24) = v9 | 1;
  *(_BYTE *)(v6 + 34) |= 0x10u;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = MiSwizzleInvalidPte(32LL * (a3 & 0x1F));
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & v10) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v10 + (unsigned __int8)v7));
      v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  return result;
}
