__int64 __fastcall PopReadProducerConsumerBuffer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax

  v6 = a3;
  if ( !a6 && a2 + (_DWORD)a1 - *a4 <= a4[2] )
    return a1;
  v7 = __rdtsc();
  ProducerConsumerCopyFromContextBuffer(a3, a2, a4, a1);
  v8 = __rdtsc();
  *(_QWORD *)(a5 + 72) += (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - v7;
  return v6;
}
