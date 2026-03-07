_QWORD *__fastcall MiReleaseOutSwapReservations(ULONG_PTR *a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rsi
  _QWORD v7[16]; // [rsp+28h] [rbp-39h] BYREF

  memset(&v7[2], 0, 0x68uLL);
  v7[0] = 0LL;
  result = v7;
  v7[5] = 0LL;
  v7[6] = 0LL;
  v7[3] = v7;
  v7[1] = 4096LL;
  LOWORD(v7[2]) = 3;
  v7[4] = 1LL;
  while ( (unsigned __int64)a1 <= a2 )
  {
    v5 = *a1;
    v6 = *a1 + a1[1];
    while ( v5 < v6 )
    {
      do
      {
        v7[0] = v5;
        result = (_QWORD *)MmAccessFault(0LL, v5);
      }
      while ( (_DWORD)result == 873 );
      v5 += 4096LL;
    }
    a1 += 2;
  }
  return result;
}
