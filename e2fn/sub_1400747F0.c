__int64 (__fastcall *__fastcall sub_1400747F0(_QWORD *a1))(_QWORD *)
{
  __int64 (__fastcall *v1)(_QWORD, _QWORD *); // rax
  __int64 (__fastcall *result)(_QWORD *); // rax

  v1 = (__int64 (__fastcall *)(_QWORD, _QWORD *))a1[11];
  if ( v1 && a1[8] )
    return (__int64 (__fastcall *)(_QWORD *))v1(a1[8], a1 + 2);
  result = (__int64 (__fastcall *)(_QWORD *))a1[10];
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *))result(a1 + 2);
  return result;
}
