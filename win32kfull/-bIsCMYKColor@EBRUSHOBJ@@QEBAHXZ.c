__int64 __fastcall EBRUSHOBJ::bIsCMYKColor(EBRUSHOBJ *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 18);
  result = 1LL;
  if ( (v1 & 1) == 0 || !*((_QWORD *)this + 8) || (v1 & 0x10000000) == 0 )
    return 0LL;
  return result;
}
