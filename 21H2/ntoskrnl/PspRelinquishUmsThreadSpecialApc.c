/*
 * XREFs of PspRelinquishUmsThreadSpecialApc @ 0x14090ECD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E9A4 (PspDisassociateUmsThreadFromPrimary.c)
 */

__int64 __fastcall PspRelinquishUmsThreadSpecialApc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        PETHREAD *a4,
        PADAPTER_OBJECT *a5)
{
  int *v6; // r8
  struct _KTHREAD *CurrentThread; // rcx
  int v8; // eax

  v6 = *(int **)(a1 + 88);
  CurrentThread = *a4;
  v8 = 0;
  if ( !*a4 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    v8 = PspDisassociateUmsThreadFromPrimary(*a4, *a5, v6);
  else
    *v6 |= 2u;
  *(_DWORD *)(a1 + 96) = v8;
  return KeSignalGate(a1 + 104, 1);
}
