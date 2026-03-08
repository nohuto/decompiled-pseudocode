/*
 * XREFs of IopRaiseInformationalHardError @ 0x140942650
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseInformationalHardError(char *P)
{
  void *v2; // rcx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char *v4; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = P + 24;
  if ( ExReadyForErrors )
    ExRaiseHardError(
      *((unsigned int *)P + 4),
      *((_QWORD *)P + 4) != 0LL,
      *((_QWORD *)P + 4) != 0LL,
      (unsigned __int64)&v4 & -(__int64)(*((_QWORD *)P + 4) != 0LL),
      7,
      &v3);
  v2 = (void *)*((_QWORD *)P + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_140C5D9BC);
}
