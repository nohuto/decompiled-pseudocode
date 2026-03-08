/*
 * XREFs of HalpHvEpWriteMsr @ 0x140508F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall HalpHvEpWriteMsr(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  if ( (a1 & 0x100000000LL) != 0 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a3;
    __writemsr(a2, a3);
  }
  else
  {
    result = qword_140C62180;
    if ( qword_140C62180 )
    {
      LODWORD(a1) = a1 & 0x7FFFFFFF;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_140C62180(a1, 1LL, &v4, &v5);
    }
  }
  return result;
}
