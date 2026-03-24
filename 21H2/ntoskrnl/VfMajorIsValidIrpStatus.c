/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x1409D7AE0
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409C7740 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorIsValidIrpStatus(_BYTE *a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int (__fastcall *v5)(_BYTE *); // rax

  if ( *a1 > 0x1Bu )
    v4 = (*a1 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a1;
  v5 = (unsigned int (__fastcall *)(_BYTE *))*((_QWORD *)&unk_140D4C0F0 + 12 * v4);
  if ( (!v5 || v5(a1)) && qword_140D4CB70 )
    return qword_140D4CB70(a1, a2);
  else
    return 0LL;
}
