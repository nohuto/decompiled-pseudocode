__int64 __fastcall PpmPerfCompleteMakeup(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    v1[1] = v1[4];
    result = v1[5];
    *v1 = result;
  }
  return result;
}
