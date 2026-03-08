/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x140AD0058
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140AC00C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140AC02C0 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorIsValidIrpStatus(_BYTE *a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int (__fastcall *v5)(_BYTE *); // rax

  if ( *a1 > 0x1Bu )
    v4 = (*a1 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a1;
  v5 = (unsigned int (__fastcall *)(_BYTE *))*((_QWORD *)&unk_140D72640 + 12 * v4);
  if ( (!v5 || v5(a1)) && qword_140D730C0 )
    return qword_140D730C0(a1, a2);
  else
    return 0LL;
}
