_QWORD *__fastcall KiFindRescheduleContextEntryForPrcb(_BYTE *a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  _QWORD *i; // rax

  v2 = 0LL;
  v3 = 0;
  if ( *a1 )
  {
    for ( i = a1 + 16; *i != a2; i += 5 )
    {
      if ( ++v3 >= (unsigned int)(unsigned __int8)*a1 )
        return (_QWORD *)v2;
    }
    return i;
  }
  return (_QWORD *)v2;
}
