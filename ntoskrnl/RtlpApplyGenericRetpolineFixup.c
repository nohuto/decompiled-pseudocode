_BYTE *__fastcall RtlpApplyGenericRetpolineFixup(unsigned __int64 a1, unsigned int a2, _WORD *a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r11d
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  char *v8; // r9
  int v9; // r10d
  _BYTE *result; // rax

  v4 = a2;
  v5 = 0;
  v6 = a4;
  v7 = a1 + v4;
  v8 = (char *)a3 - a4 - a1;
  v9 = 1;
  result = (_BYTE *)(v6 + a1);
  do
  {
    if ( (unsigned __int64)result >= a1 )
    {
      if ( (unsigned __int64)result >= v7 )
        return result;
      if ( (*a3 & (unsigned __int16)v9) != 0 )
        *result = result[(_QWORD)v8 + 2];
    }
    ++v5;
    v9 = __ROL4__(v9, 1);
    ++result;
  }
  while ( v5 < 0xC );
  return result;
}
