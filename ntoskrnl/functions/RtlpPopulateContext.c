_QWORD *__fastcall RtlpPopulateContext(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdx
  _QWORD *result; // rax
  _QWORD *v6; // r10
  unsigned __int64 v7; // r11
  _QWORD *v8; // r9
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx

  v3 = (69069 * (a3 >> a1[1]) + 1) & 0xFFFF0000 | ((1103515245 * (a3 >> a1[1]) + 12345) >> 16);
  v4 = v3 & a1[4];
  if ( (unsigned int)v4 < a1[3] )
    v4 = v3 & ((2 * a1[4]) | 1);
  result = (_QWORD *)RtlpGetChainHead(a1, v4);
  v8 = result;
  v9 = result;
  v10 = (_QWORD *)*result;
  if ( (_QWORD *)*result != result )
  {
    do
    {
      result = (_QWORD *)v10[2];
      if ( result && (unsigned __int64)result >= v7 )
        break;
      result = (_QWORD *)*v10;
      v9 = v10;
      v10 = result;
    }
    while ( result != v8 );
  }
  *v6 = v8;
  v6[1] = v9;
  v6[2] = v7;
  return result;
}
