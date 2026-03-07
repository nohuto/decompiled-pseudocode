__int64 __fastcall __DisplayDriverQueryRoutine(unsigned __int16 *a1, __int64 a2, void *a3, unsigned int a4, _QWORD *a5)
{
  size_t v5; // rbx
  unsigned int v7; // edi
  void *v8; // rax
  __int64 result; // rax

  v5 = a4;
  v7 = a4 + 2;
  if ( a4 + 2 < a4 )
    return 3221225626LL;
  v8 = a4 == -2
     ? 0LL
     : (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, v7, 0x73726447u);
  a5[25] = v8;
  if ( !v8 )
    return 3221225626LL;
  memmove(v8, a3, v5);
  *(_WORD *)(v5 + a5[25]) = 0;
  result = 0LL;
  *((_DWORD *)a5 + 64) = v7;
  return result;
}
