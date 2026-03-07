_WORD *__fastcall WmipCountedToSz(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdi
  _WORD *Pool2; // rax
  _WORD *v4; // rbx

  v1 = *a1;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v1 + 2, 1885957463LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1 + 1, (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
