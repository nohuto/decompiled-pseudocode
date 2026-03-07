__int64 __fastcall EPATHOBJ::cTotalPts(EPATHOBJ *this)
{
  __int64 result; // rax
  __int64 *i; // rdx

  result = 0LL;
  for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 32LL); i; i = (__int64 *)*i )
    result = (unsigned int)(*((_DWORD *)i + 5) + result);
  return result;
}
