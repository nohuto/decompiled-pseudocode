__int64 __fastcall CSTPop(unsigned int *a1, void **a2)
{
  unsigned int v2; // eax
  _QWORD *i; // r8
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx

  v2 = 0;
  for ( i = &gCSTParam; !*i; i += 3 )
  {
    if ( ++v2 >= 0x1E )
      return 0LL;
  }
  v7 = v2;
  result = 1LL;
  v8 = 3 * v7;
  *a2 = (void *)*((_QWORD *)&gCSTParam + 3 * v7);
  *a1 = *((_DWORD *)&gCSTParam + 6 * v7 + 4);
  *((_DWORD *)&gCSTParam + 2 * v8 + 4) = 0;
  *((_QWORD *)&gCSTParam + v8) = 0LL;
  return result;
}
