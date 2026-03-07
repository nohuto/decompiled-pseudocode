__int64 __fastcall PopPdcInvocation(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  if ( !(_DWORD)v2 )
    return PopPdcRegister(a1, a2, v2, a1);
  if ( (_DWORD)v2 != 1 )
    return 3221225485LL;
  result = 3221225474LL;
  if ( qword_140C6ABB0 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C6ABB0)(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 1));
  return result;
}
