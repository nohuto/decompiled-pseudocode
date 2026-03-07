__int64 (__fastcall *__fastcall VfMajorVerifyNewIrp(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 v9; // rax
  void (__fastcall *v10)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  if ( *a3 > 0x1Bu )
    v9 = (*a3 != 0xFF) + 28LL;
  else
    v9 = (unsigned __int8)*a3;
  v10 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_140D72650 + 12 * v9);
  if ( v10 )
    v10(a1);
  result = qword_140D730D0;
  if ( qword_140D730D0 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_140D730D0(a1, a2, a3, a4, a5);
  return result;
}
