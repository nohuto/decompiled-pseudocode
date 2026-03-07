__int64 (__fastcall *__fastcall VfMajorVerifyIrpStackUpward(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        int a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD)
{
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, _BYTE *, _QWORD, __int64, int, int); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD); // rax

  if ( *a2 > 0x1Bu )
    v9 = (*a2 != 0xFF) + 28LL;
  else
    v9 = (unsigned __int8)*a2;
  v10 = (void (__fastcall *)(__int64, _BYTE *, _QWORD, __int64, int, int))*((_QWORD *)&unk_140D72628 + 12 * v9);
  if ( v10 )
    v10(a1, a2, *(_QWORD *)(a3 + 8), a3, a4, a5);
  result = qword_140D730A8;
  if ( qword_140D730A8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))qword_140D730A8(
                                                                                     a1,
                                                                                     a2,
                                                                                     *(_QWORD *)(a3 + 8),
                                                                                     a3,
                                                                                     a4,
                                                                                     a5);
  return result;
}
