/*
 * XREFs of VfMajorVerifyIrpStackDownward @ 0x140AD0250
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall VfMajorVerifyIrpStackDownward(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 v10; // rax
  void (__fastcall *v11)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  if ( *a4 > 0x1Bu )
    v10 = (*a4 != 0xFF) + 28LL;
  else
    v10 = (unsigned __int8)*a4;
  v11 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_140D72620 + 12 * v10);
  if ( v11 )
    v11(a1);
  result = qword_140D730A0;
  if ( qword_140D730A0 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_140D730A0(
                                                                                             a1,
                                                                                             a2,
                                                                                             a3,
                                                                                             a4,
                                                                                             *(_QWORD *)(a5 + 8),
                                                                                             a5,
                                                                                             a6);
  return result;
}
