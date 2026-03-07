__int64 __fastcall SepDuplicateLogonSessionReference(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(a2 + 200) & 0x20) != 0 )
  {
    result = SepReferenceLogonSession(a2 + 24, v2);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 200) |= 0x20u;
      *v2 = 0LL;
    }
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 216);
    *v2 = v4;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
      __fastfail(0xEu);
    return 0LL;
  }
  return result;
}
