__int64 __fastcall CSTPush(int a1, __int64 a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v3 = &gCSTParam;
  v4 = 0LL;
  do
  {
    if ( !*v3 )
    {
      v5 = 3 * v4;
      result = 1LL;
      *((_QWORD *)&gCSTParam + v5) = a2;
      *((_DWORD *)&gCSTParam + 2 * v5 + 4) = a1;
      return result;
    }
    v4 = (unsigned int)(v4 + 1);
    v3 += 3;
  }
  while ( (unsigned int)v4 < 0x1E );
  return 0LL;
}
