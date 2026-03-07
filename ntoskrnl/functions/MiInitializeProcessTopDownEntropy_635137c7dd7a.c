_QWORD *__fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  _QWORD *result; // rax

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
    v2 = *(_QWORD *)(a1 + 1496);
  v4 = (-(__int64)(a2 != 0) & 0xFFFFFFF600010000uLL) + 0x7FFFFFFF0000LL;
  if ( (*(_DWORD *)(a1 + 2512) & 0x40) == 0 )
  {
    if ( v2 )
      v2 -= (unsigned __int8)ExGenRandom(1) << 16;
    v4 -= (unsigned int)ExGenRandom(1) << 16;
  }
  result = *(_QWORD **)(a1 + 1680);
  if ( v2 )
    result[30] = v4;
  else
    v2 = v4;
  result[12] = v2;
  result[21] = v2;
  return result;
}
