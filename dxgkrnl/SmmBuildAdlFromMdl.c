_QWORD *__fastcall SmmBuildAdlFromMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  _QWORD *v5; // rdx
  __int64 *v6; // r10
  _QWORD *result; // rax
  __int64 v8; // rax

  v4 = a2 + 48;
  v5 = *(_QWORD **)(a1 + 16);
  v6 = (__int64 *)(v4 + 8 * a3);
  result = &v5[a4];
  if ( v5 != result )
  {
    do
    {
      v8 = *v6++;
      *v5++ = v8;
      result = *(_QWORD **)(a1 + 16);
    }
    while ( v5 != &result[a4] );
  }
  return result;
}
