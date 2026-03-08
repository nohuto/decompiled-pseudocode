/*
 * XREFs of HalpDeleteSecondaryIcEntry @ 0x14051787C
 * Callers:
 *     HalpUnregisterSecondaryIcInterface @ 0x1405180D0 (HalpUnregisterSecondaryIcInterface.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140517798 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x140518028 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDeleteSecondaryIcEntry(PVOID P)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)P + 29, 0, 0) <= 0 )
  {
    HalpAcquireSecondaryIcEntryExclusive((volatile signed __int32 *)P, &v7);
    v4 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    LOBYTE(v3) = v7;
    *v5 = v4;
    v4[1] = v5;
    HalpReleaseSecondaryIcEntryExclusive(P, v3);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 6), 0x746C6644u);
    ExFreePoolWithTag(P, 0x326C6148u);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
