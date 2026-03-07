_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 64);
  while ( result )
  {
    if ( a1 > result[6] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a1 >= (result[5] & 0xFFFFFFFFFFFFFFFCuLL) )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return result;
}
