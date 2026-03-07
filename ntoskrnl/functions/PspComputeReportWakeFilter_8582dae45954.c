__int64 __fastcall PspComputeReportWakeFilter(_DWORD *a1, _QWORD *a2, __int64 *a3, char a4)
{
  __int64 v4; // rax
  _DWORD *v5; // r8
  __int64 result; // rax

  v4 = *a3;
  v5 = (_DWORD *)a2 + 1;
  *a2 = v4;
  if ( a4 )
  {
    *(_DWORD *)a2 &= ~a1[292];
    *v5 &= ~a1[293];
  }
  *v5 &= a1[294];
  result = (unsigned int)~*v5;
  a1[294] &= result;
  return result;
}
