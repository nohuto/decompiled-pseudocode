void __fastcall lambda_f2915f0acc4cc36207654c5dacc62844_::_lambda_invoker_cdecl_(void *a1, void *a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9

  if ( a2 )
  {
    v3 = a3[2];
    if ( v3 < a3[1] )
      *(_DWORD *)(*a3 + 4 * v3) = (_DWORD)a1;
    a3[3] += (unsigned int)a2;
    ++a3[2];
  }
}
