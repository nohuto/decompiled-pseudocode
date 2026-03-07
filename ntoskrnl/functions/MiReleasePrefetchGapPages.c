__int64 __fastcall MiReleasePrefetchGapPages(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = MiReturnPfnReferenceCount(a1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
