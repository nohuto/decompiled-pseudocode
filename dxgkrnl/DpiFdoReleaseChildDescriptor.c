/*
 * XREFs of DpiFdoReleaseChildDescriptor @ 0x1C03985D0
 * Callers:
 *     DpiFdoCreateChildDescriptor @ 0x1C0208C54 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C0398644 (DpiFdoRemoveChildDescriptor.c)
 *     DpiPdoDestroyPdo @ 0x1C03A4CB0 (DpiPdoDestroyPdo.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoReleaseChildDescriptor(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 14, 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)P + 10) = 0LL;
    v2 = (void *)*((_QWORD *)P + 13);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *((_QWORD *)P + 13) = 0LL;
    }
    v3 = (void *)*((_QWORD *)P + 9);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *((_QWORD *)P + 9) = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
