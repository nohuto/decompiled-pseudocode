__int64 __fastcall MiGetImageBitMapInfo(int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax

  a2[1] = 0LL;
  if ( a1 == 1 )
  {
    *a3 = 2013265920LL;
    result = (__int64)&qword_140C65458;
    *a2 = &qword_140C65458;
    if ( a4 )
    {
      result = qword_140C65468;
      goto LABEL_6;
    }
  }
  else
  {
    if ( a1 == 2 )
    {
      *a2 = &unk_140C65400;
      result = (__int64)&qword_140C65458;
      a2[1] = &qword_140C65458;
    }
    else
    {
      if ( a1 != 3 )
      {
        *a2 = &qword_140C653C8;
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
        if ( !a4 )
          return result;
        result = qword_140C653D8;
        goto LABEL_6;
      }
      result = (__int64)&unk_140C65400;
      *a2 = &unk_140C65400;
    }
    *a3 = 2013265920LL;
    if ( a4 )
    {
      result = qword_140C65440;
LABEL_6:
      *a4 = result;
    }
  }
  return result;
}
