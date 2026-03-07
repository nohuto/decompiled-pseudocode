_QWORD *__fastcall CCD_TOPOLOGY::SetUsedReservedFields(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r10
  unsigned int i; // r11d
  _QWORD *result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  for ( i = 0; i < *(unsigned __int16 *)(v3 + 20); v3 = *(_QWORD *)(a1 + 64) )
  {
    v7 = i++;
    v8 = 296 * v7;
    *(_OWORD *)(v8 + v3 + 312) = 0LL;
    *(_OWORD *)(v8 + v3 + 328) = 0LL;
    *(_QWORD *)(v8 + v3 + 344) = 0LL;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + v8 + 312) = a3;
  }
  *(_DWORD *)(a1 + 88) = a3;
  result = a2;
  *a2 = a1;
  return result;
}
