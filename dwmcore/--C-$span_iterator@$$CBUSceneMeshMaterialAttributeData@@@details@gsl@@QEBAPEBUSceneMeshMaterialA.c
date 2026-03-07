unsigned __int64 __fastcall gsl::details::span_iterator<SceneMeshMaterialAttributeData const>::operator->(
        gsl::details *a1)
{
  unsigned __int64 result; // rax

  if ( !*(_QWORD *)a1
    || !*((_QWORD *)a1 + 1)
    || (result = *((_QWORD *)a1 + 2), *(_QWORD *)a1 > result)
    || result >= *((_QWORD *)a1 + 1) )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  return result;
}
