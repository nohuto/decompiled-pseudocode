__int64 __fastcall ExpWnfAllocateScopeMap(_QWORD *a1)
{
  __int64 Pool2; // rax
  _DWORD *v3; // rbx
  unsigned int v4; // ecx
  _QWORD *v5; // rax

  Pool2 = ExAllocatePool2(256LL, 176LL, 543583831LL);
  v3 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset((void *)(Pool2 + 4), 0, 0xACuLL);
  v4 = 0;
  *v3 = 11536641;
  v5 = v3 + 10;
  do
  {
    v5[1] = v5;
    ++v4;
    *v5 = v5;
    *(v5 - 1) = 0LL;
    v5 += 3;
  }
  while ( v4 < 6 );
  *a1 = v3;
  return 0LL;
}
