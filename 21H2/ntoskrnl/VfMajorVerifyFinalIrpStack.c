/*
 * XREFs of VfMajorVerifyFinalIrpStack @ 0x140A927E8
 * Callers:
 *     IovpCompleteRequest2 @ 0x140A8C1BC (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall VfMajorVerifyFinalIrpStack(__int64 a1, _BYTE *a2))(_QWORD, _QWORD)
{
  __int64 v4; // rax
  void (__fastcall *v5)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  if ( *a2 > 0x1Bu )
    v4 = (*a2 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a2;
  v5 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_140D59798 + 12 * v4);
  if ( v5 )
    v5(a1);
  result = qword_140D5A218;
  if ( qword_140D5A218 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_140D5A218(a1, a2);
  return result;
}
