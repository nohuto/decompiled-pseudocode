__int64 __fastcall MiIsPageInIoHugeRangeTransition(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned int v4; // r9d

  result = MiIsPageInHugePfn(a1, a2, a1);
  v4 = 0;
  if ( (_DWORD)result )
  {
    LOBYTE(v4) = (*(_BYTE *)(qword_140C67A70 + 8 * ((v3 >> 18) & 0x3FFFFF)) & 7) == 5;
    return v4;
  }
  return result;
}
