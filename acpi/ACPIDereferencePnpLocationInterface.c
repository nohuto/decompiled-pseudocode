/*
 * XREFs of ACPIDereferencePnpLocationInterface @ 0x1C0087530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIDereferencePnpLocationInterface(_QWORD *P)
{
  void (__fastcall *v3)(_QWORD); // rax

  if ( (*((_DWORD *)P + 12))-- == 1 )
  {
    v3 = (void (__fastcall *)(_QWORD))P[4];
    if ( v3 )
      v3(P[2]);
    ExFreePoolWithTag(P, 0);
  }
}
