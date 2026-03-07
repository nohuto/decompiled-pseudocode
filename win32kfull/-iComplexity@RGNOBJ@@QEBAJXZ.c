__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  __int64 v1; // r8
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)this + 52LL;
  if ( !*(_QWORD *)this )
    v2 = 28LL;
  v3 = 1;
  if ( *(_DWORD *)v2 != 1 )
  {
    v4 = v1 + 48;
    if ( !v1 )
      v4 = 24LL;
    return (unsigned int)(*(_DWORD *)v4 > 0x38u) + 2;
  }
  return v3;
}
