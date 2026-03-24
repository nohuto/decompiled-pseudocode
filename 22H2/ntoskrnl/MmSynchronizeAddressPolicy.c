/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x14079925C
 * Callers:
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1, a3);
}
