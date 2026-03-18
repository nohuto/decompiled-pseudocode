/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x140A92668
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140A82730 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140A82930 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorIsValidIrpStatus(_BYTE *a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int (__fastcall *v5)(_BYTE *); // rax

  if ( *a1 > 0x1Bu )
    v4 = (*a1 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a1;
  v5 = (unsigned int (__fastcall *)(_BYTE *))*((_QWORD *)&unk_140D59780 + 12 * v4);
  if ( (!v5 || v5(a1)) && qword_140D5A200 )
    return qword_140D5A200(a1, a2);
  else
    return 0LL;
}
