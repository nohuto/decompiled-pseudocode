__int64 __fastcall RtlComputeLfnChecksum(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  _WORD *v2; // rdx
  _WORD *v3; // r9

  v1 = 0;
  v2 = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = &v2[(unsigned __int64)*a1 >> 1];
  while ( v2 < v3 )
    v1 = *v2++ + 37 * v1;
  return (unsigned __int16)((int)abs32(314159269 * v1) % 1000000007);
}
