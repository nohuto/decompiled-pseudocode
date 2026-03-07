__int64 __fastcall RGNCOREOBJ::iComplexity(RGNCOREOBJ *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 28LL) != 1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL) > 0x38u) + 2;
  return result;
}
