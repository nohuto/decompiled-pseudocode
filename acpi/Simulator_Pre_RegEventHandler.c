__int64 __fastcall Simulator_Pre_RegEventHandler(unsigned int a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 *a5)
{
  __int64 v6; // r14
  _DWORD *inited; // rax
  __int64 result; // rax
  __int64 v11; // rdx

  v6 = a1;
  inited = Simulator_AllocAndInitTestData();
  *a5 = (__int64)inited;
  if ( !inited )
    return 3221225626LL;
  *inited = 1;
  inited[1] = 4;
  inited[2] = 4;
  *((_QWORD *)inited + 2) = v6;
  *((_QWORD *)inited + 3) = a2;
  *((_QWORD *)inited + 4) = *a3;
  *((_QWORD *)inited + 5) = *a4;
  result = Simulator_TestNotify(inited);
  if ( !(_DWORD)result )
  {
    v11 = *a5;
    *a3 = *(_QWORD *)(*a5 + 32);
    *a4 = *(_QWORD *)(v11 + 40);
  }
  return result;
}
