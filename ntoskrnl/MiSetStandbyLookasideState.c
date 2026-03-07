unsigned __int64 __fastcall MiSetStandbyLookasideState(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 result; // rax

  v2 = 6 * a1;
  v3 = *(_QWORD *)(48 * a1 - 0x21FFFFFFFFF0LL);
  v4 = a2 & 1;
  if ( (v3 & 0x400) != 0 )
  {
    v5 = 8 * v4;
    v6 = v3 & 0xFFFFFFFFFFFFFFF7uLL;
  }
  else
  {
    v5 = v4 << 27;
    v6 = v3 & 0xFFFFFFFFF7FFFFFFuLL;
  }
  result = v6 | v5;
  *(_QWORD *)(8 * v2 - 0x21FFFFFFFFF0LL) = result;
  return result;
}
