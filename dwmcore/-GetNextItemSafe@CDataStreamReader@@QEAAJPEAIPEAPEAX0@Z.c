__int64 __fastcall CDataStreamReader::GetNextItemSafe(
        CDataStreamReader *this,
        unsigned int *a2,
        void **a3,
        unsigned int *a4)
{
  unsigned int *v4; // r11
  __int64 result; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx

  v4 = (unsigned int *)*((_QWORD *)this + 1);
  result = 2147500037LL;
  v7 = *(_QWORD *)this + *((unsigned int *)this + 4) - (_QWORD)v4;
  if ( v7 )
  {
    if ( v7 >= 8 )
    {
      v8 = *v4;
      if ( (unsigned int)v8 >= 8 && (v8 & 3) == 0 && v8 <= v7 )
      {
        *a2 = v4[1];
        *a4 = v8 - 4;
        *((_QWORD *)this + 1) = (char *)v4 + v8;
        result = 0LL;
        *a3 = v4 + 1;
      }
    }
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0;
    return 1LL;
  }
  return result;
}
