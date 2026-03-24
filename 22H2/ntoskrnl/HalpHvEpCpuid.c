/*
 * XREFs of HalpHvEpCpuid @ 0x1404C1DF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall HalpHvEpCpuid(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( (a1 & 0x100000000LL) != 0 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a3 = (_DWORD)result;
    *a4 = _RBX;
    *a5 = _RCX;
    *a6 = _RDX;
  }
  else
  {
    result = qword_140C4A268;
    if ( qword_140C4A268 )
    {
      LODWORD(a1) = a1 & 0x7FFFFFFF;
      result = (__int64 (__fastcall *)(_QWORD))qword_140C4A268(a1);
      if ( (int)result >= 0 )
        return result;
      *a3 = 0;
      *a4 = 0;
    }
    else
    {
      *a3 = 0;
      *a4 = 0;
    }
    *a5 = 0;
    *a6 = 0;
  }
  return result;
}
