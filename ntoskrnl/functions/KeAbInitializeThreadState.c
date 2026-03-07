__int64 __fastcall KeAbInitializeThreadState(__int64 a1)
{
  __int64 result; // rax
  _BYTE *v2; // rdx

  LODWORD(result) = 0;
  v2 = (_BYTE *)(a1 + 1712);
  do
  {
    *v2 = result;
    result = (unsigned int)(result + 1);
    v2 += 96;
  }
  while ( (unsigned int)result < 6 );
  *(_DWORD *)(a1 + 116) |= 1u;
  *(_QWORD *)(a1 + 808) = 1LL;
  *(_QWORD *)(a1 + 816) = 1LL;
  *(_BYTE *)(a1 + 792) = 63;
  return result;
}
